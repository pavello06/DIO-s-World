proc Result.IsWin

        mov     eax, [currentLevel]
        
        mov     ecx, [player + Object.x]
        add     ecx, [player + Object.width]
        
        mov     edx, [eax + Level.xMax]
        sub     edx, Player.START_X
        
        cmp     ecx, edx
        jb      .isNotWin

  .isWin:
        mov     eax, TRUE
        jmp     .exit
        
  .isNotWin:
        mov     eax, FALSE

  .exit:
        ret
endp

proc Result.Win

        stdcall Music.Play, winMusic

        mov     eax, [currentLevel]
        
        mov     ecx, [eax + Level.levelStatistics.score]
        
        cmp     ecx, [eax + Level.levelStatistics.bestScore]
        jb      .notRewriteScore
  
  .rewriteScore:
        mov     [eax + Level.levelStatistics.bestScore], ecx      

  .notRewriteScore:
        mov     edx, [eax + Level.levelStatistics.stars]
        
        cmp     edx, [eax + Level.levelStatistics.bestStars]
        jb      .notRewriteStars
  
  .rewriteStars:
        mov     [eax + Level.levelStatistics.bestStars], edx      

  .notRewriteStars:
        mov     [currentMenu], winMenu  
        stdcall WindowProcFunctions.ChangeToMenu
        
        mov     eax, [currentLevel]
        
        mov     ecx, [eax + Level.levelStatistics.score]
        mov     [WinMenu.nSCORE.number], ecx
        mov     edx, [eax + Level.levelStatistics.bestScore]
        mov     [WinMenu.nBEST.number], edx 
        
        mov     [WinMenu.star1.refLevel], eax
        mov     [WinMenu.star2.refLevel], eax
        mov     [WinMenu.star3.refLevel], eax
        
        stdcall Menu.Start
        
        stdcall Levels.GetCurrentLevelInArray
        
        cmp     DWORD [eax], level3
        je      .exit
        
        add     eax, 4    
        
        mov     eax, [eax]
        mov     DWORD [eax + Level.levelStatistics.isAvailable], TRUE         

  .exit:
        ret
endp

proc Result.Lose

        stdcall Music.Play, loseMusic

        mov     [currentMenu], loseMenu  
        stdcall WindowProcFunctions.ChangeToMenu

        mov     eax, [currentLevel]
        
        mov     ecx, [eax + Level.levelStatistics.score]
        mov     [LoseMenu.nSCORE.number], ecx
        mov     edx, [eax + Level.levelStatistics.bestScore]
        mov     [LoseMenu.nBEST.number], edx 
        
        mov     [LoseMenu.star1.refLevel], eax
        mov     [LoseMenu.star2.refLevel], eax
        mov     [LoseMenu.star3.refLevel], eax
        
        stdcall Menu.Start 

  .exit:
        ret
endp