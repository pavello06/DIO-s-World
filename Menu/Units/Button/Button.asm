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
        add     eax, 4
        
        cmp     DWORD [eax], 0
        je      .exit    
        
        mov     ecx, [eax]
        mov     [currentLevel], ecx

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

proc Button.Audio\
     arg

        xor     DWORD [isMusicOn], 1
        
        cmp     DWORD [isMusicOn], FALSE
        je      .off

  .on:
        mov     DWORD [OptionsMenu.wON + String.string], 'O'
        mov     DWORD [OptionsMenu.wON + String.string + 4], 'N'
        mov     DWORD [OptionsMenu.wON + String.string + 8], 0
        mov     DWORD [OptionsMenu.wON1 + MenuObjectWithDrawing.drawing.refTexture], oTexture
        mov     DWORD [OptionsMenu.wON2 + MenuObjectWithDrawing.drawing.refTexture], nTexture
        mov     DWORD [OptionsMenu.wON3 + MenuObjectWithDrawing.drawing.refTexture], voidTexture                       
        jmp     .exit

  .off:
        mov     DWORD [OptionsMenu.wON + String.string], 'O'
        mov     DWORD [OptionsMenu.wON + String.string + 4], 'F'
        mov     DWORD [OptionsMenu.wON + String.string + 8], 'F'
        mov     DWORD [OptionsMenu.wON1 + MenuObjectWithDrawing.drawing.refTexture], oTexture
        mov     DWORD [OptionsMenu.wON2 + MenuObjectWithDrawing.drawing.refTexture], fTexture
        mov     DWORD [OptionsMenu.wON3 + MenuObjectWithDrawing.drawing.refTexture], fTexture
  
  .exit:
        ret
endp

proc Button.Exit\
     arg
     
        jmp     start.exit

        ret
endp