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
        
        mov     [eax + Animation.timer], 0

        ret
endp

proc Animation.Stop\
     refAnimation
     
        mov     eax, [refAnimation]
        
        mov     [eax + Animation.timer], -1

        ret
endp

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