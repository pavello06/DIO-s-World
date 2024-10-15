;-------------------------------------------------------------------------------
proc Size.FixObject uses ebx,\
     refObject
        
        mov     ecx, [refObject]
        mov     ebx, [ecx + Object.drawing.refTexture]
        
        mov     eax, [ecx + Object.width]
        mul     [ebx + Texture.width]
        mul     [ecx + Object.drawing.pixelSize]
        mov     [ecx + Object.width], eax
        
        mov     eax, [ecx + Object.height]
        mul     [ebx + Texture.height]
        mul     [ecx + Object.drawing.pixelSize]
        mov     [ecx + Object.height], eax
  
  .exit:            
        ret
endp

proc Size.FixObjects uses ebx esi,\
     refObjects
     
        mov     ebx, [refObjects] 
        
        xor     esi, esi
        mov     ecx, [ebx + 0]
  
  .loop:
        push    ecx     
        
        stdcall Size.FixObject, [ebx + esi + 4]
            
  .endLoop:                     
        add     esi, 4
        pop     ecx                                   
        loop    .loop
                    
        ret
endp
;-------------------------------------------------------------------------------