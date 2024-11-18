struct String
  object    Object
  string    dd STRING_MAX_LENGTH dup ?
  refMemory dd ?
ends

STRING_MAX_LENGTH = 10

proc String.ProcessObject uses ebx esi edi,\
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
  
        mov     ebx, [esi]
        sub     ebx, 'A'
        imul    ebx, 9 * 8 * 3 + 8
        add     ebx, aTexture
        
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

proc String.ProcessObjects\
     refStrings
     
        stdcall Array.Iterate, String.ProcessObject, [refStrings]
     
        ret
endp