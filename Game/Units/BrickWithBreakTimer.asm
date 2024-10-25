struct BrickWithBreakTimer
  gameObjectWithAnimation GameObjectWithAnimation
  timer                   dd ?
  maxTimer                dd ?
ends

proc BrickWithBreakTimer.Start\
     refBrickWithBreakTimer
     
        mov     eax, [refBrickWithBreakTimer]     
     
        mov     DWORD [eax + BrickWithBreakTimer.timer], 0
     
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
     
        ret
endp

