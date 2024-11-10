struct Screen
  object Object
  speedX dd ?
  speedY dd ?
ends

Screen.SPEED_Y_AFTER_COLLIDING_WITH_PLAYER = 10

Screen.MAX_TIMER = 17

Screen.screen Screen <Object.GENERAL, 0, 0, 500, 500>, 0, 0

Screen.timer dd 0 

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
  
  .objectIsOnScreen: 
        mov     eax, TRUE
        jmp     .exit
        
  .objectIsNotOnScreen:        
        mov     eax, FALSE

  .exit:
        ret
endp

proc Screen.FocusOnLevel
  
        stdcall Timer.IsTimeUp, Screen.timer, Screen.MAX_TIMER
        cmp     eax, FALSE
        je      .notMove

        mov     eax, [Screen.screen + Screen.speedY]
        add     [Screen.screen + Object.y], eax

  .notMove:
        mov     eax, [Screen.screen + Object.width]
        sub     eax, [player + Object.width]
        shr     eax, 1
        
        mov     ecx, [player + Object.x]
        sub     ecx, eax
        mov     [Screen.screen + Object.x], ecx
        
        mov     ecx, 0;[level + Level.xMin]
        add     ecx, [player + Object.x]
                
        cmp     eax, ecx
        jl      .notLeft
        
  .left:
        mov     ecx, 0;[level + Level.xMin]
        mov     [Screen.screen + Object.x], ecx
        
  .notLeft:
        mov     ecx, 1000;[level + Level.xMax]        
        sub     ecx, [player + Object.x]
        sub     ecx, [player + Object.width]
        
        cmp     eax, ecx
        jl      .notRight
        
  .right:
        mov     ecx, 1000;[level + Level.xMax]
        sub     ecx, [Screen.screen + Object.width]
        mov     [Screen.screen + Object.x], ecx
        
  .notRight:
        mov     eax, 0;[level + Level.yMin]
        add     eax, [Screen.screen + Object.height]
        
        cmp     eax, [player + Object.y]
        jg      .greaterThenTopScreen
  
        mov     [Screen.screen + Screen.speedY], Screen.SPEED_Y_AFTER_COLLIDING_WITH_PLAYER
  
  .greaterThenTopScreen:
        mov     eax, 0;[level + Level.yMin]
        add     eax, [Screen.screen + Object.height]
        
        cmp     eax, [player + Object.y]
        jl      .lowerThenTopScreen
  
        mov     [Screen.screen + Screen.speedY], -Screen.SPEED_Y_AFTER_COLLIDING_WITH_PLAYER
  
  .lowerThenTopScreen:
        mov     eax, 0;[level + Level.yMin]
  
        cmp     eax, [Screen.screen + Object.y]
        jl      .notBottom
        
  .bottom:
        mov     [Screen.screen + Object.y], eax
              
  .notBottom:     
        mov     eax, 900;[level + Level.yMax]
        sub     eax, [Screen.screen + Object.height]
        
        cmp     eax, [Screen.screen + Object.y]
        jg      .notTop
  
  .top:      
        mov     [Screen.screen + Object.y], eax
        
  .notTop:   

        ret
endp