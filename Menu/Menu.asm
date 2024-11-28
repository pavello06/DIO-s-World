include 'Units/Units.inc'
         
proc Menu.Start uses ebx

        mov     ebx, [currentMenu]
        
        stdcall Star.ProcessObjects, [ebx + Menu.menuObjects.refStars]
        
        stdcall Menu.KeyDown, VK_RIGHT
        stdcall Menu.KeyDown, VK_LEFT

        ret
endp

proc Menu.Timer uses ebx

        mov     ebx, [currentMenu]

        ret
endp

proc Menu.Paint uses ebx

        mov     ebx, [currentMenu]
        
        stdcall Screen.UpdateForMenu
        
        stdcall String.TimerObjects, [ebx + Menu.menuObjects.refWords]
        stdcall Number.TimerObjects, [ebx + Menu.menuObjects.refNumbers]
        
        stdcall Drawing.DrawObjects, [ebx + Menu.menuObjects.refMenuObjectsWithDrawing]
        stdcall Animation.AnimateObjects, [ebx + Menu.menuObjects.refMenuObjectsWithAnimation]

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