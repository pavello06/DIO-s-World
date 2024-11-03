struct Player
  entity                  Entity
  canJump                 dd ?
  totalBullets            dd ?
  refBullets              dd ?
  hasHeart                dd ?
  hasArrow                dd ?
  hasWorld                dd ?
  worldTimer              dd ?
  maxWorldTimer           dd ?
  invulnerabilityTimer    dd ?
  maxInvulnerabilityTimer dd ?    
ends

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