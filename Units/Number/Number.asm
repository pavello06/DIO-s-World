struct Number
  object    Object
  number    dd ?
  string    dd NUMBER_MAX_LENGTH dup ?
  refMemory dd ?
ends

NUMBER_MAX_LENGTH = 5

proc Number.NumberToString uses ebx esi,\
     number, refString

        mov     eax, [number]
        mov     ebx, [refString]
        add     ebx, (NUMBER_MAX_LENGTH - 1) * 4
        
        mov     ecx, NUMBER_MAX_LENGTH
        
  .loop:
        xor     edx, edx
        mov     esi, 10
        div     esi
        
        add     edx, '0'
        mov     [ebx], edx
    
        sub     ebx, 4
        loop    .loop


        ret
endp

proc Number.TimerObject uses ebx esi edi,\
     refNumber
     
        mov     ebx, [refNumber]

        lea     eax, [ebx + Number.string]
        stdcall Number.NumberToString, [ebx + Number.number], eax
        
        lea     esi, [ebx + Number.string] 
        mov     edi, [ebx + Number.refMemory]
        
        mov     eax, [ebx + Object.x]
        mov     edx, [ebx + Object.y]
        
        mov     ecx, NUMBER_MAX_LENGTH
        
  .loop:  
        mov     ebx, [esi]
        sub     ebx, '0'
        imul    ebx, ZERO_SIZE
        add     ebx, zeroTexture
        
        mov     [edi + Object.x], eax
        mov     [edi + Object.y], edx
        mov     [edi + MenuObjectWithDrawing.drawing.refTexture], ebx
  
        mov     ebx, ZERO_WIDTH
        imul    ebx, [edi + MenuObjectWithDrawing.drawing.pixelSize]
        add     ebx, [edi + MenuObjectWithDrawing.drawing.pixelSize]
        add     eax, ebx
        add     esi, 4
        add     edi, sizeof.MenuObjectWithDrawing
        loop .loop

  .exit:
        ret
endp

proc Number.TimerObjects\
     refNumbers
     
        stdcall Array.Iterate, Number.TimerObject, [refNumbers]
     
        ret
endp