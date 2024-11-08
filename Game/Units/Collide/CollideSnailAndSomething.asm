proc Collide.CollideSnailAndReverse\
     refSnail

        mov     eax, [refSnail]
        
        cmp     DWORD [eax + Enemy.health], 1
        jne     .exit
        
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
             
        test    edi, GameObject.REVERSE
        je      .exit
        stdcall Collide.CollideSnailAndReverse, ebx
  
  .exit:   
        ret     
endp