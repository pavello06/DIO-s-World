proc Collide.CollidePlayerBulletAndBlock\
     refBullet

        stdcall Bullet.Activate, [refBullet]
           
        ret
endp

proc Collide.CollidePlayerBulletAndSnail\
     refBullet, refSnail

        stdcall Bullet.Activate, [refBullet]
        stdcall Snail.GetDamage, [refSnail]
  
        ret
endp

proc Collide.CollidePlayerBulletAndEnemy\
     refBullet, refEnemy

        stdcall Bullet.Activate, [refBullet]
        stdcall Enemy.GetDamage, [refEnemy]
  
        ret
endp

proc Collide.CollidePlayerBulletAndUntochableEnemy\
     refBullet, refEnemy
        
        stdcall Bullet.Activate, [refBullet]
        stdcall Enemy.GetDamage, [refEnemy]
 
        ret
endp

proc Collide.CollidePlayerBulletAndUnbeatableEnemy\
     refBullet
        
        stdcall Bullet.Activate, [refBullet] 
 
        ret
endp

proc Collide.CollidePlayerBulletAndSomething uses ebx esi edi,\
     refBullet, refObject, side
     
        mov     ebx, [refBullet]
        mov     esi, [refObject]
        mov     edi, [esi + GameObject.collide]
             
        test    edi, GameObject.BLOCK
        je      @F
        stdcall Collide.CollidePlayerBulletAndBlock, ebx
  @@:
        test    edi, GameObject.ENEMY
        je      @F
        stdcall Collide.CollidePlayerBulletAndEnemy, ebx, esi
  @@:
        test    edi, GameObject.SNAIL
        je      @F
        stdcall Collide.CollidePlayerBulletAndSnail, ebx, esi
  @@:
        test    edi, GameObject.UNTOCHABLE_ENEMY
        je      @F
        stdcall Collide.CollidePlayerBulletAndUntochableEnemy, ebx, esi
  @@:
        test    edi, GameObject.UNBEATABLE_ENEMY
        je      .exit
        stdcall Collide.CollidePlayerBulletAndUnbeatableEnemy, ebx
  
  .exit:   
        ret     
endp