struct Player
  entity                  Entity
  canJump                 dd ?
  refBullets              dd ?
  hasHeart                dd ?
  hasArrow                dd ?
  worldTimer              dd ?
  maxWorldTimer           dd ?
  invulnerabilityTimer    dd ?
  maxInvulnerabilityTimer dd ?    
ends

Player.SPEED_X_AFTER_MOVE_KEY = 9
Player.SPEED_Y_AFTER_MOVE_KEY = 29

Player.SPEED_Y_AFTER_COLLIDING_WITH_ENEMY = 20

Player.BULLET_SPEED_X_AFTER_SHOOT_KEY = 14
Player.BULLET_SPEED_Y_AFTER_SHOOT_KEY = 0

player Player <<<<<Object.GAME, 700 * Drawing.NORMAL, 100 * Drawing.NORMAL, STANDING_PLAYER_WIDTH * Drawing.NORMAL, STANDING_PLAYER_HEIGHT * Drawing.NORMAL>,\ 
              GameObject.PLAYER>,\
              <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, standingPlayerTexture>>,\
              <FALSE, 0, 200, 0, standingPlayerFrames>>,\
              TRUE, 0, 0, TRUE>,\
              FALSE, 0, FALSE, FALSE, -1, 5000, -1, 2000
              
proc Player.ChangeAnimation
        
        cmp     DWORD [player + GameObject.collide], GameObject.DEAD_PLAYER
        je      .exit
        
        cmp     DWORD [player + Entity.speedY], 0
        jle     .notUpJumpingPlayer
        
  .upJumpingPlayer:
        mov     DWORD [player + GameObjectWithAnimation.animation.maxTimer], 100
        mov     DWORD [player + GameObjectWithAnimation.animation.refFrames], upJumpingPlayerFrames
        jmp     .exit
  
  .notUpJumpingPlayer:
        cmp     DWORD [player + Entity.speedY], 0
        je     .notDownJumpingPlayer
        
  .downJumpingPlayer:
        mov     DWORD [player + GameObjectWithAnimation.animation.maxTimer], 100
        mov     DWORD [player + GameObjectWithAnimation.animation.refFrames], downJumpingPlayerFrames
        jmp     .exit
  
  .notDownJumpingPlayer:
        cmp     DWORD [player + Entity.speedX], 0
        je      .notRunningPlauer
        
  .runningPlayer:
        mov     DWORD [player + GameObjectWithAnimation.animation.maxTimer], 100
        mov     DWORD [player + GameObjectWithAnimation.animation.refFrames], runningPlayerFrames
        jmp     .exit      
        
  .notRunningPlauer:      
        
  .standingPlayer:
        mov     DWORD [player + GameObjectWithAnimation.animation.maxTimer], 250
        mov     DWORD [player + GameObjectWithAnimation.animation.refFrames], standingPlayerFrames

  .exit:
        ret     
endp

proc Player.CanShoot
        
        stdcall Bullet.GetActiveBullet, [player + Player.refBullets]
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

proc Player.Shoot 
     
        stdcall Bullet.GetActiveBullet, [player + Player.refBullets]
        
        mov     ecx, eax        
        
        mov     eax, [ecx + GameObjectWithDrawing.drawing.directionX]
        mul     DWORD [ecx + Entity.speedX]        
        mul     DWORD [player + GameObjectWithDrawing.drawing.directionX]  
        mov     [ecx + Entity.speedX], eax
        
        mov     eax, [player + GameObjectWithDrawing.drawing.directionX]
        mov     [ecx + GameObjectWithDrawing.drawing.directionX], eax        
        
        stdcall Bullet.Deactivate, ecx, [player + Object.x], [player + Object.y]
  
  .exit:   
        ret     
endp
              
proc Player.GetDamage 
        
        cmp     DWORD [player + Player.invulnerabilityTimer], -1
        jne     .exit
     
        cmp     DWORD [player + Player.worldTimer], TRUE
        jne     .hasNotWorld
              
        stdcall Timer.Stop, player + Player.worldTimer       
        stdcall Timer.Start, player + Player.invulnerabilityTimer 
        jmp     .exit
  
  .hasNotWorld:      
        cmp     DWORD [player + Player.hasArrow], TRUE
        jne     .hasNotArrow
        
        mov     DWORD [player + Player.hasArrow], FALSE        
        stdcall Timer.Start, player + Player.invulnerabilityTimer
        jmp     .exit
        
  .hasNotArrow:      
        cmp     DWORD [player + Player.hasHeart], TRUE
        jne     .hasNotHeart
        
        mov     DWORD [player + Player.hasHeart], FALSE
        stdcall Timer.Start, player + Player.invulnerabilityTimer
        jmp     .exit
        
  .hasNotHeart: 
        stdcall Player.Die
        
  .exit:   
        ret
endp

proc Player.Die
     
        mov     DWORD [player + GameObject.collide], GameObject.DEAD_PLAYER
        mov     DWORD [player + GameObjectWithAnimation.animation.refFrames], dyingPlayerFrames
          
        ret
endp

proc Player.TimerObject

        stdcall Player.ChangeAnimation
     
        stdcall Timer.IsTimeUp, player + Player.invulnerabilityTimer, [player + Player.invulnerabilityTimer + sizeof.Player.invulnerabilityTimer]
        cmp     eax, FALSE
        je      .invulnerabilityTimeIsNotUp
        
        stdcall Timer.Stop, player + Player.invulnerabilityTimer 
  
  .invulnerabilityTimeIsNotUp:
        stdcall Timer.IsTimeUp, player + Player.worldTimer, [player + Player.worldTimer + sizeof.Player.worldTimer]
        cmp     eax, FALSE
        je      .worldTimeIsNotUp

        stdcall Timer.Stop, player + Player.worldTimer
  
  .worldTimeIsNotUp:      
  .exit:   
        ret
endp