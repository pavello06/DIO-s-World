proc Timer.Start\
     refTimer
    
        invoke	GetTickCount
        
        mov     ecx, [refTimer]
        
        mov     [ecx], eax
    
        ret 
endp

proc Timer.Stop\
     refTimer
        
        mov     eax, [refTimer]
        
        mov     DWORD [eax], -1
    
        ret 
endp

proc Timer.IsTimeUp\
     refTimer, maxTimer
     
        invoke	GetTickCount
        
        mov     ecx, [refTimer] 
        
        mov     edx, [ecx]
        
        cmp     DWORD edx, -1
        je      .TimeIsUpWhenNotStart
        
	      sub	    eax, edx
	      cmp	    eax, [maxTimer]
	      jb	    .TimeIsNotUp
        
  .TimeIsUp:
        add	    [ecx], eax
  
  .TimeIsUpWhenNotStart:      
        mov     eax, TRUE
        jmp     .exit   
  
  .TimeIsNotUp:
        mov     eax, FALSE
  
  .exit:   
        ret     
endp