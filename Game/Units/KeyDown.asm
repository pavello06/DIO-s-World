proc KeyDown.Move\
     key
     
        cmp     DWORD [player + GameObject.collide], GameObject.DEAD_PLAYER
        je      .exit
     
        mov     eax, [key]
        
        cmp     eax, VK_LEFT
        je      .VKLeft
        cmp     eax, 'a'
        je      .VKLeft
        cmp     eax, 'A'
        jne     .notVKLeft
        
  .VKLeft:
        mov     DWORD [playerTexture + GameObjectWithDrawing.drawing.directionX], Drawing.LEFT        
        mov     DWORD [player + Entity.speedX], -Player.SPEED_X_AFTER_MOVE_KEY
        jmp     .exit     
  
  .notVKLeft:   
        cmp     eax, VK_UP
        je      .VKUp
        cmp     eax, 'w'
        je      .VKUp
        cmp     eax, 'W'
        je      .VKUp
        cmp     eax, VK_SPACE
        jne     .notVKUp
        
  .VKUp:
        cmp     DWORD [player + Player.canJump], TRUE
        jne     .exit
        cmp     DWORD [player + Entity.speedY], -Move.G
        jl      .exit
        
        stdcall Music.Play, upJumpingPlayerMusic
        
        mov     DWORD [player + Player.canJump], FALSE
        mov     DWORD [player + Entity.speedY], Player.SPEED_Y_AFTER_MOVE_KEY
        jmp     .exit
   
  .notVKUp:            
        cmp     eax, VK_RIGHT
        je      .VKRight
        cmp     eax, 'd'
        je      .VKRight
        cmp     eax, 'D'
        jne     .exit
        
  .VKRight:
        mov     DWORD [playerTexture + GameObjectWithDrawing.drawing.directionX], Drawing.RIGHT  
        mov     DWORD [player + Entity.speedX], Player.SPEED_X_AFTER_MOVE_KEY       
        
  .exit:  
        ret
endp

proc KeyDown.Pause\
     key
     
        cmp     DWORD [player + GameObject.collide], GameObject.DEAD_PLAYER
        je      .exit
     
        cmp     DWORD [key], VK_ESCAPE
        jne     .exit 

        stdcall Button.Menu, pauseMenu
  
  .exit:        
        ret
endp