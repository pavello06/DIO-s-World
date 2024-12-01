proc Collide.CollideStopableEnemyAndStop\
     refEnemy

        stdcall EnemyWithStopTimer.StopMove, [refEnemy]
   
        ret
endp

proc Collide.CollideStopableEnemyAndSomething uses ebx esi edi,\
     refEnemy, refObject, side
     
        mov     ebx, [refEnemy]
        mov     esi, [refObject]
        mov     edi, [esi + GameObject.collide]        
             
        test    edi, GameObject.SPECIAL
        je      .exit     
        
  .stop:
        stdcall Collide.CollideStopableEnemyAndStop, ebx
  
  .exit:   
        ret     
endp