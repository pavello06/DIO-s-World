struct Teleport
  gameObject GameObject
  x          dd ?
  y          dd ?
ends

proc Teleport.TeleportObject\
     refTeleport, refObject
     
        mov     eax, [refTeleport]
        mov     ecx, [refObject]
        
        mov     edx, [eax + Teleport.x]
        mov     [ecx + Object.x], edx
        mov     edx, [eax + Teleport.y]
        mov     [ecx + Object.y], edx
     
        ret     
endp