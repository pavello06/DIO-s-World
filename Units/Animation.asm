struct Animation
  isFinite     dd ?
  timer        dd ?
  maxTimer     dd ?
  currentFrame dd ?
  refFrames    dd ?
ends

proc Animation.AnimateObject uses ebx,\
     refObjectWithAnimation
     
        invoke	GetTickCount
        
        mov     ecx, [refObjectWithAnimation]
        
        mov     ebx, sizeof.Object + sizeof.Drawing;sizeof.MenuObject 
        cmp     DWORD [ecx + Object.type], Object.MENU
        je      .MenuObject
        
  .GameObject:
        add     ebx, sizeof.GameObject - sizeof.Object;sizeof.MenuObject
  
  .MenuObject:      
        cmp     DWORD [ecx + ebx + Animation.timer], -1
        je      .exit
	      sub	    eax, [ecx + ebx + Animation.timer]
	      cmp	    eax, [ecx + ebx + Animation.maxTimer]
	      jb	    .exit     
        
        add	    [ecx + ebx + Animation.timer], eax
        
        mov     eax, [ecx + ebx + Animation.currentFrame]
        inc     eax
        
        mov     ecx, [ecx + ebx + Animation.refFrames]
        
        xor     edx, edx
        div     DWORD [ecx + Frames.totalFrames]
        
        mov     eax, [refObjectWithAnimation]
        
        mov     [eax + ebx + Animation.currentFrame], edx
                
        shl     edx, 2
        mov     ecx, [ecx + edx + Frames.refsTextures]
        mov     [eax + ebx - sizeof.Drawing + Drawing.refTexture], ecx
        
        cmp     DWORD [eax + ebx + Animation.isFinite], TRUE
        jne     .exit
        cmp     DWORD [eax + ebx + Animation.currentFrame], 0
        jne     .exit
        
        mov     DWORD [eax + ebx + Animation.timer], -1
  
  .exit:            
        ret
endp

proc Animation.AnimateObjects uses ebx esi,\
     refObjectsWithAnimation, xMin, xMax, yMin, yMax    
     
        mov     ebx, [refObjectsWithAnimation]
        
        xor     esi, esi
        mov     ecx, [ebx + 0]
  
  .loop:
        push    ecx
        
        mov     eax, [ebx + esi + 4]
        
        add     ecx, [eax + Object.width]
        cmp     ecx, [xMin]
        jl      .endLoop
        mov     ecx, [eax + Object.x]
        cmp     ecx, [xMax]
        jg      .endLoop        
        add     ecx, [eax + Object.height]
        cmp     ecx, [yMin]
        jl      .endLoop 
        mov     ecx, [eax + Object.y]
        cmp     ecx, [yMax]
        jg      .endLoop                 
        
        stdcall Animation.AnimateObject, eax 
  
  .endLoop:                     
        add     esi, 4                                   
        pop     ecx
        loop    .loop    
          
        ret
endp