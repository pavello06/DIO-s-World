proc Fix.FixObject uses ebx esi,\
     refObjectWithDrawing
        
        mov     ecx, [refObjectWithDrawing]
        
        mov     ebx, sizeof.Object;sizeof.MenuObject
        
        cmp     DWORD [ecx + Object.type], Object.MENU
        je     .MenuObject

  .GameObject:
        add     ebx, sizeof.GameObject - sizeof.Object;sizeof.MenuObject
  
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

proc Fix.FixObjects uses ebx,\
     refObjectsWithDrawing
     
        mov     ebx, [refObjectsWithDrawing] 
        
        mov     ecx, [ebx + 0]
        add     ebx, 4
  
  .loop:
        push    ecx     
        
        stdcall Fix.FixObject, [ebx]
            
  .endLoop:                     
        add     ebx, 4
        pop     ecx                                   
        loop    .loop
                    
        ret
endp