struct Array
  length   dd ?
  element  dd ?
ends

proc Array.Iterate uses ebx,\
     refAction, refArray
     
        mov     ebx, [refArray] 
        
        mov     ecx, [ebx + Array.length]
        cmp     ecx, 0
        je      .exit
        
        lea     ebx, [ebx + Array.element]
  
  .loop:
        push    ecx     
        
        stdcall [refAction], [ebx]
                                
        add     ebx, sizeof.Array.element
        pop     ecx                                   
        loop    .loop        

  .exit:
        ret
endp