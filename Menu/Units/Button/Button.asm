struct Button
  menuObjectWithDrawing MenuObjectWithDrawing
  isActive              dd ? 
  refAction             dd ?
  argument              dd ?
ends

proc Button.Game\
     refScreen

        stdcall WindowProcFunctions.ChangeToGame
        
        mov     eax, [refScreen]
        mov     [level], eax

        ret
endp

proc Button.Menu\
     refScreen

        stdcall WindowProcFunctions.ChangeToMenu
        
        mov     eax, [refScreen]
        mov     [menu], eax

        ret
endp