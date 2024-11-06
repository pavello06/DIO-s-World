proc Timer.Start\
     refTimer
    
        invoke	GetTickCount
        
        mov     ecx, [refTimer]
        
        mov     [ecx], eax
    
        ret 
endp

proc Timer.IsTimeUp\
     refTimer, maxTimer
     
        invoke	GetTickCount
        
        mov     ecx, [refTimer]
        
	      sub	    eax, [ecx]
	      cmp	    eax, [maxTimer]
	      jb	    .TimeIsNotUp
        
  .TimeIsUp:
        add	    [ecx], eax
        
        mov     eax, TRUE
        jmp     .exit   
  
  .TimeIsNotUp:
        mov     eax, FALSE
  
  .exit:   
        ret     
endp