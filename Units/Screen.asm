struct Screen
  object Object
  speedX dd ?
  speedY dd ?
ends

Screen.screen Screen <Object.GENERAL, 0, 0, 500, 500>, 0, 0 

proc Screen.Clear

        invoke glColor3f, 1.0, 1.0, 1.0
        invoke glRectf, -1.0, -1.0, 1.0, 1.0
        
        ret
endp