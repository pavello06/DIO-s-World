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
  refAnimations           dd ?    
ends

Player.START_X = 30 * Drawing.NORMAL
Player.START_Y = 100 * Drawing.NORMAL

Player.STANDING     = 0 * sizeof.Animation
Player.RUNNING      = 1 * sizeof.Animation
Player.UP_JUMPING   = 2 * sizeof.Animation
Player.DOWN_JUMPING = 3 * sizeof.Animation
Player.DYING        = 4 * sizeof.Animation

Player.SPEED_X_AFTER_MOVE_KEY = 11
Player.SPEED_Y_AFTER_MOVE_KEY = 32

Player.SPEED_Y_AFTER_COLLIDING_WITH_ENEMY = 28

Player.SPEED_X_AFTER_DEATH = 0
Player.SPEED_Y_AFTER_DEATH = 20

Player.BULLET_SPEED_X_AFTER_SHOOT_KEY = 14
Player.BULLET_SPEED_Y_AFTER_SHOOT_KEY = 0

playerBullet1 Bullet\
<<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, PLAYER_BULLET_WIDTH * Drawing.NORMAL, PLAYER_BULLET_HEIGHT * Drawing.NORMAL>,\ 
GameObject.PLAYER_BULLET>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, playerBulletTexture>>,\
<FALSE, 0, 120, 0, playerBulletFrames>>,\
FALSE, 14, 0, FALSE>,\
TRUE, playerBulletAnimations

playerBullet2 Bullet\
<<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, PLAYER_BULLET_WIDTH * Drawing.NORMAL, PLAYER_BULLET_HEIGHT * Drawing.NORMAL>,\ 
GameObject.PLAYER_BULLET>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, playerBulletTexture>>,\
<FALSE, 0, 120, 0, playerBulletFrames>>,\
FALSE, 14, 0, FALSE>,\
TRUE, playerBulletAnimations

playerBullet3 Bullet\
<<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, PLAYER_BULLET_WIDTH * Drawing.NORMAL, PLAYER_BULLET_HEIGHT * Drawing.NORMAL>,\ 
GameObject.PLAYER_BULLET>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, playerBulletTexture>>,\
<FALSE, 0, 120, 0, playerBulletFrames>>,\
FALSE, 14, 0, FALSE>,\
TRUE, playerBulletAnimations

playerBullets dd 3, playerBullet1, playerBullet2, playerBullet3

player Player\
<<<<<Object.GAME, 30 * Drawing.NORMAL, 100 * Drawing.NORMAL, STANDING_PLAYER_WIDTH * Drawing.NORMAL, STANDING_PLAYER_HEIGHT * Drawing.NORMAL>,\ 
GameObject.PLAYER>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, standingPlayerTexture>>,\
<FALSE, 0, 200, 0, standingPlayerFrames>>,\
TRUE, 0, 0, TRUE>,\
FALSE, playerBullets, FALSE, FALSE, -1, 9000, -1, 1500, playerAnimations

onlyPlayer dd 1, player

proc Player.Reset
  
        mov     DWORD [player + Object.x], Player.START_X 
        mov     DWORD [player + Object.y], Player.START_Y
        
        mov     DWORD [player + GameObject.collide], GameObject.PLAYER
        
        mov     DWORD [player + GameObjectWithDrawing.drawing.directionX], Drawing.RIGHT
        mov     DWORD [player + GameObjectWithDrawing.drawing.directionY], Drawing.UP
        mov     DWORD [player + GameObjectWithDrawing.drawing.refTexture], standingPlayerTexture
        
        mov     DWORD [player + GameObjectWithAnimation.animation.isFinite], FALSE
        stdcall Timer.Start, player + GameObjectWithAnimation.animation.timer
        mov     DWORD [player + GameObjectWithAnimation.animation.maxTimer], 200
        mov     DWORD [player + GameObjectWithAnimation.animation.currentFrame], 0
        mov     DWORD [player + GameObjectWithAnimation.animation.refFrames], standingPlayerFrames
        
        mov     DWORD [player + Entity.canMove], TRUE
        mov     DWORD [player + Entity.speedX], 0
        mov     DWORD [player + Entity.speedY], 0
        mov     DWORD [player + Entity.canGravitate], TRUE
        
        mov     DWORD [player.canJump], FALSE
        mov     DWORD [player.hasHeart], FALSE
        mov     DWORD [player.hasArrow], FALSE
        stdcall Timer.Stop, player.worldTimer
        stdcall Timer.Stop, player.invulnerabilityTimer
        
        mov     [playerBullet1 + Object.x], Object.TRASH_X
        mov     [playerBullet2 + Object.x], Object.TRASH_X
        mov     [playerBullet3 + Object.x], Object.TRASH_X
        mov     [playerBullet1 + Object.y], Object.TRASH_Y
        mov     [playerBullet2 + Object.y], Object.TRASH_Y
        mov     [playerBullet3 + Object.y], Object.TRASH_Y
        mov     [playerBullet1 + Entity.canMove], FALSE
        mov     [playerBullet2 + Entity.canMove], FALSE
        mov     [playerBullet3 + Entity.canMove], FALSE
        mov     [playerBullet1 + Bullet.isActive], FALSE
        mov     [playerBullet2 + Bullet.isActive], FALSE
        mov     [playerBullet3 + Bullet.isActive], FALSE
  
        ret
