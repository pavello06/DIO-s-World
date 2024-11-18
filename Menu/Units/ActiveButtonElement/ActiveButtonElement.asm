activeButtonElement1 MenuObjectWithAnimation\
<<<Object.MENU, 0, 0, ACTIVE_BUTTON_ELEMENT_WIDTH * Drawing.BIG, ACTIVE_BUTTON_ELEMENT_HEIGHT * Drawing.BIG>>,\
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, activeButtonElementTexture>>,\
<FALSE, 0, 200, 0, activeButtonElementFrames>
                                             
activeButtonElement2 MenuObjectWithAnimation\
<<<Object.MENU, 0, 0, ACTIVE_BUTTON_ELEMENT_WIDTH * Drawing.BIG, ACTIVE_BUTTON_ELEMENT_HEIGHT * Drawing.BIG>>,\
<Drawing.BIG, Drawing.LEFT, Drawing.UP, activeButtonElementTexture>>,\
<FALSE, 0, 200, 0, activeButtonElementFrames>
                                             
activeButtonElement3 MenuObjectWithAnimation\
<<<Object.MENU, 0, 0, ACTIVE_BUTTON_ELEMENT_WIDTH * Drawing.BIG, ACTIVE_BUTTON_ELEMENT_HEIGHT * Drawing.BIG>>,\
<Drawing.BIG, Drawing.RIGHT, Drawing.DOWN, activeButtonElementTexture>>,\
<FALSE, 0, 200, 0, activeButtonElementFrames>
                                             
activeButtonElement4 MenuObjectWithAnimation\
<<<Object.MENU, 0, 0, ACTIVE_BUTTON_ELEMENT_WIDTH * Drawing.BIG, ACTIVE_BUTTON_ELEMENT_HEIGHT * Drawing.BIG>>,\
<Drawing.BIG, Drawing.LEFT, Drawing.DOWN, activeButtonElementTexture>>,\
<FALSE, 0, 200, 0, activeButtonElementFrames>
                                             
proc ActiveButtonElement.ChangeActiveButton uses ebx,\
     refButton

        mov       ebx, [refButton]
        
        mov       eax, [ebx + Object.x]
        mov       ecx, [ebx + Object.y]
        
        mov       edx, eax
        sub       edx, Drawing.BIG
        mov       [activeButtonElement1 + Object.x], edx        
        mov       [activeButtonElement3 + Object.x], edx
        
        add       edx, [ebx + Object.width]
        sub       edx, ACTIVE_BUTTON_ELEMENT_WIDTH * Drawing.BIG / 2
        mov       [activeButtonElement2 + Object.x], edx        
        mov       [activeButtonElement4 + Object.x], edx
                
        mov       edx, ecx
        sub       edx, Drawing.BIG
        mov       [activeButtonElement1 + Object.y], edx
        mov       [activeButtonElement2 + Object.y], edx

        add       edx, [ebx + Object.height]
        sub       edx, ACTIVE_BUTTON_ELEMENT_HEIGHT * Drawing.BIG / 2
        mov       [activeButtonElement3 + Object.y], edx        
        mov       [activeButtonElement4 + Object.y], edx

        ret
endp     