struct Array
  length   dd ?
  element  dd ?
ends

proc Array.Iterate uses ebx esi,\
     refAction, refArray
     
        mov     ebx, [refAction]
        mov     esi, [refArray] 
        
        mov     ecx, [esi + Array.length]
        cmp     ecx, 0
        je      .exit
        
        add     esi, Array.length + sizeof.Array.length
  
  .loop:
        push    ecx     
        
        stdcall ebx, [esi]
                                
        add     esi, sizeof.Array.element
        pop     ecx                                   
        loop    .loop        

  .exit:
        ret
endp