;-------------------------------------------------------------------------------
proc Draw.DrawPixel\
     pixelSize, red, green, blue, x, y, xMin, yMin, xMax, yMax
        locals
          normalizedRed   dd ?
          normalizedGreen dd ?
          normalizedBlue  dd ?
          
          normalizedX1 dd ?
          normalizedY1 dd ?
          normalizedX2 dd ?
          normalizedY2 dd ? 
        endl
        
        stdcall Normalize.NormalizeColor, [red]
        mov     [normalizedRed], eax
        
        stdcall Normalize.NormalizeColor, [green]
        mov     [normalizedGreen], eax
        
        stdcall Normalize.NormalizeColor, [blue]
        mov     [normalizedBlue], eax
        
        invoke  glColor3f, [normalizedRed], [normalizedGreen], [normalizedBlue]
        
        stdcall Normalize.NormalizeCoordinate, [xMin], [xMax], [x]
        mov     [normalizedX1], eax
        
        stdcall Normalize.NormalizeCoordinate, [yMin], [yMax], [y]
        mov     [normalizedY1], eax

        mov     eax, [pixelSize]
        add     [x], eax
        stdcall Normalize.NormalizeCoordinate, [xMin], [xMax], [x]
        mov     [normalizedX2], eax

        mov     eax, [pixelSize]
        add     [y], eax
        stdcall Normalize.NormalizeCoordinate, [yMin], [yMax], [y]
        mov     [normalizedY2], eax

        invoke  glRectf, [normalizedX1], [normalizedY1], [normalizedX2], [normalizedY2]
        
        ret
endp

proc Draw.DrawObject uses ebx esi,\
     refObject, xMin, yMin, xMax, yMax 
        locals               
          objectPixelX dd ?
          objectPixelY dd ?
          
          texturePixelX dd ?
          texturePixelY dd ?
          
          texturePixelRed   dd ?
          texturePixelGreen dd ?
          texturePixelBlue  dd ?
        endl
        
        mov     ebx, [refObject]                                
        mov     esi, [ebx + Object.drawing.refTexture]
        
        mov     eax, [ebx + Object.y]
        add     eax, [ebx + Object.height]
        sub     eax, [ebx + Object.drawing.pixelSize]
        mov     [objectPixelY], eax
        
        mov     eax, [ebx + Object.height]
        mov     ecx, [ebx + Object.drawing.pixelSize]
        xor     edx, edx
        div     ecx
        mov     ecx, eax
        
  .yLoop:
        push    ecx
        
        mov     eax, [ebx + Object.y]
        add     eax, [ebx + Object.height]
        sub     eax, [ebx + Object.drawing.pixelSize]
        sub     eax, [objectPixelY]
        mov     ecx, [ebx + Object.drawing.pixelSize]
        xor     edx, edx
        div     ecx
        xor     edx, edx
        div     DWORD [esi + Texture.height]
        mov     [texturePixelY], edx
        
        mov     eax, [ebx + Object.x]
        mov     [objectPixelX], eax
        
        mov     eax, [ebx + Object.width]
        mov     ecx, [ebx + Object.drawing.pixelSize]
        xor     edx, edx
        div     ecx
        mov     ecx, eax

  .xLoop:
        push    ecx
  
        mov     eax, [objectPixelX]
        sub     eax, [ebx + Object.x]
        mov     ecx, [ebx + Object.drawing.pixelSize]
        xor     edx, edx
        div     ecx
        xor     edx, edx
        div     DWORD [esi + Texture.width] 
        mov     [texturePixelX], edx

        mov     eax, [texturePixelY]
        cmp     [ebx + Object.drawing.directionY], DIRECTION_Y_UP
        je      .directionYUp
        neg     eax
        add     eax, [esi + Texture.height]
        dec     eax
  
  .directionYUp:        
        mul     DWORD [esi + Texture.width]
        
        mov     edx, [texturePixelX]
        cmp     [ebx + Object.drawing.directionX], DIRECTION_X_RIGHT
        je      .directionXRight
        neg     edx
        add     edx, [esi + Texture.width]
        dec     edx
  
  .directionXRight:
        add     eax, edx
        mov     edx, 3 * 4
        mul     edx
        add     eax, esi

        mov     edx, [eax + Texture.colors.red]
        mov     [texturePixelRed], edx
        mov     edx, [eax + Texture.colors.green]
        mov     [texturePixelGreen], edx
        mov     edx, [eax + Texture.colors.blue]
        mov     [texturePixelBlue], edx

        cmp     edx, -1
        je      .invisiblePixel

        stdcall Draw.DrawPixel, [ebx + Object.drawing.pixelSize], [texturePixelRed], [texturePixelGreen], [texturePixelBlue],\ 
                                [objectPixelX], [objectPixelY], [xMin], [yMin], [xMax], [yMax]

  .invisiblePixel:
        mov     eax, [ebx + Object.drawing.pixelSize]
        add     [objectPixelX], eax
        pop     ecx
        dec     ecx
        cmp     ecx, 0
        jne     .xLoop
        
        mov     eax, [ebx + Object.drawing.pixelSize]
        sub     [objectPixelY], eax
        pop     ecx
        dec     ecx
        cmp     ecx, 0
        jne     .yLoop

        ret
endp

proc Draw.DrawObjects uses ebx esi,\
     refObjects, xMin, yMin, xMax, yMax
     
        mov     ebx, [refObjects] 
        
        xor     esi, esi
        mov     ecx, [ebx + 0]
  
  .loop:
        push    ecx
        
        mov     eax, [ebx + esi + 4]
        
        cmp     DWORD [eax + Object.drawing.refTexture], NO_DRAWING
        je      .endLoop
        
        mov     ecx, [eax + Object.x]
        cmp     ecx, [xMax]
        ja      .endLoop
        add     ecx, [eax + Object.width]
        cmp     ecx, [xMin]
        jb      .endLoop
        
        mov     ecx, [eax + Object.y]
        cmp     ecx, [yMax]
        ja      .endLoop
        add     ecx, [eax + Object.height]
        cmp     ecx, [yMin]
        jb      .endLoop                  
        
        stdcall Draw.DrawObject, eax, [xMin], [yMin], [xMax], [yMax] 
  
  .endLoop:                     
        add     esi, 4                                   
        pop     ecx
        loop    .loop    
          
        ret
endp
;------------------------------------------------------------------------------- 