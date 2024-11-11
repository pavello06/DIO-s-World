proc KeyUp.Move\
     key
     
        mov     eax, [key]
        
        cmp     eax, VK_LEFT
        je      .VKLeftOrVKRight
        cmp     eax, 'a'
        je      .VKLeftOrVKRight
        cmp     eax, 'A'
        je      .VKLeftOrVKRight
        cmp     eax, VK_RIGHT
        je      .VKLeftOrVKRight
        cmp     eax, 'd'
        je      .VKLeftOrVKRight
        cmp     eax, 'D'
        jne     .exit
        
  .VKLeftOrVKRight:                
        mov     DWORD [player + Entity.speedX], 0   
                         
  .exit:  
        ret
endp

proc KeyUp.Shoot\
     key
                                                       
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
        stdcall Player.CanShoot, player        
        cmp     eax, FALSE
        je      .exit
        
        stdcall Player.Shoot, player
     
  .exit:  
        ret
endp