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
        
        mov     ebx, sizeof.GameObject
        
        cmp     DWORD [ecx + Object.type], Object.GAME
        je     .gameObject

  .menuObject:
        add     ebx, sizeof.MenuObject - sizeof.GameObject
  
  .gameObject:      
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
     
        stdcall Array.Iterate, Fix.FixObjectCoordinates, [refObjects] 
                
        ret
endp

proc Fix.FixObjectsSizes uses ebx,\
     refObjectsWithDrawing
        
        stdcall Array.Iterate, Fix.FixObjectSizes, [refObjectsWithDrawing] 
        
        ret
endp

proc Fix.FixObjects uses ebx esi,\
     refScreens, offset

        mov     ebx, [refScreens] 
        
        mov     ecx, [ebx + Array.length]
        add     ebx, sizeof.Array.length
  
  .loop:
        push    ecx
        
        mov     esi, [ebx]
        add     esi, [offset]     
        
        stdcall Fix.FixObjectsCoordinates, [esi]
        stdcall Fix.FixObjectsSizes, [esi + 4]
                                
        add     ebx, sizeof.Array.elements
        pop     ecx                                   
        loop    .loop

        ret
endp

proc Fix.FixGameObjects

        stdcall Fix.FixObjects, levels, Level.gameObjects.refGameObjects

        ret
endp 

proc Fix.FixMenuObjects

        stdcall Fix.FixObjects, menus, Menu.menuObjects.refMenuObjects

        ret
endp

proc Fix.FixAllObjects
     
        stdcall Fix.FixGameObjects
        stdcall Fix.FixMenuObjects        
                    
        ret
endp