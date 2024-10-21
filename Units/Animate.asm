;-------------------------------------------------------------------------------
proc Animate.AnimateObject uses ebx esi,\
     refObjectWithAnimation
     
        invoke	GetTickCount
        
        mov     ecx, [refObjectWithAnimation]
        
        mov     ebx, sizeof.Object + sizeof.Drawing 
        cmp     DWORD [ecx + Object.type], Structs.MENU
        je     .MenuObject
        
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

proc Animate.AnimateObjects uses ebx esi edi,\
     refObjectsWithAnimation, refScreen
        locals               
          xMax dd ?
          yMax dd ?
        endl      
     
        mov     ebx, [refObjectsWithAnimation]
        
        mov     esi, [refScreen]
        mov     eax, [esi + Object.x]
        add     eax, [esi + Object.width]
        dec     eax
        mov     [xMax], eax
        mov     eax, [esi + Object.y]
        add     eax, [esi + Object.height]
        dec     eax
        mov     [yMax], eax 
        
        xor     edi, edi
        mov     ecx, [ebx + 0]
  
  .loop:
        push    ecx
        
        mov     eax, [ebx + edi + 4]
        
        mov     ecx, [eax + Object.x]
        cmp     ecx, [xMax]
        ja      .endLoop
        add     ecx, [eax + Object.width]
        cmp     ecx, [esi + Object.x]
        jb      .endLoop
        
        mov     ecx, [eax + Object.y]
        cmp     ecx, [yMax]
        ja      .endLoop
        add     ecx, [eax + Object.height]
        cmp     ecx, [esi + Object.y]
        jb      .endLoop                  
        
        stdcall Animate.AnimateObject, eax 
  
  .endLoop:                     
        add     edi, 4                                   
        pop     ecx
        loop    .loop    
          
        ret
endp
;-------------------------------------------------------------------------------