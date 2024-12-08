format PE GUI 4.0

entry start

include 'Units/Units.inc'

section '.text' code readable executable

  start:  
        invoke  GetModuleHandle, 0
        mov     [windowClass.hInstance], eax
        invoke  LoadIcon, [windowClass.hInstance], 2
        mov     [windowClass.hIcon], eax
        invoke  LoadCursor, 0, IDC_ARROW
        mov     [windowClass.hCursor], eax
        invoke  RegisterClass, windowClass
        invoke  CreateWindowEx, 0, windowClassName, windowTitle,\
                                WS_VISIBLE + WS_POPUP + WS_MAXIMIZE,\ 
                                0, 0, 0, 0,\ 
                                NULL, NULL, [windowClass.hInstance], NULL
                                
        invoke ShowCursor, FALSE                                       

  .loop:
        invoke  GetMessage, windowMessage, NULL, 0, 0
        test    eax, eax
        jz      .exit
        invoke  TranslateMessage, windowMessage
        invoke  DispatchMessage, windowMessage
        jmp     .loop

  .exit:
        invoke ShowCursor, TRUE
        
        invoke  ExitProcess, [windowMessage.wParam]

proc WindowProc uses ebx esi edi,\
     hwnd, wmsg, wparam, lparam
        cmp     [wmsg], WM_CREATE
        je      .wmcreate
        cmp     [wmsg], WM_DESTROY
        je      .wmdestroy
        cmp     [wmsg], WM_KEYDOWN
        je      .wmkeydown
        cmp     [wmsg], WM_KEYUP
        je      .wmkeyup
        cmp     [wmsg], WM_PAINT
        je      .wmpaint
        cmp     [wmsg], WM_SIZE
        je      .wmsize
        cmp     [wmsg], WM_TIMER
        je      .wmtimer
        
  .defwndproc:
        invoke  DefWindowProc, [hwnd], [wmsg], [wparam], [lparam]
        jmp     .exit
        
  .wmcreate:
        invoke  GetDC, [hwnd]
        mov     [hdc], eax
        mov     edi, pfd
        mov     ecx, sizeof.PIXELFORMATDESCRIPTOR shr 2
        xor     eax, eax
        rep     stosd
        mov     [pfd.nSize], sizeof.PIXELFORMATDESCRIPTOR
        mov     [pfd.nVersion], 1
        mov     [pfd.dwFlags], PFD_SUPPORT_OPENGL + PFD_DOUBLEBUFFER + PFD_DRAW_TO_WINDOW
        mov     [pfd.iLayerType], PFD_MAIN_PLANE
        mov     [pfd.iPixelType], PFD_TYPE_RGBA
        mov     [pfd.cColorBits], 16
        mov     [pfd.cDepthBits], 16
        mov     [pfd.cAccumBits], 0
        mov     [pfd.cStencilBits], 0
        invoke  ChoosePixelFormat, [hdc], pfd
        invoke  SetPixelFormat, [hdc], eax, pfd
        invoke  wglCreateContext, [hdc]
        mov     [hrc], eax
        invoke  wglMakeCurrent, [hdc], [hrc]
        invoke  GetClientRect, [hwnd], rc
        
        stdcall File.ReadLevelStatistics        
        stdcall Menu.Start
              
        xor     eax, eax
        jmp     .exit
        
  .wmdestroy:
        invoke  wglMakeCurrent, 0, 0
        invoke  wglDeleteContext, [hrc]
        invoke  ReleaseDC, [hwnd], [hdc]
        invoke  PostQuitMessage, 0
        
        stdcall File.WriteLevelStatistics
        
        xor     eax, eax
        jmp     .exit
        
  .wmkeydown:
  
        stdcall [windowProcFunctions.refKeyDown], [wparam]
        
        jmp     .exit
  
  .wmkeyup:
  
        stdcall [windowProcFunctions.refKeyUp], [wparam]
        
        jmp     .exit
        
  .wmpaint:
  
        stdcall [windowProcFunctions.refPaint]
        
        invoke  SwapBuffers, [hdc]
           
        xor     eax, eax
        jmp     .wmtimer
        
  .wmsize:
        invoke  GetClientRect, [hwnd], rc
        invoke  glViewport, 0, 0, [rc.right], [rc.bottom]
        
        cmp     DWORD [rc.right], 1920
        jne     .forNotMyScale
        cmp     DWORD [rc.bottom], 1080
        jne     .forNotMyScale
  
  .forMyScale:      
        mov     eax, [rc.right]
        mov     [Screen.screen.object.width], eax
        mov     eax, [rc.bottom]
        mov     [Screen.screen.object.height], eax
        jmp     @F
  
  .forNotMyScale:      
        mov     [Screen.screen.object.width], 1535
        mov     [Screen.screen.object.height], 850         
  
  @@:      
        xor     eax, eax
        jmp     .exit
        
  .wmtimer:
  
        stdcall [windowProcFunctions.refTimer]
        
  .exit:
        ret
endp

section '.data' data readable writeable

  windowClass     WNDCLASS 0, WindowProc, 0, 0, NULL, NULL, NULL, NULL, NULL, windowClassName
  windowClassName db 'Main', 0
  windowTitle     db 'DIO''s World', 0
  windowMessage   MSG
  
  hdc dd ?  
  pfd PIXELFORMATDESCRIPTOR  
  hrc dd ?  
  rc  RECT
  
  timer_id dd 1

section '.idata' import data readable writeable

include 'Units/Libraries.inc'

section         '.rsrc' resource data readable
 
  directory     RT_ICON,icons,\
                RT_GROUP_ICON,group_icons
 
    resource    icons,\
                1,LANG_NEUTRAL,icon_data
 
    resource    group_icons,\
                2,LANG_NEUTRAL,main_icon
 
      icon      main_icon,\
                icon_data,'icon.ico'