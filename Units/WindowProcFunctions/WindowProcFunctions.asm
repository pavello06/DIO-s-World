struct WindowProcFunctions
  refKeyDown dd ?
  refKeyUp   dd ?
  refPaint   dd ?
  refTimer   dd ?
ends

windowProcFunctions WindowProcFunctions Menu.KeyDown, Menu.KeyUp, Menu.Paint, Menu.Timer

proc WindowProcFunctions.ChangeTo\
     refKeyDown, refKeyUp, refPaint, refTimer

        mov       eax, [refKeyDown]
        mov       [windowProcFunctions.refKeyDown], eax
        mov       ecx, [refKeyUp]
        mov       [windowProcFunctions.refKeyUp], ecx
        mov       edx, [refPaint]
        mov       [windowProcFunctions.refPaint], edx
        mov       eax, [refTimer]
        mov       [windowProcFunctions.refTimer], eax

        ret
endp

proc WindowProcFunctions.ChangeToGame

        stdcall WindowProcFunctions.ChangeTo, Game.KeyDown, Game.KeyUp, Game.Paint, Game.Timer

        ret
endp

proc WindowProcFunctions.ChangeToMenu

        stdcall WindowProcFunctions.ChangeTo, Menu.KeyDown, Menu.KeyUp, Menu.Paint, Menu.Timer

        ret
endp