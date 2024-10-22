;-------------------------------------------------------------------------------
proc Draw.DrawPixel\
     red, green, blue, x, xMin, xMax, y, yMin, yMax, pixelSize
        
        stdcall Normalize.NormalizeColor, [blue]
        push    eax
        
        stdcall Normalize.NormalizeColor, [green]
        push    eax
        
        stdcall Normalize.NormalizeColor, [red]
        push    eax
        
        invoke  glColor3f
        
        mov     eax, [y]
        add     eax, [pixelSize]
        stdcall Normalize.NormalizeCoordinate, eax, [yMin], [yMax]
        push    eax
        
        mov     eax, [x]
        add     eax, [pixelSize]
        stdcall Normalize.NormalizeCoordinate, eax, [xMin], [xMax]
        push    eax
        
        stdcall Normalize.NormalizeCoordinate, [y], [yMin], [yMax]
        push    eax
        
        stdcall Normalize.NormalizeCoordinate, [x], [xMin], [xMax]
        push    eax

        invoke  glRectf
        
        ret
endp

proc Draw.DrawObject uses ebx esi edi,\
     refObjectWithDrawing, xMin, xMax, yMin, yMax 
        locals               
          objectPixelX  dd ?
          texturePixelX dd ?          
          objectPixelY  dd ?
          texturePixelY dd ?
        endl
        
        mov     ebx, [refObjectWithDrawing]
        
        mov     esi, sizeof.Object
        cmp     DWORD [ebx + Object.type], Structs.MENU
        je     .MenuObject
        
  .GameObject:
        add     esi, sizeof.GameObject - sizeof.Object;sizeof.MenuObject
  
  .MenuObject:                                      
        mov     edi, [ebx + esi + Drawing.refTexture]
        
        mov     eax, [ebx + Object.y]
        add     eax, [ebx + Object.height]
        sub     eax, [ebx + esi + Drawing.pixelSize]
        mov     [objectPixelY], eax
        
        mov     [texturePixelY], 0
        
        mov     eax, [ebx + Object.height]
        xor     edx, edx
        div     DWORD [ebx + esi + Drawing.pixelSize]
        mov     ecx, eax
        
  .yLoop:
        push    ecx
        
        mov     eax, [ebx + Object.x]
        mov     [objectPixelX], eax
        
        mov     [texturePixelX], 0
        
        mov     eax, [ebx + Object.width]
        xor     edx, edx
        div     DWORD [ebx + esi + Drawing.pixelSize]
        mov     ecx, eax

  .xLoop:
        push    ecx

        mov     eax, [texturePixelY]
        cmp     [ebx + esi + Drawing.directionY], Structs.UP
        je      .up
        
  .down:
        neg     eax
        add     eax, [edi + Texture.height]
        dec     eax
  
  .up:        
        mul     DWORD [edi + Texture.width]
        
        mov     edx, [texturePixelX]
        cmp     [ebx + esi + Drawing.directionX], Structs.RIGHT
        je      .right
        
  .left:
        neg     edx
        add     edx, [edi + Texture.width]
        dec     edx
  
  .right:
        add     eax, edx
        mov     edx, 3 * 1
        mul     edx
        add     eax, edi
        
        cmp     BYTE [eax + Texture.colors.red], -1
        je      .invisiblePixel                

        movzx   edx, BYTE [eax + Texture.colors.red]
        movzx   ecx, BYTE [eax + Texture.colors.green]
        movzx   eax, BYTE [eax + Texture.colors.blue]

        stdcall Draw.DrawPixel, edx, ecx, eax, [objectPixelX], [xMin], [xMax], [objectPixelY], [yMin], [yMax], [ebx + esi + Drawing.pixelSize]

  .invisiblePixel:
        mov     eax, [ebx + esi + Drawing.pixelSize]
        add     [objectPixelX], eax
        
        mov     eax, [texturePixelX]
        inc     eax
        xor     edx, edx
        div     DWORD [edi + Texture.width]
        mov     [texturePixelX], edx
        
        pop     ecx
        dec     ecx
        cmp     ecx, 0
        jne     .xLoop
        
        mov     eax, [ebx + esi + Drawing.pixelSize]
        sub     [objectPixelY], eax
        
        mov     eax, [texturePixelY]
        inc     eax
        xor     edx, edx
        div     DWORD [edi + Texture.height]
        mov     [texturePixelY], edx
        
        pop     ecx
        dec     ecx
        cmp     ecx, 0
        jne     .yLoop

        ret
endp

proc Draw.DrawObjects uses ebx esi edi,\
     refObjectsWithDrawing, xMin, xMax, yMin, yMax
        locals               
          xMax dd ?
          yMax dd ?
        endl      
     
        mov     ebx, [refObjectsWithDrawing]
        
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
        
        stdcall Draw.DrawObject, eax, xMin, xMax, yMin, yMax 
  
  .endLoop:                     
        add     esi, 4                                   
        pop     ecx
        loop    .loop    
          
        ret
endp
;------------------------------------------------------------------------------- 