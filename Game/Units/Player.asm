struct Player
  entity                  Entity
  canJump                 dd ?
  refBullets             dd ?
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
              TRUE, 0, 0, TRUE>,\
              FALSE, bullets, TRUE, FALSE, FALSE, -1, 5000, -1, 2000
              
proc Player.ChangeAnimation\
     refPlayer
     
        mov     eax, [refPlayer]
        
        cmp     DWORD [eax + GameObject.collide], GameObject.DEAD_PLAYER
        je      .exit
        
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

proc Player.CanShoot\
     refPlayer
     
        mov     eax, [refPlayer]
        
        stdcall Bullet.GetActiveBullet, [eax + Player.refBullets]
        cmp     eax, -1
        je      .canNotShoot                  
  
  .canShoot:
        mov     eax, TRUE
        jmp     .exit
  
  .canNotShoot:
        mov     eax, FALSE
  
  .exit:   
        ret     
endp

proc Player.Shoot uses ebx esi,\
     refPlayer
     
        mov     ebx, [refPlayer]
        mov     eax, [ebx + Player.refBullets]
        
        stdcall Bullet.GetActiveBullet, eax
        
        mov     esi, eax        
        
        mov     eax, [esi + GameObjectWithDrawing.drawing.directionX]
        mul     DWORD [esi + Entity.speedX]        
        mul     DWORD [ebx + GameObjectWithDrawing.drawing.directionX]  
        mov     [esi + Entity.speedX], eax
        
        mov     eax, [ebx + GameObjectWithDrawing.drawing.directionX]
        mov     [esi + GameObjectWithDrawing.drawing.directionX], eax        
        
        stdcall Bullet.Deactivate, esi, [ebx + Object.x], [ebx + Object.y]
  
  .exit:   
        ret     
endp
              
proc Player.GetDamage\
     refPlayer
     
        invoke  GetTickCount
     
        mov     ecx, [refPlayer]
     
        cmp     DWORD [ecx + Player.hasWorld], TRUE
        jne     .hasNotWorld
        
        mov     DWORD [ecx + Player.hasWorld], FALSE        
        mov     DWORD [ecx + Player.invulnerabilityTimer], eax
        jmp     .exit
  
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