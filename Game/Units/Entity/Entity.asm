struct Entity
  gameObjectWithAnimation GameObjectWithAnimation
  canMove                 dd ?
  speedX                  dd ?
  speedY                  dd ?
  canGravitate            dd ?
ends

proc Entity.Delete uses ebx,\
     refEntity
     
        mov     ebx, [refEntity]
     
        stdcall Object.Delete, ebx
                
        mov     DWORD [ebx + Entity.canMove], FALSE
     
        ret
endp