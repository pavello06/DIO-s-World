struct Snail
  enemy           Enemy
  countOfCollides dd ?
ends

Snail.SPEED_X_AFTER_COLLIDING_WITH_PLAYER = 20

proc Snail.GetDamage uses ebx,\
     refSnail
     
        stdcall Enemy.GetDamage, [refSnail]
        
        mov     eax, [refSnail]
        
        cmp     DWORD [eax + Enemy.health], 2
        jne     .notStop
        
        mov     DWORD [eax + Entity.speedX], 0
  
  .notStop:        
        cmp     DWORD [eax + Enemy.health], 1
        jne     .exit
  
        mov     ecx, [player + Object.width]
        shr     ecx, 1
        add     ecx, [player + Object.x]
        
        mov     edx, [eax + Object.width]
        shr     edx, 1
        add     edx, [eax + Object.x]
        
        mov     ebx, Snail.SPEED_X_AFTER_COLLIDING_WITH_PLAYER
        
        cmp     ecx, edx
        jb      .toTheRight
        
  ..toTheLeft:
        neg     ebx
  
  .toTheRight:
        mov     DWORD [eax + Entity.speedX], ebx
        
  .exit:   
        ret
endp