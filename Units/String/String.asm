struct String
  object    Object
  refMemory dd ?
  string    dd ?
ends

proc String.NumberToString uses ebx esi,\
     numberLength, number, refString

        mov     edx, [numberLength]
        mov     ecx, edx

        mov     eax, [number]
        mov     ebx, [refString]
        dec     edx
        shl     edx, 2
        add     ebx, edx
        
  .loop:
        mov     esi, 10
        xor     edx, edx
        div     esi
        
        add     edx, '0'
        mov     [ebx], edx
    
        sub     ebx, 4
        loop    .loop

        ret
endp

proc String.TimerObject uses ebx esi edi,\
     refString

        mov     eax, [refString]
        mov     ecx, [eax + String.refMemory]
        lea     edx, [eax + String.string] 
        
        mov     ebx, [eax + Object.x]
        mov     esi, [eax + Object.y]
        
  .loop:
        mov     eax, [edx]
    
        cmp     eax, ''''
        je      .quotationMark
        
        cmp     eax, '9'
        jbe     .digit
        
        jmp     .letter
  
  .quotationMark:      
        mov     eax, quotationMarkTexture        
        mov     edi, A_WIDTH
        jmp     .changeTexture
        
  .digit:
        sub     eax, '0'
        imul    eax, ZERO_SIZE
        add     eax, zeroTexture
        mov     edi, ZERO_WIDTH
        jmp     .changeTexture 
  
  .letter:
        sub     eax, 'A'
        imul    eax, A_SIZE
        add     eax, aTexture
        mov     edi, A_WIDTH
  
  .changeTexture:      
        mov     [ecx + Object.x], ebx
        mov     [ecx + Object.y], esi
        mov     [ecx + MenuObjectWithDrawing.drawing.refTexture], eax
  
        imul    edi, [ecx + MenuObjectWithDrawing.drawing.pixelSize]
        add     edi, [ecx + MenuObjectWithDrawing.drawing.pixelSize]
        add     ebx, edi
        add     edx, 4
        add     ecx, sizeof.Object + sizeof.Drawing
        cmp     DWORD [edx], 0
        jne     .loop

  .exit:
        ret
endp

proc String.TimerObjects\
     refStrings
     
        stdcall Array.Iterate, String.TimerObject, [refStrings]
     
        ret
endp