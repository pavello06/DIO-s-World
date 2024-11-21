proc KeyDown.Click\
     key
        
        cmp     DWORD [key], VK_RETURN
        jne     .exit
          
        mov     eax, [currentMenu]
        stdcall Button.GetActiveButtonInArray, [eax + Menu.menuObjects.refButtons]
        
        mov     eax, [eax]       
        stdcall [eax + Button.refAction], [eax + Button.argument]

  .exit:
        ret
endp

proc KeyDown.PreviousAndNext\
     key
     
        mov     eax, [key]
        
        cmp     eax, VK_LEFT
        je      .previous
        cmp     eax, VK_UP
        jne     .notPrevious
        
  .previous:
        mov     eax, [currentMenu]
        stdcall Button.GetActiveButtonInArray, [eax + Menu.menuObjects.refButtons]
        cmp     DWORD [eax - 4], 0
        je      .exit
        
        mov     ecx, [eax]
        mov     DWORD [ecx + Button.isActive], FALSE
        sub     eax, 4
        mov     ecx, [eax]
        mov     DWORD [ecx + Button.isActive], TRUE
        stdcall ActiveButtonElement.ChangeActiveButton, ecx
        jmp     .exit     
  
  .notPrevious:   
        cmp     eax, VK_RIGHT
        je      .next
        cmp     eax, VK_DOWN
        jne     .exit
        
  .next:
        mov     eax, [currentMenu]
        stdcall Button.GetActiveButtonInArray, [eax + Menu.menuObjects.refButtons]
        cmp     DWORD [eax + 4], 0
        je      .exit
        
        mov     ecx, [eax]
        mov     DWORD [ecx + Button.isActive], FALSE
        add     eax, 4
        mov     ecx, [eax]
        cmp     ecx, 0
        je      .exit
        
        mov     DWORD [ecx + Button.isActive], TRUE          
        stdcall ActiveButtonElement.ChangeActiveButton, ecx
        
  .exit:
        ret
endp