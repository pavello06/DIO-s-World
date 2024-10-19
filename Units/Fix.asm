;-------------------------------------------------------------------------------
proc Fix.FixObject uses ebx esi,\
     refObject
        
        mov     ecx, [refObject]
        
        mov     ebx, sizeof.Object
        mov     eax, [ecx + Object.type]
        and     eax, MENU_OBJECT_WITH_DRAWING
        cmp     eax, 0
        jne     .MenuObject
        add     ebx, 1 * 4
  
  .MenuObject:      
        mov     esi, [ecx + ebx + Drawing.refTexture]
        
        mov     eax, [ecx + Object.width]
        mul     [esi + Texture.width]
        mul     [ecx + ebx + Drawing.pixelSize]
        mov     [ecx + Object.width], eax
        
        mov     eax, [ecx + Object.height]
        mul     [esi + Texture.height]
        mul     [ecx + ebx + Drawing.pixelSize]
        mov     [ecx + Object.height], eax
  
  .exit:            
        ret
endp

proc Fix.FixObjects uses ebx esi,\
     refObjects
     
        mov     ebx, [refObjects] 
        
        xor     esi, esi
        mov     ecx, [ebx + 0]
  
  .loop:
        push    ecx     
        
        stdcall Fix.FixObject, [ebx + esi + 4]
            
  .endLoop:                     
        add     esi, 4
        pop     ecx                                   
        loop    .loop
                    
        ret
endp
;-------------------------------------------------------------------------------