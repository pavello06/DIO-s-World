struct String
  object    Object
  string    dd STRING_MAX_LENGTH dup ?
  refMemory dd ?
ends

STRING_MAX_LENGTH = 10

proc String.TimerObject uses ebx esi edi,\
     refString

        mov     ebx, [refString]
        lea     esi, [ebx + String.string] 
        mov     edi, [ebx + String.refMemory]
        
        mov     eax, [ebx + Object.x]
        mov     edx, [ebx + Object.y]
        
        mov     ecx, STRING_MAX_LENGTH
        
  .loop:
        cmp     DWORD [esi], 0
        je      .exit
  
        cmp     DWORD [esi], ''''
        jne     .letter
        
        mov     ebx, quotationMarkTexture
        jmp     .changeTexture 
  
  .letter:
        mov     ebx, [esi]
        sub     ebx, 'A'
        imul    ebx, A_SIZE
        add     ebx, aTexture
  
  .changeTexture:      
        mov     [edi + Object.x], eax
        mov     [edi + Object.y], edx
        mov     [edi + MenuObjectWithDrawing.drawing.refTexture], ebx
  
        mov     ebx, A_WIDTH
        imul    ebx, [edi + MenuObjectWithDrawing.drawing.pixelSize]
        add     ebx, [edi + MenuObjectWithDrawing.drawing.pixelSize]
        add     eax, ebx
        add     esi, 4
        add     edi, sizeof.MenuObjectWithDrawing
        loop .loop

  .exit:
        ret
endp

proc String.TimerObjects\
     refStrings
     
        stdcall Array.Iterate, String.TimerObject, [refStrings]
     
        ret
endp