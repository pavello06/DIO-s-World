struct Screen
  object Object
  speedY dd ?
ends

Screen.SPEED_Y_AFTER_COLLIDING_WITH_PLAYER = 10
Screen.MAX_TIMER                           = 17
Screen.timer                               dd 0

Screen.xMin dd ?
Screen.xMax dd ?
Screen.yMin dd ?
Screen.yMax dd ?

Screen.screen Screen\
<Object.GENERAL, 0, 0, 1920, 1080>,\
0 

proc Screen.Fill\
     red, green, blue

        stdcall Color.Change, [red], [green], [blue]
        
        invoke glRectf, -1.0, -1.0, 1.0, 1.0
        
        ret
endp

proc Screen.UpdateCoordinates

        mov     eax, [Screen.screen + Object.x]
        mov     [Screen.xMin], eax 
        add     eax, [Screen.screen + Object.width]
        mov     [Screen.xMax], eax
        mov     ecx, [Screen.screen + Object.y]
        mov     [Screen.yMin], ecx
        add     ecx, [Screen.screen + Object.height]
        mov     [Screen.yMax], ecx

        ret
endp

proc Screen.IsObjectOnScreen\
     refObject
     
        mov     eax, [refObject]
     
        mov     ecx, [eax + Object.x]
        cmp     ecx, [Screen.xMax]
        jg      .objectIsNotOnScreen
        add     ecx, [eax + Object.width]
        cmp     ecx, [Screen.xMin]
        jl      .objectIsNotOnScreen
        mov     edx, [eax + Object.y]
        cmp     edx, [Screen.yMax]
        jg      .objectIsNotOnScreen        
        add     edx, [eax + Object.height]
        cmp     edx, [Screen.yMin]
        jl      .objectIsNotOnScreen
  
  .objectIsOnScreen: 
        mov     eax, TRUE
        jmp     .exit
        
  .objectIsNotOnScreen:        
        mov     eax, FALSE

  .exit:
        ret
endp

proc Screen.UpdateForGame uses ebx

        mov     ebx, [currentLevel]
  
        stdcall Timer.IsTimeUp, Screen.timer, Screen.MAX_TIMER
        cmp     eax, FALSE
        je      .notMove

  .move:
        mov     eax, [Screen.screen + Screen.speedY]
        add     [Screen.screen + Object.y], eax

  .notMove:      
        mov     eax, [ebx + Level.yMin]
        add     eax, [Screen.screen + Object.height]
        
        cmp     [player + Object.y], eax 
        jl      .notGreaterThenTopScreen
  
  .greaterThenTopScreen:
        mov     [Screen.screen + Screen.speedY], Screen.SPEED_Y_AFTER_COLLIDING_WITH_PLAYER
        jmp     .borders
  
  .notGreaterThenTopScreen:
        mov     [Screen.screen + Screen.speedY], -Screen.SPEED_Y_AFTER_COLLIDING_WITH_PLAYER
  
  .borders:
        mov     eax, [Screen.screen + Object.width]
        sub     eax, [player + Object.width]
        shr     eax, 1
        
        mov     ecx, [player + Object.x]
        sub     ecx, eax
        mov     [Screen.screen + Object.x], ecx
        
        mov     ecx, [ebx + Level.xMin]
        add     ecx, [player + Object.x]
                
        cmp     eax, ecx
        jl      .notLeft
        
  .left:
        mov     ecx, [ebx + Level.xMin]
        mov     [Screen.screen + Object.x], ecx
        
  .notLeft:
        mov     ecx, [ebx + Level.xMax]        
        sub     ecx, [player + Object.x]
        sub     ecx, [player + Object.width]
        
        cmp     eax, ecx
        jl      .notRight
        
  .right:
        mov     ecx, [ebx + Level.xMax]
        sub     ecx, [Screen.screen + Object.width]
        mov     [Screen.screen + Object.x], ecx
        
  .notRight:
        mov     eax, [ebx + Level.yMin]
  
        cmp     eax, [Screen.screen + Object.y]
        jl      .notBottom
        
  .bottom:
        mov     [Screen.screen + Object.y], eax
              
  .notBottom:     
        mov     eax, [ebx + Level.yMax]
        sub     eax, [Screen.screen + Object.height]
        
        cmp     eax, [Screen.screen + Object.y]
        jg      .notTop
  
  .top:      
        mov     [Screen.screen + Object.y], eax
        
  .notTop:
        stdcall Screen.UpdateCoordinates
        
        movzx   eax, BYTE [ebx + Level.background.red]
        movzx   ecx, BYTE [ebx + Level.background.green]
        movzx   edx, BYTE [ebx + Level.background.blue]
        stdcall Screen.Fill, eax, ecx, edx
     
        ret
endp

proc Screen.UpdateForMenu uses ebx

        mov     ebx, [currentMenu]

        mov     DWORD [Screen.screen + Object.x], 0
        mov     DWORD [Screen.screen + Object.y], 0
        
        stdcall Screen.UpdateCoordinates
        
        movzx   eax, BYTE [ebx + Menu.background.red]
        movzx   ecx, BYTE [ebx + Menu.background.green]
        movzx   edx, BYTE [ebx + Menu.background.blue]
        stdcall Screen.Fill, eax, ecx, edx 

        ret
endp