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

proc Screen.IsObjectOnScreen\
     refObject, xMin, xMax, yMin, yMax
     
        mov     eax, [refObject]
     
        mov     ecx, [eax + Object.x]
        cmp     ecx, [xMax]
        jg      .objectIsNotOnScreen
        add     ecx, [eax + Object.width]
        cmp     ecx, [xMin]
        jl      .objectIsNotOnScreen
        mov     ecx, [eax + Object.y]
        cmp     ecx, [yMax]
        jg      .objectIsNotOnScreen        
        add     ecx, [eax + Object.height]
        cmp     ecx, [yMin]
        jl      .objectIsNotOnScreen
  
  .objectIsNotOnScreen: 
        mov     eax, TRUE
        jmp     .exit
        
  .objectIsNotOnScreen:        
        mov     eax, FALSE

  .exit:
        ret
endp