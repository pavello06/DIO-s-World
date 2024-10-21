;-------------------------------------------------------------------------------
proc KeyUp.Move\
     refPlayer, key
     
        mov     eax, [key]
        
        cmp     eax, VK_LEFT
        je      .VKLeftOrVkRight
        cmp     eax, 'a'
        je      .VKLeftOrVkRight
        cmp     eax, 'A'
        je      .VKLeftOrVkRight
        cmp     eax, VK_RIGHT
        je      .VKLeftOrVkRight
        cmp     eax, 'd'
        je      .VKLeftOrVkRight
        cmp     eax, 'D'
        jne     .exit
        
  .VKLeftOrVkRight:
        mov     eax, [refPlayer]
                
        mov     [eax + Player.entity.speedX], 0   
                         
  .exit:  
        ret
endp
;-------------------------------------------------------------------------------