proc Collide.CollideStopableEnemyAndStop\
     refEnemy

        stdcall EnemyWithStopTimer.Start, [refEnemy]
   
        ret
endp

proc Collide.CollideStopableEnemyAndSomething uses ebx esi edi,\
     refEnemy, refObject, side
     
        mov     ebx, [refEnemy]
        mov     esi, [refObject]
        mov     edi, [esi + GameObject.collide]
        and     edi, [ebx + EnemyWithStopTimer.stopAfter]
             
        test    edi, GameObject.JUMP
        jne     .stop
        test    edi, GameObject.REVERSE
        jne     .stop
        cmp     DWORD [side], Collide.BOTTOM
        jne     .exit
        test    edi, GameObject.BLOCK
        je      .exit      
        
  .stop:
        stdcall Collide.CollideStopableEnemyAndStop, ebx
  
  .exit:   
        ret     
endp