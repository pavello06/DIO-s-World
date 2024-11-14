proc KeyDown.Click\
     key
        
        cmp     DWORD [key], VK_RETURN
        jne     .exit
          
        mov     eax, [currentMenu]
        stdcall Button.GetActiveButton, [eax + Menu.menuObjects.refButtons]
               
        stdcall [eax + Button.refAction], [eax + Button.argument]

  .exit:
        ret
endp