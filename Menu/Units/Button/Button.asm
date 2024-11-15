struct Button
  menuObjectWithDrawing MenuObjectWithDrawing
  isActive              dd ? 
  refAction             dd ?
  argument              dd ?
ends

proc Button.GetActiveButtonInArray\                     
     refButtons

        mov     eax, [refButtons]
                                                           
        mov     ecx, [eax + Array.length]
        add     eax, sizeof.Array.length
        
  .loop:        
        mov     edx, [eax]
        
        cmp     DWORD [edx + Button.isActive], TRUE
        je      .exit
       
        add     eax, sizeof.Array.elements
        loop    .loop                                            
        
  .exit:
        ret
endp

proc Button.Game\
     refScreen

        stdcall WindowProcFunctions.ChangeToGame
        
        mov     eax, [refScreen]
        mov     [currentLevel], eax

        ret
endp

proc Button.Menu\
     refScreen

        stdcall WindowProcFunctions.ChangeToMenu
        
        mov     eax, [refScreen]
        mov     [currentMenu], eax

        ret
endp