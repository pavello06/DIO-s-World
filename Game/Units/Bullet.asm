struct Bullet
  entity   Entity
  isActive dd ?
ends

proc Bullet.ActivateOrDeactivate
     refBullet, refRefsFrames, speedX, speedY , isActive
     
        mov     eax, [refBullet]
        mov     ecx, [refRefsFrames]
        
        mov     DWORD [eax + GameObjectWithAnimation.animation.isFinite], TRUE
        mov     DWORD [eax + GameObjectWithAnimation.animation.currentFrame], 0
        mov     DWORD [eax + GameObjectWithAnimation.animation.refsFrames], ecx
        
        mov     ecx, [speedX]
        mov     DWORD [eax + Entity.speedX], ecx
        mov     ecx, [speedY]
        mov     DWORD [eax + Entity.speedY], ecx
        mov     ecx, [isActive]
        mov     DWORD [eax + Bullet.isActive], ecx
        
        add     eax, sizeof.GameObjectWithDrawing 
        stdcall Animation.Start, eax
     
        ret
endp        

proc Bullet.Activate\
     refBullet, refRefsFrames
     
        stdcall Bullet.ActivateOrDeactivate, [refBullet], [refRefsFrames], 0, 0, TRUE
     
        ret
endp

proc Bullet.Deactivate\
     refBullet, refRefsFrames, speedX, speedY
     
        stdcall Bullet.ActivateOrDeactivate, [refBullet], [refRefsFrames], [speedX], [speedY], FALSE
     
        ret
endp