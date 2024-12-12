struct Entity
  gameObjectWithAnimation GameObjectWithAnimation
  canMove                 dd ?
  speedX                  dd ?
  speedY                  dd ?
  canGravitate            dd ?
ends

proc Entity.Delete\
     refEntity
     
        mov     eax, [refEntity]
        
        mov     DWORD [eax + Entity.canMove], FALSE
     
        stdcall Object.Delete, eax
     
        ret
endp