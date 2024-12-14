proc Collide.CollidePlayerBulletAndBlock\
     refBullet

        mov     eax, [refBullet]
        xor     [eax + GameObject.collide], GameObject.PLAYER_BULLET
        stdcall Bullet.Activate, eax
           
        ret
endp

proc Collide.CollidePlayerBulletAndSnail\
     refBullet, refSnail

        mov     eax, [refBullet]
        xor     [eax + GameObject.collide], GameObject.PLAYER_BULLET
        stdcall Bullet.Activate, [refBullet]
        stdcall Snail.GetDamage, [refSnail]
  
        ret
endp

proc Collide.CollidePlayerBulletAndEnemy\
     refBullet, refEnemy

        mov     eax, [refBullet]
        xor     [eax + GameObject.collide], GameObject.PLAYER_BULLET
        stdcall Bullet.Activate, [refBullet]
        stdcall Enemy.GetDamage, [refEnemy]
  
        ret
endp

proc Collide.CollidePlayerBulletAndUntochableEnemy\
     refBullet, refEnemy
        
        mov     eax, [refBullet]
        xor     [eax + GameObject.collide], GameObject.PLAYER_BULLET
        stdcall Bullet.Activate, [refBullet]
        stdcall Enemy.GetDamage, [refEnemy]
 
        ret
endp

proc Collide.CollidePlayerBulletAndUnbeatableEnemy\
     refBullet
        
        mov     eax, [refBullet]
        xor     [eax + GameObject.collide], GameObject.PLAYER_BULLET
        stdcall Bullet.Activate, [refBullet] 
 
        ret
endp

proc Collide.CollidePlayerBulletAndBoss\
     refBullet, refBoss
        
        mov     eax, [refBullet]
        xor     [eax + GameObject.collide], GameObject.PLAYER_BULLET
        stdcall Bullet.Activate, [refBullet] 
        stdcall Boss.GetDamage, [refBoss] 
 
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
        je      @F
        stdcall Collide.CollidePlayerBulletAndUnbeatableEnemy, ebx        
  @@:
        test    edi, GameObject.BOSS
        je      .exit
        stdcall Collide.CollidePlayerBulletAndBoss, ebx, esi
  
  .exit:   
        ret     
endp