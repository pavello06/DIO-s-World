;-------------------------------------------------------------------------------
proc KeyUp.Move\
     refPlayer, key
     
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
        mov     eax, [refPlayer]
                
        mov     DWORD [eax + Player.entity.speedX], 0   
                         
  .exit:  
        ret
endp
;-------------------------------------------------------------------------------