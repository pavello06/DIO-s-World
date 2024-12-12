proc Collide.CollideSnailAndBlock uses ebx,\
     refSnail, side

        mov     ebx, [refSnail]
        
        cmp     DWORD [side], Collide.BOTTOM
        je      .exit
        
        cmp     DWORD [eax + Enemy.health], 1
        jne     .exit
        
        stdcall Collide.CollideReverseableEnemyAndReverse, ebx
        
        dec     DWORD [ebx + Snail.countOfCollides]
        
        cmp     DWORD [ebx + Snail.countOfCollides], 0
        jne     .exit
        
        stdcall Snail.GetDamage, ebx    

  .exit:
        ret
endp

proc Collide.CollideSnailAndSomething uses ebx esi edi,\
     refEnemy, refObject, side
     
        mov     ebx, [refEnemy]
        mov     esi, [refObject]
        mov     edi, [esi + GameObject.collide]
             
        test    edi, GameObject.BLOCK
        je      .exit
        stdcall Collide.CollideSnailAndBlock, ebx , [side]
  
  .exit:   
        ret     
endp