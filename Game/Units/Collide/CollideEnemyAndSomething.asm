proc Collide.CollideEnemyAndKill\
     refEnemy

        stdcall Enemy.Die, [refEnemy]

        ret
endp

proc Collide.CollideEnemyAndSomething uses ebx esi edi,\
     refEnemy, refObject, side
     
        mov     ebx, [refEnemy]
        mov     esi, [refObject]
        mov     edi, [esi + GameObject.collide]
             
        test    edi, GameObject.KILL
        je      .exit
        stdcall Collide.CollideEnemyAndKill, ebx
  
  .exit:   
        ret     
endp