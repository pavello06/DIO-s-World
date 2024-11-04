proc KeyDown.Move\
     refPlayer, key
     
        mov     eax, [refPlayer]
        mov     edx, [key]
        
        cmp     edx, VK_LEFT
        je      .VKLeft
        cmp     edx, 'a'
        je      .VKLeft
        cmp     edx, 'A'
        jne     .notVKLeft
        
  .VKLeft:
        mov     DWORD [eax + GameObjectWithDrawing.drawing.directionX], Drawing.LEFT        
        mov     DWORD [eax + Entity.speedX], -Player.PLAYER_SPEED_BOOST_X
        jmp     .exit     
  
  .notVKLeft:   
        cmp     edx, VK_UP
        je      .VKUp
        cmp     edx, 'w'
        je      .VKUp
        cmp     edx, 'W'
        jne     .notVKUp
        
  .VKUp:
        cmp     DWORD [eax + Player.canJump], TRUE
        jne     .exit
        cmp     DWORD [eax + Entity.speedY], -2
        jl      .exit
        mov     DWORD [eax + Player.canJump], FALSE
        mov     DWORD [eax + Entity.speedY], Player.PLAYER_SPEED_BOOST_Y
        jmp     .exit
   
  .notVKUp:            
        cmp     edx, VK_RIGHT
        je      .VKRight
        cmp     edx, 'd'
        je      .VKRight
        cmp     edx, 'D'
        jne     .exit
        
  .VKRight:
        mov     DWORD [eax + GameObjectWithDrawing.drawing.directionX], Drawing.RIGHT  
        mov     DWORD [eax + Entity.speedX], Player.PLAYER_SPEED_BOOST_X       
        
  .exit:  
        ret
endp

proc KeyDown.Shoot\
     refPlayer, refObjects, key
     
        mov     eax, [key]
        
        cmp     eax, 'x'
        je      .shootKey
        cmp     eax, 'X'
        je      .shootKey
        cmp     eax, 'j'
        je      .shootKey
        cmp     eax, 'J'
        jne     .exit

        mov     ebx, [refPlayer]
  
  .shootKey:      
        stdcall Player.CanShoot, ebx
        
        cmp     eax, FALSE
        je      .exit
        
        stdcall Player.Shoot, ebx
     
  .exit:  
        ret
endp

proc KeyDown.Pause
     
        ret
endp 