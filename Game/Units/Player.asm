struct Player
  entity                  Entity
  canJump                 dd ?
  refBullets              dd ?
  hasHeart                dd ?
  hasArrow                dd ?
  hasWorld                dd ?
  worldTimer              dd ?
  maxWorldTimer           dd ?
  invulnerabilityTimer    dd ?
  maxInvulnerabilityTimer dd ?    
ends

Player.PLAYER_SPEED_BOOST_X = 12
Player.PLAYER_SPEED_BOOST_Y = 33

Player.BULLET_SPEED_BOOST_X = 14
Player.BULLET_SPEED_BOOST_Y = 0

player Player <<<<<Object.GAME, 30, 100, 1, 1>,\ 
              GameObject.PLAYER>,\
              <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, standingPlayerTexture>>,\
              <FALSE, 0, 200, 0, standingPlayerFrames>>,\
              0, 0, TRUE>,\
              FALSE, 3, 0, FALSE, FALSE, FALSE, -1, 5000, -1, 2000
              
proc Player.ChangeAnimation\
     refPlayer
     
        mov     eax, [refPlayer]
        
        cmp     DWORD [eax + Entity.speedY], 0
        jle     .notUpJumpingPlayer
        
  .upJumpingPlayer:
        mov     DWORD [eax + GameObjectWithAnimation.animation.maxTimer], 100
        mov     DWORD [eax + GameObjectWithAnimation.animation.refFrames], upJumpingPlayerFrames
        jmp     .exit
  
  .notUpJumpingPlayer:
        cmp     DWORD [eax + Entity.speedY], 0
        je     .notDownJumpingPlayer
        
  .downJumpingPlayer:
        mov     DWORD [eax + GameObjectWithAnimation.animation.maxTimer], 100
        mov     DWORD [eax + GameObjectWithAnimation.animation.refFrames], downJumpingPlayerFrames
        jmp     .exit
  
  .notDownJumpingPlayer:
        cmp     DWORD [eax + Entity.speedX], 0
        je      .notRunningPlauer
        
  .runningPlayer:
        mov     DWORD [eax + GameObjectWithAnimation.animation.maxTimer], 100
        mov     DWORD [eax + GameObjectWithAnimation.animation.refFrames], runningPlayerFrames
        jmp     .exit      
        
  .notRunningPlauer:      
        
  .standingPlayer:
        mov     DWORD [eax + GameObjectWithAnimation.animation.maxTimer], 250
        mov     DWORD [eax + GameObjectWithAnimation.animation.refFrames], standingPlayerFrames

  .exit:
        ret     
endp

proc Player.AreBulletsActive\
     refPlayer
     
        mov     eax, [refPlayer]
        mov     eax, [eax + Player.refsBullets]
        
        mov     ecx, [eax + 0]
        add     eax, 4
        
  .loop:        
        mov     edx, [eax]
        
        cmp     DWORD [edx + Bullet.isActive], TRUE
        jne     .endLoop
        
        mov     eax, TRUE
        jmp     .exit 
  
  .endLoop:      
        add     eax, 4
        loop    .loop
        
        mov     eax, FALSE
        
  .exit:   
        ret 
endp

proc Player.CanShoot uses ebx,\
     refPlayer
     
        mov     ebx, [refPlayer]
        
        stdcall Player.AreBulletsActive, ebx
        cmp     eax, FALSE
        je      .canNotShoot                  
  
  .canShoot:
        mov     eax, TRUE
        jmp     .exit
  
  .canNotShoot:
        mov     eax, FALSE
  
  .exit:   
        ret     
endp

proc Player.Shoot uses ebx,\
     refPlayer
     
        mov     eax, [refPlayer]
        mov     eax, [eax + Player.refsBullets]
        
        mov     ecx, [eax + 0]
        add     eax, 4
        
  .loop:        
        mov     edx, [eax]
        
        cmp     DWORD [edx + Bullet.isActive], TRUE
        jne     .endLoop
        
        jmp     .findActiveBullet
  
  .endLoop:      
        add     eax, 4
        loop    .loop
        
  .findActiveBullet:
        mov     eax, [refPlayer]
        
        stdcall Bullet.Deactivate, edx, [eax + Object.x], [eax + Object.y], Player.BULLET_SPEED_BOOST_X, Player.BULLET_SPEED_BOOST_Y
  
  .exit:   
        ret     
endp
              
proc Player.GetDamage\
     refPlayer
     
        invoke  GetTickCount
     
        mov     ecx, [refPlayer]
     
        cmp     DWORD [ecx + Player.hasWorld], TRUE
        je      .exit
  
  .hasNotWorld:      
        cmp     DWORD [ecx + Player.hasArrow], TRUE
        jne     .hasNotArrow
        
        mov     DWORD [ecx + Player.hasArrow], FALSE        
        mov     DWORD [ecx + Player.invulnerabilityTimer], eax
        jmp     .exit
        
  .hasNotArrow:      
        cmp     DWORD [ecx + Player.hasHeart], TRUE
        jne     .hasNotHeart
        
        mov     DWORD [ecx + Player.hasHeart], FALSE
        mov     DWORD [ecx + Player.invulnerabilityTimer], eax
        jmp     .exit
        
  .hasNotHeart: 
        stdcall Player.Die, ecx
        
  .exit:   
        ret
endp

proc Player.Die\
     refPlayer
     
        mov     eax, [refPlayer]
     
        mov     DWORD [eax + GameObject.collide], GameObject.DEAD_PLAYER
        mov     DWORD [eax + GameObjectWithAnimation.animation.refFrames], dyingPlayerFrames
          
        ret
endp