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

proc Result.Win uses ebx

        stdcall Music.Play, winMusic

        mov     ebx, [currentLevel]
        
        mov     eax, [ebx + Level.levelStatistics.score]
        
        cmp     eax, [ebx + Level.levelStatistics.bestScore]
        jb      .notRewriteScore
  
  .rewriteScore:
        mov     [ebx + Level.levelStatistics.bestScore], eax      

  .notRewriteScore:
        mov     ecx, [ebx + Level.levelStatistics.stars]
        
        cmp     ecx, [ebx + Level.levelStatistics.bestStars]
        jb      .notRewriteStars
  
  .rewriteStars:
        mov     [ebx + Level.levelStatistics.bestStars], ecx      

  .notRewriteStars:
        mov     [currentMenu], winMenu  
        stdcall WindowProcFunctions.ChangeToMenu
        
        stdcall String.NumberToString, Statistic.N_SCORE_LENGTH, [ebx + Level.levelStatistics.score], WinMenu.nSCORE + String.string
        stdcall String.NumberToString, Statistic.N_SCORE_LENGTH, [ebx + Level.levelStatistics.bestScore], WinMenu.nBEST + String.string 
        
        lea     eax, [ebx + Level.levelStatistics.score]
        mov     [WinMenu.star1.refLevelStars], eax
        mov     [WinMenu.star2.refLevelStars], eax
        mov     [WinMenu.star3.refLevelStars], eax
        
        stdcall Menu.Start
        
        stdcall Levels.GetCurrentLevelInArray
        add     eax, 4 
        
        cmp     DWORD [eax], 0
        je      .exit   
        
        mov     eax, [eax]
        mov     DWORD [eax + Level.levelStatistics.isAvailable], TRUE         

  .exit:
        ret
endp

proc Result.Lose uses ebx

        stdcall Music.Play, loseMusic

        mov     [currentMenu], loseMenu  
        stdcall WindowProcFunctions.ChangeToMenu

        mov     ebx, [currentLevel]
        
        stdcall String.NumberToString, Statistic.N_SCORE_LENGTH, [ebx + Level.levelStatistics.score], LoseMenu.nSCORE + String.string
        stdcall String.NumberToString, Statistic.N_SCORE_LENGTH, [ebx + Level.levelStatistics.bestScore], LoseMenu.nBEST + String.string 
        
        lea     eax, [ebx + Level.levelStatistics.score]
        mov     [LoseMenu.star1.refLevelStars], eax
        mov     [LoseMenu.star2.refLevelStars], eax
        mov     [LoseMenu.star3.refLevelStars], eax
        
        stdcall Menu.Start 

  .exit:
        ret
endp