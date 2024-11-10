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

proc KeyUp.Game\
     key
        
        stdcall KeyUp.Move, [key]
     
        ret
endp