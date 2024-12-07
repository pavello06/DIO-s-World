proc Collide.CollideSnailAndBlock\
     refSnail, side

        mov     eax, [refSnail]
        
        cmp     DWORD [side], Collide.BOTTOM
        je      .exit
        
        cmp     DWORD [eax + Enemy.health], 1
        jne     .exit
        
        stdcall Collide.CollideReverseableEnemyAndReverse, [refSnail]
        mov     eax, [refSnail]
        
        dec     DWORD [eax + Snail.countOfCollides]
        
        cmp     DWORD [eax + Snail.countOfCollides], 0
        jne     .exit
        
        stdcall Snail.GetDamage, eax    

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