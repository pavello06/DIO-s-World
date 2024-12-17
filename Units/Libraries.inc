library gdi, 'GDI32.DLL',\
        kernel, 'KERNEL32.DLL',\
        opengl, 'OPENGL32.DLL',\
        user, 'USER32.DLL',\
        winmm, 'WINMM.DLL'

  import gdi,\
         ChoosePixelFormat, 'ChoosePixelFormat',\
         SetPixelFormat, 'SetPixelFormat',\
         SwapBuffers, 'SwapBuffers'
         
  import kernel,\
         CloseHandle, 'CloseHandle',\
         CreateFile, 'CreateFileA',\
         CreateThread, 'CreateThread',\
         ExitProcess, 'ExitProcess',\
         GetModuleHandle, 'GetModuleHandleA',\
         GetTickCount, 'GetTickCount',\
         ReadFile, 'ReadFile',\
         WaitForSingleObject, 'WaitForSingleObject',\
         WriteFile, 'WriteFile'
         
  import opengl,\
         glColor3f, 'glColor3f',\
         glRectf, 'glRectf',\
         glViewport, 'glViewport',\
         wglCreateContext, 'wglCreateContext',\
         wglDeleteContext, 'wglDeleteContext',\
         wglMakeCurrent, 'wglMakeCurrent'

  import user,\
         CreateWindowEx, 'CreateWindowExA',\
         DefWindowProc, 'DefWindowProcA',\
         DispatchMessage, 'DispatchMessageA',\
         GetClientRect, 'GetClientRect',\
         GetDC, 'GetDC',\
         GetMessage, 'GetMessageA',\
         KillTimer, 'KillTimer',\
         LoadCursor, 'LoadCursorA',\
         LoadIcon, 'LoadIconA',\
         PostQuitMessage, 'PostQuitMessage',\
         RegisterClass, 'RegisterClassA',\
         ReleaseDC, 'ReleaseDC',\
         SetTimer, 'SetTimer',\
         ShowCursor, 'ShowCursor',\
         TranslateMessage, 'TranslateMessage'
         
  import winmm,\
         mciSendString, 'mciSendStringA'