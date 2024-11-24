struct Luck
  gameObjectWithAnimation GameObjectWithAnimation
  refBonus                dd ?
ends

proc Luck.SpawnBonus\
     refLuck
     
        mov     eax, [refLuck]
        mov     ecx, [eax + Luck.refBonus]
        
        mov     edx, [eax + Object.width]
        sub     edx, [ecx + Object.width]
        shr     edx, 1
        add     edx, [eax + Object.x]
        
        mov     [ecx + Object.x], edx
        
        mov     edx, [eax + Object.y]
        add     edx, [eax + Object.height]
        add     edx, 2 * Drawing.NORMAL
        
        mov     [ecx + Object.y], edx
     
        ret 
endp