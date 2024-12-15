include 'Units/Units.inc'
         
proc Menu.Start uses ebx

        mov     ebx, [currentMenu]
        
        stdcall Star.TimerObjects, [ebx + Menu.menuObjects.refStars]
        stdcall String.TimerObjects, [ebx + Menu.menuObjects.refStrings]
        
        cmp     ebx, levelsMenu
        jne     @F       
  
        stdcall Lock.TimerObjects, LevelsMenu.locks
  
  @@:      
        mov     eax, [ebx + Menu.menuObjects.refButtons]
        add     eax, sizeof.Array.element * 2
        stdcall ActiveButtonElement.ChangeActiveButton, [eax] 

        ret
endp

proc Menu.Timer

        ret
endp

proc Menu.Paint uses ebx

        mov     ebx, [currentMenu]
        
        stdcall Screen.UpdateForMenu 
        
        stdcall Drawing.DrawObjects, [ebx + Menu.menuObjects.refMenuObjectsWithDrawing]
        stdcall Animation.AnimateObjects, [ebx + Menu.menuObjects.refMenuObjectsWithAnimation]

        ret
endp

proc Menu.KeyDown uses ebx,\
     key
        
        mov     ebx, [key]
        
        stdcall KeyDown.Click, ebx
        stdcall KeyDown.PreviousAndNext, ebx
        
        ret
endp

proc Menu.KeyUp\
     key
        
        ret
endp