struct Teleport
  gameObject GameObject
  x          dd ?
  y          dd ?
ends

proc Teleport.TeleportObject
     refObject, refTeleport
     
        mov     eax, [refObject]
        mov     ecx, [refTeleport]
        
        mov     edx, [ecx + Teleport.x]
        mov     [eax + Object.x], edx
        mov     edx, [ecx + Teleport.y]
        mov     [eax + Object.y], edx
     
        ret     
endp