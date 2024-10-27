struct Bullet
  entity        Entity
  isActive      dd ?
  refAnimations dd ?
ends

proc Bullet.ActivateOrDeactivate
     refBullet, x, y, speedX, speedY, isActive
     
        mov     ecx, [refBullet]
        
        mov     edx, [x]
        mov     DWORD [ecx + Object.x], edx
        mov     edx, [y]
        mov     DWORD [ecx + Object.y], edx
        mov     edx, [speedX]
        mov     DWORD [ecx + Entity.speedX], edx
        mov     edx, [speedY]
        mov     DWORD [ecx + Entity.speedY], edx
        mov     edx, [isActive]
        mov     DWORD [ecx + Bullet.isActive], edx
        
        mov      edx, 1
        
        cmp     [isActive], FALSE
        je      .notActive
  
  .active:
        mov      edx, 0
        
  .notActive:
        mov     eax, sizeof.Animation
        mul     edx            
        mov     edx, [ecx + Bullet.refAnimations]
        add     edx, eax
        add     ecx, sizeof.GameObjectWithAnimation
        stdcall Animation.Copy, ecx, edx       
        
        mov     eax, [refBullet]
        
        add     eax, sizeof.GameObjectWithDrawing 
        stdcall Animation.Start, eax
     
        ret
endp        

proc Bullet.Activate\
     refBullet
     
        mov     eax, [refBullet]
     
        stdcall Bullet.ActivateOrDeactivate, eax, [eax + Object.x], [eax + Object.y], 0, 0, TRUE
     
        ret
endp

proc Bullet.Deactivate\
     refBullet, x, y, speedX, speedY
     
        stdcall Bullet.ActivateOrDeactivate, [refBullet], [x], [y], [speedX], [speedY], FALSE
     
        ret
endp