struct Snail
  enemy           Enemy
  countOfCollides dd ?
ends

Snail.SNAIL_SPEED_BOOST_X = 20

proc Snail.GetDamage uses ebx,\
     refSnail, refPlayer
     
        stdcall Enemy.GetDamage, [refSnail]
        
        mov     ebx, [refSnail]
        
        cmp     DWORD [ebx + Enemy.health], 2
        jne     .notStop
        
        mov     DWORD [ebx + Entity.speedX], 0
  
  .notStop:        
        cmp     DWORD [ebx + Enemy.health], 1
        jne     .exit
  
        mov     ecx, [refPlayer]
        mov     edx, [ecx + Object.width]
        shr     edx, 1
        add     edx, [ecx + Object.x]
        
        mov     ecx, [eax + Object.width]
        shr     ecx, 1
        add     ecx, [eax + Object.x]
        
        mov     eax, 1
        
        cmp     edx, ecx
        jb      .toTheRight
        
  ..toTheLeft:
        mov     eax, -1
  
  .toTheRight:
        mov     ecx, Snail.SNAIL_SPEED_BOOST_X
        mul     ecx
        mov     DWORD [ebx + Entity.speedX], eax
        
  .exit:   
        ret
endp