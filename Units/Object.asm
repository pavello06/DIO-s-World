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

Object.TRASH_X = -1000
Object.TRASH_Y = -1000

proc Object.Delete\
     refObject

        mov     eax, [refObject]
        
        mov     DWORD [eax + Object.x], Object.TRASH_X
        mov     DWORD [eax + Object.y], Object.TRASH_Y

        ret
endp