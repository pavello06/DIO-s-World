struct Color
  red   db ?
  green db ?
  blue  db ?
ends

proc Color.Change\
     red, green, blue
        
        stdcall Normalize.NormalizeColor, [blue]
        push    eax
        
        stdcall Normalize.NormalizeColor, [green]
        push    eax
        
        stdcall Normalize.NormalizeColor, [red]
        push    eax
        
        invoke  glColor3f
  
        ret 
endp