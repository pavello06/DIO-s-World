library kernel, 'KERNEL32.DLL',\
        user, 'USER32.DLL',\
        winmm, 'WINMM.DLL',\
        gdi, 'GDI32.DLL',\
        opengl, 'OPENGL32.DLL'

  import kernel,\
         GetModuleHandle, 'GetModuleHandleA',\
         ExitProcess, 'ExitProcess',\
         GetTickCount, 'GetTickCount',\
         CreateFile, 'CreateFileA',\
         WriteFile, 'WriteFile',\
         ReadFile, 'ReadFile',\
         CreateThread, 'CreateThread',\
         WaitForSingleObject, 'WaitForSingleObject',\
         CloseHandle, 'CloseHandle'

  import user,\
         RegisterClass, 'RegisterClassA',\
         CreateWindowEx, 'CreateWindowExA',\
         DefWindowProc, 'DefWindowProcA',\
         GetMessage, 'GetMessageA',\
         ShowWindow, 'ShowWindow',\
         UpdateWindow, 'UpdateWindow',\
         TranslateMessage, 'TranslateMessage',\
         DispatchMessage, 'DispatchMessageA',\
         LoadCursor, 'LoadCursorA',\
         LoadIcon, 'LoadIconA',\
         GetClientRect, 'GetClientRect',\
         GetDC, 'GetDC',\
         ReleaseDC, 'ReleaseDC',\
         PostQuitMessage, 'PostQuitMessage',\
         SetTimer, 'SetTimer',\
         KillTimer, 'KillTimer'
         
  import winmm,\
         mciSendStringA, 'mciSendStringA'

  import gdi,\
         ChoosePixelFormat, 'ChoosePixelFormat',\
         SetPixelFormat, 'SetPixelFormat',\
         SwapBuffers, 'SwapBuffers'

  import opengl,\
         glColor3f,'glColor3f',\
         glRectf,'glRectf',\
         glViewport,'glViewport',\
         wglCreateContext,'wglCreateContext',\
         wglDeleteContext,'wglDeleteContext',\
         wglMakeCurrent,'wglMakeCurrent'