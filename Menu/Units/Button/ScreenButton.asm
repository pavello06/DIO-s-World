struct ScreenButton
  button    Button
  refScreen dd ?
ends

proc ScreenButton.Game\
     refScreen

        stdcall WindowProcFunctions.ChangeToGame
        
        mov     eax, [refScreen]
        mov     [level], eax

        ret
endp

proc ScreenButton.Menu\
     refScreen

        stdcall WindowProcFunctions.ChangeToMenu
        
        mov     eax, [refScreen]
        mov     [menu], eax

        ret
endp