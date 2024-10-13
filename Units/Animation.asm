;-------------------------------------------------------------------------------
proc Animate.AnimateObject\
     refObject
     
        invoke	GetTickCount
        
        mov     ecx, [refObject]
        
        cmp     DWORD [ecx + Object.animation.timer], -1
        je      .exit
	      sub	    eax, [ecx + Object.animation.timer]
	      cmp	    eax, [ecx + Object.animation.maxTimer]
	      jb	    .exit     
        
        add	    [ecx + Object.animation.timer], eax
        
        mov     eax, [ecx + Object.animation.currentFrame]
        inc     eax
        
        mov     ecx, [ecx + Object.animation.refFrames]
        
        xor     edx, edx
        div     DWORD [ecx + Frames.totalFrames]
        
        mov     eax, [refObject]
        
        mov     [eax + Object.animation.currentFrame], edx
                
        shl     edx, 2
        mov     ecx, [ecx + edx + Frames.refsTextures]
        mov     [eax + Object.drawing.refTexture], ecx
        
        cmp     DWORD [eax + Object.animation.IsFinite], TRUE
        jne     .exit
        cmp     DWORD [eax + Object.animation.currentFrame], 0
        jne     .exit
        
        mov     DWORD [ecx + Object.animation.timer], -1
  
  .exit:            
        ret
endp

proc Animate.AnimateObjects uses ebx esi,\
     refObjects
     
        mov     ebx, [refObjects] 
        
        xor     esi, esi
        mov     ecx, [ebx + 0]
  
  .loop:
        push    ecx     
        
        mov     eax, [ebx + esi + 4]
        
        cmp     DWORD [eax + Object.animation.refFrames], NO_ANIMATION
        je      .endLoop
        
        stdcall Animate.AnimateObject, eax
            
  .endLoop:                     
        add     esi, 4
        pop     ecx                                   
        loop    .loop
                    
        ret
endp
;-------------------------------------------------------------------------------