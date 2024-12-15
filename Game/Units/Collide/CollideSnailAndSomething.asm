proc Collide.CollideSnailAndBlock uses ebx,\
     refSnail, side

        mov     ebx, [refSnail]
        
        cmp     DWORD [side], Collide.BOTTOM
        je      .exit
        
        cmp     DWORD [ebx + Enemy.health], 1
        jne     .exit
        
        stdcall Collide.CollideReverseableEnemyAndReverse, ebx
        
        dec     DWORD [ebx + Snail.countOfCollides]
        
        cmp     DWORD [ebx + Snail.countOfCollides], 0
        jne     .exit
        
        stdcall Snail.GetDamage, ebx    

  .exit:
        ret
endp

proc Collide.CollideSnailAndEnemy uses ebx,\
     refSnail, refEnemy

        mov     ebx, [refSnail]
        
        cmp     DWORD [ebx + Enemy.health], 1
        jne     .exit
        
        stdcall Enemy.GetDamage, [refEnemy]    

  .exit:
        ret
endp

proc Collide.CollideSnailAndKill\
     refSnail

        stdcall Enemy.Die, [refSnail]    

  .exit:
        ret
endp

proc Collide.CollideSnailAndSomething uses ebx esi edi,\
     refEnemy, refObject, side
     
        mov     ebx, [refEnemy]
        mov     esi, [refObject]
        mov     edi, [esi + GameObject.collide]
             
        test    edi, GameObject.BLOCK
        je      @F
        stdcall Collide.CollideSnailAndBlock, ebx, [side]
  @@:
        test    edi, GameObject.ENEMY
        je      @F
        stdcall Collide.CollideSnailAndEnemy, ebx, esi
  @@:
        test    edi, GameObject.KILL
        je      .exit
        stdcall Collide.CollideSnailAndKill, ebx
  
  .exit:   
        ret     
endp