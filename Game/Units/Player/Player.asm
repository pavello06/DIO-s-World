struct Player
  entity                  Entity
  canJump                 dd ?
  refBullets             dd ?
  hasHeart                dd ?
  hasArrow                dd ?
  worldTimer              dd ?
  maxWorldTimer           dd ?
  invulnerabilityTimer    dd ?
  maxInvulnerabilityTimer dd ?    
ends

Player.PLAYER_SPEED_BOOST_X = 12
Player.PLAYER_SPEED_BOOST_Y = 33

Player.BULLET_SPEED_BOOST_X = 14
Player.BULLET_SPEED_BOOST_Y = 0

player Player <<<<<Object.GAME, 30, 120, 1, 1>,\ 
              GameObject.PLAYER>,\
              <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, standingPlayerTexture>>,\
              <FALSE, 0, 200, 0, standingPlayerFrames>>,\
              TRUE, 0, 0, TRUE>,\
              FALSE, 0, FALSE, FALSE, -1, 5000, -1, 10000
              
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
              
proc Player.GetDamage uses ebx,\
     refPlayer
     
        mov     ebx, [refPlayer]
        
        cmp     DWORD [ebx + Player.invulnerabilityTimer], -1
        jne     .exit
     
        cmp     DWORD [ebx + Player.worldTimer], TRUE
        jne     .hasNotWorld
        
        mov     eax, ebx
        add     eax, Player.worldTimer        
        stdcall Timer.Stop, eax
        mov     eax, ebx
        add     eax, Player.invulnerabilityTimer        
        stdcall Timer.Start, eax
        jmp     .exit
  
  .hasNotWorld:      
        cmp     DWORD [ebx + Player.hasArrow], TRUE
        jne     .hasNotArrow
        
        mov     DWORD [ebx + Player.hasArrow], FALSE        
        mov     eax, ebx
        add     eax, Player.invulnerabilityTimer        
        stdcall Timer.Start, eax
        jmp     .exit
        
  .hasNotArrow:      
        cmp     DWORD [ebx + Player.hasHeart], TRUE
        jne     .hasNotHeart
        
        mov     DWORD [ebx + Player.hasHeart], FALSE
        mov     eax, ebx
        add     eax, Player.invulnerabilityTimer        
        stdcall Timer.Start, eax
        jmp     .exit
        
  .hasNotHeart: 
        stdcall Player.Die, ebx
        
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

proc BrickWithBreakTimer.TimerObject uses ebx,\
     refBrickWithBreakTimer
     
        mov     ebx, [refBrickWithBreakTimer]
        
        stdcall BrickWithBreakTimer.CanBreak, ebx        
        cmp     eax, FALSE
        je      .exit
        
        stdcall BrickWithBreakTimer.Break, ebx 
     
  .exit: 
        ret
endp
proc Player.TimerObject\
     refPlayer
     
        mov     ebx, [refPlayer]
        
        mov     eax, ebx
        add     eax, Player.invulnerabilityTimer
        stdcall Timer.IsTimeUp, eax, [eax + sizeof.Player.invulnerabilityTimer]
        cmp     eax, FALSE
        je      .invulnerabilityTimeIsNotUp
        
        mov     eax, ebx
        add     eax, Player.invulnerabilityTimer
        stdcall Timer.Stop, eax 
  
  .invulnerabilityTimeIsNotUp:
        mov     eax, ebx
        add     eax, Player.worldTimer
        stdcall Timer.IsTimeUp, eax, [eax + sizeof.Player.worldTimer]
        cmp     eax, FALSE
        je      .exit
        
        mov     eax, ebx
        add     eax, Player.worldTimer
        stdcall Timer.Stop, eax 
        
  .exit:   
        ret
endp