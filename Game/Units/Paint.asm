proc Paint.Game uses ebx esi

        stdcall Screen.FocusOnLevel                
        
        mov     ebx, [Screen.screen + Object.x]
        add     ebx, [Screen.screen + Object.width]
        mov     esi, [Screen.screen + Object.y]
        add     esi, [Screen.screen + Object.height]
        stdcall Screen.Clear
        stdcall Drawing.DrawObjects, objectsWithDrawing, [Screen.screen + Object.x], ebx, [Screen.screen + Object.y], esi
        stdcall Animation.AnimateObjects, objectsWithAnimation, [Screen.screen + Object.x], ebx, [Screen.screen + Object.y], esi

        ret
endp