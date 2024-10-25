struct Object
  type   dd ?
  x      dd ?
  y      dd ?
  width  dd ?
  height dd ?
ends

Object.GENERAL = 0
Object.MENU    = 1
Object.GAME    = 2

proc Object.Delete\
     refObject

        mov     eax, [refObject]
        
        mov     DWORD [eax + Object.x], -1000
        mov     DWORD [eax + Object.y], -1000

        ret
endp