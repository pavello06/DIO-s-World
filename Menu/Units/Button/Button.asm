struct Button
  menuObjectWithDrawing MenuObjectWithDrawing
  isActive              dd ? 
  refAction             dd ?
  argument              dd ?
ends

proc Button.GetActiveButton\                     
     refButtons

        mov     eax, [refButtons]
                                                           
        mov     ecx, [eax + 0]
        add     eax, 4
        
  .loop:        
        mov     edx, [eax]
        
        cmp     DWORD [edx + Button.isActive], TRUE
        je      .activeButton
       
        add     eax, 4
        loop    .loop
       
  .activeButton:      
        mov     eax, edx                                            
        
  .exit:
        ret
endp

proc Button.Game\
     refScreen

        stdcall WindowProcFunctions.ChangeToGame
        
        mov     eax, [refScreen]
        mov     [level], eax

        ret
endp

proc Button.Menu\
     refScreen

        stdcall WindowProcFunctions.ChangeToMenu
        
        mov     eax, [refScreen]
        mov     [menu], eax

        ret
endp