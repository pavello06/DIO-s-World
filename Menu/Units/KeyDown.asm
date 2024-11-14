proc KeyDown.Click\
     key
        
        cmp     DWORD [key], VK_ENTER
        jne     .exit
        
        stdcall Button.GetActiveButton, [currentMenu + Menu.menuObjects.refButtons]
               
        stdcall [eax + Button.refAction], [eax + Button.argument]

  .exit:
        ret
endp