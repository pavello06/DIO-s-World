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
                                             
proc ActiveButtonElement.ChangeActiveButton\
     refButton

        mov       eax, [refButton]
        
        mov       DWORD [eax + Button.isActive], TRUE
        
        mov       ecx, [eax + Object.x]
        sub       ecx, Drawing.BIG
        mov       [activeButtonElement1 + Object.x], ecx        
        mov       [activeButtonElement3 + Object.x], ecx
        
        add       ecx, [eax + Object.width]
        sub       ecx, ACTIVE_BUTTON_ELEMENT_WIDTH * Drawing.BIG / 2
        mov       [activeButtonElement2 + Object.x], ecx        
        mov       [activeButtonElement4 + Object.x], ecx
                
        mov       edx, [eax + Object.y]
        sub       edx, Drawing.BIG
        mov       [activeButtonElement1 + Object.y], edx
        mov       [activeButtonElement2 + Object.y], edx

        add       edx, [eax + Object.height]
        sub       edx, ACTIVE_BUTTON_ELEMENT_HEIGHT * Drawing.BIG / 2
        mov       [activeButtonElement3 + Object.y], edx        
        mov       [activeButtonElement4 + Object.y], edx

        ret
endp     