struct Screen
  object Object
  speedY dd ?
ends

Screen.SPEED_Y   = 10
Screen.MAX_TIMER = 17
Screen.timer     dd 0

Screen.xMin dd ?
Screen.xMax dd ?
Screen.yMin dd ?
Screen.yMax dd ?

screen Screen\
<Object.GENERAL, 0, 0, 1535, 850>,\
0 

proc Screen.Fill\
     red, green, blue

        stdcall Color.Change, [red], [green], [blue]
        
        invoke glRectf, -1.0, -1.0, 1.0, 1.0
        
        ret
endp

proc Screen.UpdateCoordinates

        mov     eax, [screen + Object.x]
        mov     [Screen.xMin], eax 
        add     eax, [screen + Object.width]
        mov     [Screen.xMax], eax
        mov     ecx, [screen + Object.y]
        mov     [Screen.yMin], ecx
        add     ecx, [screen + Object.height]
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
        mov     eax, [screen + Screen.speedY]
        add     [screen + Object.y], eax

  .notMove:      
        mov     eax, [ebx + Level.yMin]
        add     eax, [screen + Object.height]
        
        cmp     [player + Object.y], eax 
        jl      .notGreaterThenTopScreen
  
  .greaterThenTopScreen:
        mov     [screen + Screen.speedY], Screen.SPEED_Y
        jmp     .borders
  
  .notGreaterThenTopScreen:
        mov     [screen + Screen.speedY], -Screen.SPEED_Y
  
  .borders:
        mov     eax, [screen + Object.width]
        sub     eax, [player + Object.width]
        shr     eax, 1
        
        mov     ecx, [player + Object.x]
        sub     ecx, eax
        mov     [screen + Object.x], ecx
        
        mov     ecx, [ebx + Level.xMin]
        add     ecx, [player + Object.x]
                
        cmp     eax, ecx
        jl      .notLeft
        
  .left:
        mov     ecx, [ebx + Level.xMin]
        mov     [screen + Object.x], ecx
        
  .notLeft:
        mov     ecx, [ebx + Level.xMax]        
        sub     ecx, [player + Object.x]
        sub     ecx, [player + Object.width]
        
        cmp     eax, ecx
        jl      .notRight
        
  .right:
        mov     ecx, [ebx + Level.xMax]
        sub     ecx, [screen + Object.width]
        mov     [screen + Object.x], ecx
        
  .notRight:
        mov     eax, [ebx + Level.yMin]
  
        cmp     eax, [screen + Object.y]
        jl      .notBottom
        
  .bottom:
        mov     [screen + Object.y], eax
              
  .notBottom:     
        mov     eax, [ebx + Level.yMax]
        sub     eax, [screen + Object.height]
        
        cmp     eax, [screen + Object.y]
        jg      .notTop
  
  .top:      
        mov     [screen + Object.y], eax
        
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

        mov     DWORD [screen + Object.x], 0
        mov     DWORD [screen + Object.y], 0
        
        stdcall Screen.UpdateCoordinates
        
        movzx   eax, BYTE [ebx + Menu.background.red]
        movzx   ecx, BYTE [ebx + Menu.background.green]
        movzx   edx, BYTE [ebx + Menu.background.blue]
        stdcall Screen.Fill, eax, ecx, edx 

        ret
endp