struct Array
  length   dd ?
  elements dd ?
ends

proc Array.Iterate uses ebx,\
     refAction, refArray
     
        mov     ebx, [refArray] 
        
        mov     ecx, [ebx + Array.length]
        add     ebx, sizeof.Array.length
  
  .loop:
        push    ecx     
        
        stdcall [refAction], [ebx]
                                
        add     ebx, sizeof.Array.elements
        pop     ecx                                   
        loop    .loop        

        ret
endp