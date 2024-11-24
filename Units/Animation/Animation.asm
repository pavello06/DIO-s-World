struct Animation
  isFinite     dd ?
  timer        dd ?
  maxTimer     dd ?
  currentFrame dd ?
  refFrames    dd ?
ends

proc Animation.Start uses ebx,\
     refAnimation
     
        mov     ebx, [refAnimation]
        
        lea     eax, [ebx + Animation.timer]
        stdcall Timer.Start, eax

        mov     ecx, [ebx + Animation.maxTimer]
        sub     [ebx + Animation.timer], ecx
        
        mov     DWORD [ebx + Animation.currentFrame], 0

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
        mov     edx, [ecx + Animation.refFrames]
        mov     [eax + Animation.refFrames], edx
     
        ret
endp

proc Animation.AnimateObject uses ebx esi,\
     refObjectWithAnimation
     
        mov     ebx, [refObjectWithAnimation]
     
        stdcall Screen.IsObjectOnScreen, ebx
        cmp     eax, FALSE
        je      .exit
        
        mov     esi, sizeof.GameObject + sizeof.Drawing 
        
        cmp     DWORD [ebx + Object.type], Object.GAME
        je      .gameObject
        
  .menuObject:
        add     esi, sizeof.MenuObject - sizeof.GameObject
  
  .gameObject:      
        cmp     DWORD [ebx + esi + Animation.timer], -1
        je      .exit
	      
        lea     eax, [ebx + esi + Animation.timer]
        stdcall Timer.IsTimeUp, eax, [eax + sizeof.Animation.timer]       
        cmp     eax, FALSE
        je      .exit
        
        mov     eax, [ebx + esi + Animation.currentFrame]
        inc     eax
        
        mov     ecx, [ebx + esi + Animation.refFrames]
        
        xor     edx, edx
        div     DWORD [ecx + Frames.totalFrames]
        
        mov     [ebx + esi + Animation.currentFrame], edx
                
        shl     edx, 2
        mov     ecx, [ecx + edx + Frames.refTextures]
        mov     [ebx + esi - sizeof.Drawing + Drawing.refTexture], ecx
        
        cmp     DWORD [ebx + esi + Animation.isFinite], TRUE
        jne     .exit
        cmp     DWORD [ebx + esi + Animation.currentFrame], 0
        jne     .exit
        
        add     ebx, esi
        stdcall Animation.Stop, ebx
  
  .exit:            
        ret
endp

proc Animation.AnimateObjects\
     refObjectsWithAnimation   
     
        stdcall Array.Iterate, Animation.AnimateObject, [refObjectsWithAnimation] 
          
        ret
endp