struct BrickWithBreakTimer
  gameObjectWithAnimation GameObjectWithAnimation
  timer                   dd ?
  maxTimer                dd ?
ends

proc BrickWithBreakTimer.Start\
     refBrickWithBreakTimer
     
        mov     eax, [refBrickWithBreakTimer]     
     
        add     eax, BrickWithBreakTimer.timer
        stdcall Timer.Start, eax
        
        mov     eax, [refBrickWithBreakTimer] 
        
        add     eax, GameObjectWithAnimation.animation 
        stdcall Animation.Start, eax 
     
        ret
endp

proc BrickWithBreakTimer.Stop\
     refBrickWithBreakTimer
     
        mov     eax, [refBrickWithBreakTimer]     
     
        add     eax, BrickWithBreakTimer.timer 
        stdcall Timer.Stop, eax
     
        ret
endp

proc BrickWithBreakTimer.CanBreak\
     refBrickWithBreakTimer
     
        mov     eax, [refBrickWithBreakTimer]
        
        add     eax, BrickWithBreakTimer.timer
        stdcall Timer.IsTimeUp, eax, [eax + sizeof.BrickWithBreakTimer.timer]        
	      cmp     eax, FALSE
	      je	    .canNotBreak         

  .canBreak:
        mov     eax, TRUE
        jmp     .exit
        
  .canNotBreak:
        mov     eax, FALSE
        
  .exit:   
        ret
endp

proc BrickWithBreakTimer.Break uses ebx,\
     refBrickWithBreakTimer
     
        mov     ebx, [refBrickWithBreakTimer]
     
        stdcall Object.Delete, ebx
        stdcall BrickWithBreakTimer.Stop, ebx 
        
  .exit:   
        ret
endp

proc BrickWithBreakTimer.TimerObject uses ebx,\
     refBrickWithBreakTimer
     
        mov     ebx, [refBrickWithBreakTimer]
        
        stdcall BrickWithBreakTimer.CanBreak, ebx        
        cmp     eax, FALSE
        je      .exit
        
        stdcall BrickWithBreakTimer.Break, ebx 
     
  .exit: 
        ret
endp

proc BrickWithBreakTimer.TimerObjects uses ebx,\
     refBricksWithBreakTimers    
     
        mov     ebx, [refBricksWithBreakTimers]
        
        mov     ecx, [ebx + 0]
        cmp     ecx, 0
        je      .exit
        
        add     ebx, 4
  
  .loop:
        push    ecx                
        
        stdcall BrickWithBreakTimer.TimerObject, [ebx]
                      
        add     ebx, 4                                   
        pop     ecx
        loop    .loop    
          
        ret
endp                                          