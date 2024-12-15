proc KeyUp.Move\
     key
     
        mov     eax, [key]
        
        cmp     eax, VK_LEFT
        je      .VKLeft
        cmp     eax, 'a'
        je      .VKLeft
        cmp     eax, 'A'
        jne     .notVKLeft
        
  .VKLeft:
        cmp     DWORD [player + Entity.speedX], 0
        jg      .exit
                        
        mov     DWORD [player + Entity.speedX], 0
  
  .notVKLeft:      
        cmp     eax, VK_RIGHT
        je      .VKRight
        cmp     eax, 'd'
        je      .VKRight
        cmp     eax, 'D'
        jne     .exit
  
  .VKRight:      
        cmp     DWORD [player + Entity.speedX], 0
        jl      .exit
                        
        mov     DWORD [player + Entity.speedX], 0   
                         
  .exit:  
        ret
endp

proc KeyUp.Shoot\
     key
        
        cmp     DWORD [player + GameObject.collide], GameObject.DEAD_PLAYER
        je      .exit
                                                       
        mov     eax, [key]
        
        cmp     eax, 'x'
        je      .shootKey 
        cmp     eax, 'X'
        je      .shootKey
        cmp     eax, 'j'
        je      .shootKey
        cmp     eax, 'J'
        jne     .exit
  
  .shootKey:        
        stdcall Player.CanShoot       
        cmp     eax, FALSE
        je      .exit
        
        stdcall Player.Shoot
     
  .exit:  
        ret
endp