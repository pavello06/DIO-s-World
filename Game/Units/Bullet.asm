struct Bullet
  entity   Entity
  isActive dd ?
ends

proc Bullet.Activate\
     refBullet
     
        mov     eax, [refBullet]
        
        ;анимацию
        
        mov     DWORD [eax + Entity.speedX], 0
        mov     DWORD [eax + Entity.speedY], 0
        mov     DWORD [eax + Bullet.isActive], TRUE
     
        ret
endp