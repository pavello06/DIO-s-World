struct Entity
  gameObjectWithAnimation GameObjectWithAnimation
  speedX                  dd ?
  speedY                  dd ?
  canGravitate            dd ?
ends

proc Entity.Delete\
     refEntity
     
        stdcall Object.Delete, [refEntity]
        
        mov     eax, [refEntity]
        
        mov     DWORD [eax + Entity.speedX], 0
        mov     DWORD [eax + Entity.speedY], 0
        mov     DWORD [eax + Entity.canGravitate], FALSE
     
        ret
endp