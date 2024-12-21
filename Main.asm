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
        
        stdcall File.WriteLevelStatistics
        
        invoke  ExitProcess, [windowMessage.wParam]

proc WindowProc uses ebx esi edi,\
     hwnd, wmsg, wparam, lparam
        mov     eax, [wmsg]
        cmp     eax, WM_CREATE
        je      .wmcreate
        cmp     eax, WM_DESTROY
        je      .wmdestroy
        cmp     eax, WM_KEYDOWN
        je      .wmkeydown
        cmp     eax, WM_KEYUP
        je      .wmkeyup
        cmp     eax, WM_PAINT
        je      .wmpaint
        cmp     eax, WM_SIZE
        je      .wmsize
        cmp     eax, WM_TIMER
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
        
        invoke  SetTimer, [hwnd], 1, 1000, NULL      
        stdcall File.ReadLevelStatistics       
        stdcall Menu.Start
                    
        xor     eax, eax
        jmp     .exit
        
  .wmdestroy:
        invoke  wglMakeCurrent, 0, 0
        invoke  wglDeleteContext, [hrc]
        invoke  ReleaseDC, [hwnd], [hdc]
        invoke  PostQuitMessage, 0
        
        invoke  KillTimer, [hwnd], 1               
        xor     eax, eax
        jmp     .exit
        
  .wmkeydown:  
        stdcall [windowProcFunctions.refKeyDown], [wparam]                
        xor     eax, eax
        jmp     .exit
  
  .wmkeyup:  
        stdcall [windowProcFunctions.refKeyUp], [wparam]        
        xor     eax, eax
        jmp     .exit
        
  .wmpaint:  
        stdcall [windowProcFunctions.refPaint]
        
        invoke  SwapBuffers, [hdc]           
        xor     eax, eax
        jmp     .wmtimer
        
  .wmsize:
        invoke  GetClientRect, [hwnd], rc
        invoke  glViewport, 0, 0, [rc.right], [rc.bottom]                
        xor     eax, eax
        jmp     .exit
        
  .wmtimer: 
        stdcall [windowProcFunctions.refTimer]
        stdcall Audio.Free
        xor     eax, eax
        
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
  
  buffer db 32 dup (0)

section '.idata' import data readable writeable

include 'Units/Libraries.inc'

section '.rsrc' resource data readable
 
  directory RT_ICON, icons,\
            RT_GROUP_ICON, group_icons
 
    resource icons,\
             1, LANG_NEUTRAL,icon_data
 
    resource group_icons,\
             2, LANG_NEUTRAL,main_icon
 
      icon main_icon,\
           icon_data, 'icon.ico'