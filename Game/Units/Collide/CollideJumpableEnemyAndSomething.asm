proc Collide.CollideJumpableEnemyAndJump\
     refEnemy
     
        mov     eax, [refEnemy]
        
        mov     DWORD [eax + Entity.speedY], 30        
    
        ret
endp

proc Collide.CollideJumpableEnemyAndSomething uses ebx esi edi,\
     refEnemy, refObject, side
     
        mov     ebx, [refEnemy]
        mov     esi, [refObject]
        mov     edi, [esi + GameObject.collide]
             
        test    edi, GameObject.SPECIAL
        je      .exit
        stdcall Collide.CollideJumpableEnemyAndJump, ebx
  
  .exit:   
        ret     
endp