;-------------------------------------------------------------------------------
proc Size.FixObject\
     refObject
        
        mov     ecx, [refObject]
        mov     edx, [ecx + Object.refTexture]
        
        mov     eax, [ecx + Object.width]
        imul    [edx + Texture.width]
        imul    [ecx + Object.drawing.pixelSize]
        mov     [ecx + Object.width], eax
        
        mov     eax, [ecx + Object.height]
        imul    [edx + Texture.height]
        imul    [ecx + Object.drawing.pixelSize]
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