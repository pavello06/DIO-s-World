struct Drawing
  pixelSize  dd ?
  directionX dd ?
  directionY dd ?
  refTexture dd ?
ends

Drawing.SMALL  = 3
Drawing.LITTLE = 4
Drawing.NORMAL = 5
Drawing.BIG    = 7
Drawing.HUGE   = 13
Drawing.LARGE  = 50

Drawing.LEFT  = -1
Drawing.RIGHT = 1

Drawing.DOWN  = -1
Drawing.UP    = 1

proc Drawing.DrawPixel\
     red, green, blue, x, y, pixelSize
        
        stdcall Color.Change, [red], [green], [blue]
        
        mov     ecx, [y]
        add     ecx, [pixelSize]
        stdcall Normalize.NormalizeCoordinateY, ecx
        push    eax
        
        mov     edx, [x]
        add     edx, [pixelSize]
        stdcall Normalize.NormalizeCoordinateX, edx
        push    eax
        
        stdcall Normalize.NormalizeCoordinateY, [y]
        push    eax
        
        stdcall Normalize.NormalizeCoordinateX, [x]
        push    eax

        invoke  glRectf
        
        ret
endp

proc Drawing.DrawObject uses ebx esi edi,\
     refObjectWithDrawing 
        locals               
          objectPixelX  dd ?
          texturePixelX dd ?          
          objectPixelY  dd ?
          texturePixelY dd ?
        endl
        
        mov     ebx, [refObjectWithDrawing]
        
        stdcall Screen.IsObjectOnScreen, ebx
        cmp     eax, FALSE
        je      .exit
        
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
        mov     edx, sizeof.Color
        mul     edx
        add     eax, edi
        
        cmp     BYTE [eax + Texture.color.red], -1
        je      .invisiblePixel                

        movzx   edx, BYTE [eax + Texture.color.red]
        movzx   ecx, BYTE [eax + Texture.color.green]
        movzx   eax, BYTE [eax + Texture.color.blue]

        stdcall Drawing.DrawPixel, edx, ecx, eax, [objectPixelX], [objectPixelY], [ebx + esi + Drawing.pixelSize]

  .invisiblePixel:
        mov     eax, [ebx + esi + Drawing.pixelSize]
        add     [objectPixelX], eax
        
        mov     eax, [texturePixelX]
        inc     eax
        xor     edx, edx
        div     DWORD [edi + Texture.width]
        mov     [texturePixelX], edx
        
        pop     ecx
        loop    .xLoop
        
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

  .exit:
        ret
endp

proc Drawing.DrawObjects\
     refObjectsWithDrawing     
     
        stdcall Array.Iterate, Drawing.DrawObject, [refObjectsWithDrawing] 
                
        ret
endp