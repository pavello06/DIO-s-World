struct Bonus
  gameObjectWithAnimation GameObjectWithAnimation
  type                    dd ?
ends

Bonus.COIN  = 0
Bonus.STAR  = 1
Bonus.HEART = 2
Bonus.ARROW = 3
Bonus.WORLD = 4

Bonus.COIN_SCORE = 10
Bonus.STAR_SCORE = 400

proc Bonus.GetCoin\
     refBonus
        
        stdcall Music.Play, coinMusic 
     
        mov     eax, [currentLevel]
        
        add     DWORD [eax + Level.levelStatistics.score], Bonus.COIN_SCORE
        
        stdcall Object.Delete, [refBonus]

        ret
endp

proc Bonus.GetStar\
     refBonus
     
        stdcall Music.Play, starMusic
     
        mov     eax, [currentLevel] 
        
        add     DWORD [eax + Level.levelStatistics.score], Bonus.STAR_SCORE
        inc     DWORD [eax + Level.levelStatistics.stars]
        
        stdcall Object.Delete, [refBonus]

        ret
endp

proc Bonus.GetHeart\
     refBonus
     
        stdcall Music.Play, heartMusic
        
        mov     [player.hasHeart], TRUE
        
        stdcall Object.Delete, [refBonus]

        ret
endp

proc Bonus.GetArrow\
     refBonus
     
        stdcall Music.Play, arrowMusic
        
        mov     [player.hasArrow], TRUE
        
        stdcall Object.Delete, [refBonus]

        ret
endp

proc Bonus.GetWorld\
     refBonus
     
        stdcall Music.Play, worldMusic
     
        stdcall Timer.Start, player.worldTimer
        
        stdcall Object.Delete, [refBonus]
        
        ret
endp