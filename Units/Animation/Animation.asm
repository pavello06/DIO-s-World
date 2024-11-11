struct Animation
  isFinite     dd ?
  timer        dd ?
  maxTimer     dd ?
  currentFrame dd ?
  refFrames    dd ?
ends

proc Animation.Start\
     refAnimation
     
        mov     eax, [refAnimation]
        
        add     eax, Animation.timer
        stdcall Timer.Start, eax

        ret
endp

proc Animation.Stop\
     refAnimation
     
        mov     eax, [refAnimation]
        
        add     eax, Animation.timer
        stdcall Timer.Stop, eax

        ret
endp

proc Animation.Copy\
     refAnimation1, refAnimation2
     
        mov     eax, [refAnimation1]
        mov     ecx, [refAnimation2]
     
        mov     edx, [ecx + Animation.isFinite]
        mov     [eax + Animation.isFinite], edx
        mov     edx, [ecx + Animation.maxTimer]
        mov     [eax + Animation.maxTimer], edx
        mov     edx, [ecx + Animation.currentFrame]
        mov     [eax + Animation.currentFrame], edx
        mov     edx, [ecx + Animation.refFrames]
        mov     [eax + Animation.refFrames], edx
     
        ret
endp

proc Animation.AnimateObject uses ebx,\
     refObjectWithAnimation
        
        mov     eax, [refObjectWithAnimation]
        
        mov     ebx, sizeof.GameObject + sizeof.Drawing 
        
        cmp     DWORD [eax + Object.type], Object.GAME
        je      .gameObject
        
  .menuObject:
        add     ebx, sizeof.MenuObject - sizeof.GameObject
  
  .gameObject:      
        cmp     DWORD [eax + ebx + Animation.timer], -1
        je      .exit
	      
        add     eax, ebx
        add     eax, Animation.timer
        stdcall Timer.IsTimeUp, eax, [eax + sizeof.Animation.timer]       
        cmp     eax, FALSE
        je      .exit
        
        mov     ecx, [refObjectWithAnimation] 
        
        mov     eax, [ecx + ebx + Animation.currentFrame]
        inc     eax
        
        mov     ecx, [ecx + ebx + Animation.refFrames]
        
        xor     edx, edx
        div     DWORD [ecx + Frames.totalFrames]
        
        mov     eax, [refObjectWithAnimation]
        
        mov     [eax + ebx + Animation.currentFrame], edx
                
        shl     edx, 2
        mov     ecx, [ecx + edx + Frames.refTextures]
        mov     [eax + ebx - sizeof.Drawing + Drawing.refTexture], ecx
        
        cmp     DWORD [eax + ebx + Animation.isFinite], TRUE
        jne     .exit
        cmp     DWORD [eax + ebx + Animation.currentFrame], 0
        jne     .exit
        
        add     eax, ebx
        stdcall Animation.Stop, eax
  
  .exit:            
        ret
endp

proc Animation.AnimateObjects uses ebx,\
     refObjectsWithAnimation, xMin, xMax, yMin, yMax    
     
        mov     ebx, [refObjectsWithAnimation]
        
        mov     ecx, [ebx + 0]
        add     ebx, 4
  
  .loop:
        push    ecx
        
        stdcall Screen.IsObjectOnScreen, [ebx], [xMin], [xMax], [yMin], [yMax]        
        cmp     eax, FALSE
        je      .endLoop                 
        
        stdcall Animation.AnimateObject, [ebx] 
  
  .endLoop:                     
        add     ebx, 4                                   
        pop     ecx
        loop    .loop    
          
        ret
endp