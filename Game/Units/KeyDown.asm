;-------------------------------------------------------------------------------
KeyDown.BOOST_SPEED_X = 12
KeyDown.BOOST_SPEED_Y = 33

proc KeyDown.Move\
     refPlayer, key
     
        mov     eax, [refPlayer]
        mov     edx, [key]
        
        cmp     edx, VK_LEFT
        je      .vKLeft
        cmp     edx, 'a'
        je      .vKLeft
        cmp     edx, 'A'
        jne     .notVkLeft
        
  .vKLeft:
        mov     DWORD [eax + GameObjectWithDrawing.drawing.directionX], Structs.LEFT        
        mov     DWORD [eax + Entity.speedX], -KeyDown.BOOST_SPEED_X
        jmp     .exit     
  
  .notVkLeft:   
        cmp     edx, VK_UP
        je      .vKUp
        cmp     edx, 'w'
        je      .vKUp
        cmp     edx, 'W'
        jne     .notVkUp
        
  .vKUp:
        cmp     DWORD [eax + Player.canJump], TRUE
        jne     .exit
        mov     DWORD [eax + Player.canJump], FALSE
        mov     DWORD [eax + Entity.speedY], KeyDown.BOOST_SPEED_Y
        jmp     .exit
   
  .notVkUp:            
        cmp     edx, VK_RIGHT
        je      .vKRight
        cmp     edx, 'd'
        je      .vKRight
        cmp     edx, 'D'
        jne     .notVkRight
        
  .vKRight:
        mov     DWORD [eax + GameObjectWithDrawing.drawing.directionX], Structs.RIGHT  
        mov     DWORD [eax + Entity.speedX], KeyDown.BOOST_SPEED_X
        jmp     .exit
        
  .notVkRight:            
        cmp     edx, VK_DOWN
        je      .vKDown
        cmp     edx, 's'
        je      .vKDown
        cmp     edx, 'S'
        jne     .exit
        
  .vKDown:  
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