endp
              
proc Player.ChangeAnimation uses ebx
        
        mov     ebx, [player + GameObjectWithAnimation.animation.refFrames] 
        
        mov     eax, [player.refAnimations]
        add     eax, 4
        
        cmp     DWORD [player + GameObject.collide], GameObject.DEAD_PLAYER
        jne     .notDyingPlayer
  
  .dyingPlayer:
        add     eax, Player.DYING
        jmp     .animation
        
  .notDyingPlayer:        
        cmp     DWORD [player + Entity.speedY], 0
        jle     .notUpJumpingPlayer
        
  .upJumpingPlayer:
        add     eax, Player.UP_JUMPING
        jmp     .animation
  
  .notUpJumpingPlayer:
        cmp     DWORD [player + Entity.speedY], 0
        je     .notDownJumpingPlayer
        
  .downJumpingPlayer:
        add     eax, Player.DOWN_JUMPING
        jmp     .animation
  
  .notDownJumpingPlayer:
        cmp     DWORD [player + Entity.speedX], 0
        je      .notRunningPlayer
        
  .runningPlayer:
        add     eax, Player.RUNNING
        jmp     .animation      
        
  .notRunningPlayer:      
        
  .standingPlayer:
        add     eax, Player.STANDING
  
  .animation:
        stdcall Animation.Copy, player + GameObjectWithAnimation.animation, eax
        
        cmp     ebx, [player + GameObjectWithAnimation.animation.refFrames]
        je      .exit
        
        stdcall Animation.Start, player + GameObjectWithAnimation.animation
  
  .exit:
        ret     
endp

proc Player.CanShoot
        
        cmp     DWORD [player.hasArrow], FALSE
        je      .canNotShoot
        
        stdcall Bullet.GetActiveBullet, [player.refBullets]
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
     
        stdcall Music.Play, playerBulletMusic
     
        stdcall Bullet.GetActiveBullet, [player.refBullets]
        
        mov     ecx, eax        
        
        mov     eax, [ecx + GameObjectWithDrawing.drawing.directionX]
        mul     DWORD [ecx + Entity.speedX]        
        mul     DWORD [player + GameObjectWithDrawing.drawing.directionX]  
        mov     [ecx + Entity.speedX], eax
        
        mov     eax, [player + GameObjectWithDrawing.drawing.directionX]
        mov     [ecx + GameObjectWithDrawing.drawing.directionX], eax        
        
        mov     eax, [player + Object.height]
        sub     eax, [playerBullet1 + Object.height]
        shr     eax, 1
        add     eax, [player + Object.y] 
        stdcall Bullet.Deactivate, ecx, [player + Object.x], eax
  
  .exit:   
        ret     
endp
              
proc Player.GetDamage 
        
        stdcall Timer.IsTimeUp, player.invulnerabilityTimer, [player.maxInvulnerabilityTimer]
        cmp     eax, FALSE
        jne     .hasNotInvulnerability

        mov     DWORD [player.refAnimations], invulnerablePlayerAnimations
        jmp     .exit        
        
  .hasNotInvulnerability:     
        stdcall Timer.IsTimeUp, player.worldTimer, [player.maxWorldTimer]
        cmp     eax, FALSE
        jne     .hasNotWorld
              
        stdcall Timer.Stop, player.worldTimer       
        stdcall Timer.Start, player.invulnerabilityTimer 
        jmp     .exit
  
  .hasNotWorld:      
        cmp     DWORD [player + Player.hasArrow], TRUE
        jne     .hasNotArrow
        
        mov     DWORD [player + Player.hasArrow], FALSE        
        stdcall Timer.Start, player.invulnerabilityTimer
        jmp     .exit
        
  .hasNotArrow:      
        cmp     DWORD [player + Player.hasHeart], TRUE
        jne     .hasNotHeart
        
        mov     DWORD [player + Player.hasHeart], FALSE
        stdcall Timer.Start, player.invulnerabilityTimer
        jmp     .exit
        
  .hasNotHeart: 
        stdcall Player.Die
        
  .exit:   
        ret
endp

proc Player.Die

        stdcall Music.Play, dyingPlayerMusic
     
        mov     DWORD [player + GameObject.collide], GameObject.DEAD_PLAYER
        mov     DWORD [player + Entity.speedX], Player.SPEED_X_AFTER_DEATH
        mov     DWORD [player + Entity.speedY], Player.SPEED_Y_AFTER_DEATH
          
        ret
endp

proc Player.TimerObject

        stdcall Player.ChangeAnimation
     
        stdcall Timer.IsTimeUp, player.invulnerabilityTimer, [player.invulnerabilityTimer + sizeof.Player.invulnerabilityTimer]
        cmp     eax, FALSE
        je      .invulnerabilityTimeIsNotUp
        
        stdcall Timer.Stop, player.invulnerabilityTimer
        mov     DWORD [player.refAnimations], playerAnimations 
  
  .invulnerabilityTimeIsNotUp:
        stdcall Timer.IsTimeUp, player.worldTimer, [player.worldTimer + sizeof.Player.worldTimer]
        cmp     eax, FALSE
        je      .worldTimeIsNotUp

        stdcall Timer.Stop, player.worldTimer
  
  .worldTimeIsNotUp:      
  .exit:   
        ret
endp