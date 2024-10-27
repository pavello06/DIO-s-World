struct BrickWithBreakTimer
  gameObjectWithAnimation GameObjectWithAnimation
  timer                   dd ?
  maxTimer                dd ?
ends

proc BrickWithBreakTimer.Start\
     refBrickWithBreakTimer
     
        mov     eax, [refBrickWithBreakTimer]     
     
        mov     DWORD [eax + BrickWithBreakTimer.timer], 0
        stdcall Animation.Start, eax + sizeof.GameObjectWithAnimation 
     
        ret
endp

proc BrickWithBreakTimer.CanBreak\
     refBrickWithBreakTimer
     
        invoke  GetTickCount
     
        mov     ecx, [refBrickWithBreakTimer]
        
        cmp     DWORD [ecx + BrickWithBreakTimer.timer], -1
        je      .canNotBreak
	      sub	    eax, [ecx + BrickWithBreakTimer.timer]
	      cmp	    eax, [ecx + BrickWithBreakTimer.maxTimer]
	      jb	    .canNotBreak         

  .canBreak:
        mov     eax, TRUE
        jmp     .exit
        
  .canNotBreak:
        mov     eax, FALSE
        
  .exit:   
        ret
endp

proc BrickWithBreakTimer.Break\
     refBrickWithBreakTimer
     
        stdcall Object.Delete, [refBrickWithBreakTimer]  
     
        ret
endp

proc BrickWithBreakTimer.Stop\
     refBrickWithBreakTimer
     
        mov     eax, [refBrickWithBreakTimer]     
     
        mov     DWORD [eax + BrickWithBreakTimer.timer], -1
        stdcall Animation.Stop, eax + sizeof.GameObjectWithAnimation 
     
        ret
endp

proc BrickWithBreakTimer.TimerObject uses ebx,\
     refBrickWithBreakTimer
     
        mov     ebx, [refBrickWithBreakTimer]
        
        stdcall BrickWithBreakTimer.CanBreak, ebx
        
        cmp     eax, FALSE
        je      .exit
        
        stdcall BrickWithBreakTimer.Break, ebx
        stdcall BrickWithBreakTimer.Stop, ebx 
     
  .exit: 
        ret
endp

proc BrickWithBreakTimer.TimerObjects uses ebx,\
     refBricksWithBreakTimers    
     
        mov     ebx, [refBricksWithBreakTimers]
        
        mov     ecx, [ebx + 0]
        add     ebx, 4
  
  .loop:
        push    ecx                
        
        stdcall BrickWithBreakTimer.TimerObject, [ebx]
                      
        add     ebx, 4                                   
        pop     ecx
        loop    .loop    
          
        ret
endp                                          