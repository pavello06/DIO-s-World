proc Collide.CollideEnemyBulletAndActivate\
     refBullet

        stdcall Bullet.Activate, [refBullet]
           
        ret
endp

proc Collide.CollideEnemyBulletAndSomething uses ebx esi edi,\
     refBullet, refObject, side
     
        mov     ebx, [refBullet]
        mov     esi, [refObject]
        mov     edi, [esi + GameObject.collide]
             
        test    edi, GameObject.ACTIVATE
        je      .exit
        stdcall Collide.CollideEnemyBulletAndActivate, ebx
  
  .exit:   
        ret     
endp