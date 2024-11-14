struct ScreenButton
  button    Button
  refScreen dd ?
ends

proc Button.Game\
     refScreen

        stdcall WindowProcFunctions.ChangeToGame
        
        mov     eax, [refScreen]
        mov     [level], eax

        ret
endp