;-------------------------------------------------------------------------------
proc KeyUp.Move\
     refPlayer, key
     
        mov     eax, [key]
        
        cmp     eax, VK_LEFT
        je      .notVkLeftAndVkRight
        cmp     eax, 'a'
        je      .notVkLeftAndVkRight
        cmp     eax, 'A'
        je      .notVkLeftAndVkRight
        cmp     eax, VK_RIGHT
        je      .notVkLeftAndVkRight
        cmp     eax, 'd'
        je      .notVkLeftAndVkRight
        cmp     eax, 'D'
        jne     .exit
        
  .notVkLeftAndVkRight:
        mov     eax, [refPlayer]
                
        mov     [eax + Player.entity.speedX], 0   
                         
  .exit:  
        ret
endp
;-------------------------------------------------------------------------------