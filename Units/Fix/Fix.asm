proc Fix.FixObjectCoordinates\
     refObject
     
        mov     ecx, [refObject]
        
        mov     eax, Drawing.NORMAL 
        mul     DWORD [ecx + Object.x]
        mov     [ecx + Object.x], eax
     
        mov     eax, Drawing.NORMAL 
        mul     DWORD [ecx + Object.y]
        mov     [ecx + Object.y], eax
                
        ret
endp     

proc Fix.FixObjectSizes uses ebx esi,\
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
             
        ret
endp

proc Fix.FixObjectsCoordinates uses ebx,\
     refObjects
     
        mov     ebx, [refObjects] 
        
        mov     ecx, [ebx + 0]
        add     ebx, 4
  
  .loop:
        push    ecx     
        
        stdcall Fix.FixObjectCoordinates, [ebx]
                                
        add     ebx, 4
        pop     ecx                                   
        loop    .loop
                
        ret
endp

proc Fix.FixObjectsSizes uses ebx,\
     refObjectsWithDrawing
        
        mov     ebx, [refObjectsWithDrawing] 
        
        mov     ecx, [ebx + 0]
        add     ebx, 4
  
  .loop2:
        push    ecx     
        
        stdcall Fix.FixObjectSizes, [ebx]
                                
        add     ebx, 4
        pop     ecx                                   
        loop    .loop2
        
        ret
endp 

proc Fix.FixObjects\
     refObjects, refObjectsWithDrawing
     
        stdcall Fix.FixObjectsCoordinates, [refObjects]
        stdcall Fix.FixObjectsSizes, [refObjectsWithDrawing]        
                    
        ret
endp