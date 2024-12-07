struct Button
  menuObjectWithDrawing MenuObjectWithDrawing
  isActive              dd ? 
  refAction             dd ?
  argument              dd ?
ends

proc Button.GetActiveButtonInArray\                     
     refButtons

        mov     eax, [refButtons]
                                                           
        mov     ecx, [eax + Array.length]
        lea     eax, [eax + Array.element + sizeof.Array.element]
        
  .loop:        
        mov     edx, [eax]
        
        cmp     DWORD [edx + Button.isActive], TRUE
        je      .exit
       
        add     eax, sizeof.Array.element
        loop    .loop                                            
        
  .exit:
        ret
endp

proc Button.GameStart\
     refScreen
     
        stdcall Music.Play, buttonMusic

        mov     eax, [refScreen]
        mov     [currentLevel], eax
        
        cmp     DWORD [eax + Level.levelStatistics.isAvailable], FALSE
        je      .exit

        stdcall WindowProcFunctions.ChangeToGame
        
        mov     eax, [refScreen]
        mov     [currentLevel], eax
        
        stdcall Game.Start

  .exit:
        ret
endp

proc Button.GameRestart\
     refScreen
     
        stdcall Music.Play, buttonMusic

        stdcall WindowProcFunctions.ChangeToGame
        
        stdcall Game.Start

        ret
endp

proc Button.GameContinue\
     refScreen
     
        stdcall Music.Play, buttonMusic

        stdcall WindowProcFunctions.ChangeToGame

        ret
endp

proc Button.GameNext\
     arg
     
        stdcall Music.Play, buttonMusic

        stdcall Levels.GetCurrentLevelInArray
        
        cmp     DWORD [eax], level3
        je      .exit
        
        add     eax, 4    
        
        mov     eax, [eax]
        mov     [currentLevel], eax

        stdcall WindowProcFunctions.ChangeToGame
        stdcall Game.Start

  .exit:
        ret
endp

proc Button.Menu\
     refScreen
     
        stdcall Music.Play, buttonMusic

        stdcall WindowProcFunctions.ChangeToMenu
        
        mov     eax, [refScreen]
        mov     [currentMenu], eax
        
        stdcall Menu.Start

        ret
endp

proc Button.Exit\
     arg
     
        stdcall Music.Play, buttonMusic

        stdcall File.WriteLevelStatistics

        invoke  ExitProcess, 0

        ret
endp