struct WindowProcFunctions
  refPaint   dd ?
  refTimer   dd ?
  refKeyDown dd ?
  refKeyUp   dd ?
ends

windowProcFunctions WindowProcFunctions

proc WindowProcFunctions.ChangeTo\
     refPaint, refTimer, refKeyDown, refKeyUp

        mov       eax, [refPaint]
        mov       [windowProcFunctions.refPaint], eax
        mov       eax, [refTimer]
        mov       [windowProcFunctions.refTimer], eax
        mov       eax, [refKeyDown]
        mov       [windowProcFunctions.refKeyDown], eax
        mov       eax, [refKeyUp]
        mov       [windowProcFunctions.refKeyUp], eax

        ret
endp