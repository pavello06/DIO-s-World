struct Drawing
  pixelSize  dd ?
  directionX dd ?
  directionY dd ?
  refTexture dd ?
ends

Drawing.LITTLE = 3
Drawing.NORMAL = 4

Drawing.LEFT  = -1
Drawing.RIGHT = 1

Drawing.DOWN  = -1
Drawing.UP    = 1

proc Drawing.DrawPixel\
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

proc Drawing.DrawObject uses ebx esi edi,\
     refObjectWithDrawing, xMin, xMax, yMin, yMax 
        locals               
          objectPixelX  dd ?
          texturePixelX dd ?          
          objectPixelY  dd ?
          texturePixelY dd ?
        endl
        
        mov     ebx, [refObjectWithDrawing]
        
        mov     esi, sizeof.GameObject
        
        cmp     DWORD [ebx + Object.type], Object.GAME
        je      .gameObject
        
  .menuObject:
        add     esi, sizeof.MenuObject - sizeof.GameObject
  
  .gameObject:                                      
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
        cmp     [ebx + esi + Drawing.directionY], Drawing.UP
        je      .up
        
  .down:
        neg     eax
        add     eax, [edi + Texture.height]
        dec     eax
  
  .up:        
        mul     DWORD [edi + Texture.width]
        
        mov     edx, [texturePixelX]
        cmp     [ebx + esi + Drawing.directionX], Drawing.RIGHT
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

        stdcall Drawing.DrawPixel, edx, ecx, eax, [objectPixelX], [xMin], [xMax], [objectPixelY], [yMin], [yMax], [ebx + esi + Drawing.pixelSize]

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

proc Drawing.DrawObjects uses ebx,\
     refObjectsWithDrawing, xMin, xMax, yMin, yMax     
     
        mov     ebx, [refObjectsWithDrawing]
        
        mov     ecx, [ebx + Array.length]
        add     ebx, sizeof.Array.length
  
  .loop:
        push    ecx
        
        stdcall Screen.IsObjectOnScreen, [ebx], [xMin], [xMax], [yMin], [yMax]        
        cmp     eax, FALSE
        je      .endLoop                 
        
        stdcall Drawing.DrawObject, [ebx], [xMin], [xMax], [yMin], [yMax] 
  
  .endLoop:                     
        add     ebx, sizeof.Array.elements                                     
        pop     ecx
        loop    .loop    
          
        ret
endp