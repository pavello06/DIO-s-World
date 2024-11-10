proc KeyDown.Move\
     key
     
        mov     eax, [key]
        
        cmp     eax, VK_LEFT
        je      .VKLeft
        cmp     eax, 'a'
        je      .VKLeft
        cmp     eax, 'A'
        jne     .notVKLeft
        
  .VKLeft:
        mov     DWORD [player + GameObjectWithDrawing.drawing.directionX], Drawing.LEFT        
        mov     DWORD [player + Entity.speedX], -Player.PLAYER_SPEED_BOOST_X
        jmp     .exit     
  
  .notVKLeft:   
        cmp     eax, VK_UP
        je      .VKUp
        cmp     eax, 'w'
        je      .VKUp
        cmp     eax, 'W'
        jne     .notVKUp
        
  .VKUp:
        cmp     DWORD [player + Player.canJump], TRUE
        jne     .exit
        cmp     DWORD [player + Entity.speedY], -2
        jl      .exit
        mov     DWORD [player + Player.canJump], FALSE
        mov     DWORD [player + Entity.speedY], Player.PLAYER_SPEED_BOOST_Y
        jmp     .exit
   
  .notVKUp:            
        cmp     eax, VK_RIGHT
        je      .VKRight
        cmp     eax, 'd'
        je      .VKRight
        cmp     eax, 'D'
        jne     .exit
        
  .VKRight:
        mov     DWORD [player + GameObjectWithDrawing.drawing.directionX], Drawing.RIGHT  
        mov     DWORD [player + Entity.speedX], Player.PLAYER_SPEED_BOOST_X       
        
  .exit:  
        ret
endp

proc KeyDown.Shoot\
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

proc KeyDown.Pause\
     key
     
        
     
        ret
endp

proc KeyDown.Game\
     key
        
        stdcall KeyDown.Move, [key]
        stdcall KeyDown.Shoot, [key]
        stdcall KeyDown.Pause, [key]
     
        ret
endp 