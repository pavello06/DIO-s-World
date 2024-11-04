;-------------------------------------------------------------------------------
KeyDown.BOOST_SPEED_X = 12
KeyDown.BOOST_SPEED_Y = 33

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
        mov     DWORD [eax + Entity.speedX], -KeyDown.BOOST_SPEED_X
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
        mov     DWORD [eax + Entity.speedY], KeyDown.BOOST_SPEED_Y
        jmp     .exit
   
  .notVKUp:            
        cmp     edx, VK_RIGHT
        je      .VKRight
        cmp     edx, 'd'
        je      .VKRight
        cmp     edx, 'D'
        jne     .notVKRight
        
  .VKRight:
        mov     DWORD [eax + GameObjectWithDrawing.drawing.directionX], Drawing.RIGHT  
        mov     DWORD [eax + Entity.speedX], KeyDown.BOOST_SPEED_X
        jmp     .exit
        
  .notVKRight:            
        cmp     edx, VK_DOWN
        je      .VKDown
        cmp     edx, 's'
        je      .VKDown
        cmp     edx, 'S'
        jne     .exit
        
  .VKDown:  
        mov     DWORD [eax + Entity.speedY], -1       
        
  .exit:  
        ret
endp
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
proc KeyDown.Shoot\
     refPlayer, refObjects, key

  .exit:  
        ret
endp
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
proc KeyDown.Pause;\
     
        ret
endp
;-------------------------------------------------------------------------------  