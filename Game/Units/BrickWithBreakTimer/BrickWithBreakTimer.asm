struct BrickWithBreakTimer
  gameObjectWithAnimation GameObjectWithAnimation
  timer                   dd ?
  maxTimer                dd ?
ends

proc BrickWithBreakTimer.Start uses ebx,\
     refBrickWithBreakTimer
     
        mov     ebx, [refBrickWithBreakTimer]     
     
        lea     eax, [ebx + BrickWithBreakTimer.timer]
        stdcall Timer.Start, eax 
        
        lea     eax, [ebx + GameObjectWithAnimation.animation] 
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

proc BrickWithBreakTimer.TimerObjects\
     refBricksWithBreakTimers
     
        stdcall Array.Iterate, BrickWithBreakTimer.TimerObject, [refBricksWithBreakTimers]    
            
        ret
endp                                          