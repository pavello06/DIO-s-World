include 'Units/Units.inc'
         
proc Menu.Start

        ret
endp

proc Menu.Timer

        ret
endp

proc Menu.Paint uses ebx esi edi 

        mov     ebx, [currentMenu]

        mov     esi, [Screen.screen + Object.x]
        add     esi, [Screen.screen + Object.width]
        mov     edi, [Screen.screen + Object.y]
        add     edi, [Screen.screen + Object.height]
        
        stdcall Screen.Fill, 80, 187, 255
        stdcall Drawing.DrawObjects, [ebx + Menu.menuObjects.refMenuObjectsWithDrawing], [Screen.screen + Object.x], esi, [Screen.screen + Object.y], edi
        stdcall Animation.AnimateObjects, [ebx + Menu.menuObjects.refMenuObjectsWithAnimation], [Screen.screen + Object.x], esi, [Screen.screen + Object.y], edi

        ret
endp

proc Menu.KeyDown\
     key
        
        stdcall KeyDown.Click, [key]
        stdcall KeyDown.PreviousAndNext, [key]
        
        ret
endp

proc Menu.KeyUp\
     key
        
        ret
endp