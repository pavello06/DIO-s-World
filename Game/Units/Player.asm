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
              
proc Damage.DamagePlayer\
     refPlayer
     
        mov     eax, [refPlayer]
     
        cmp     DWORD [eax + Player.hasWorld], TRUE
        je      .exit
  
  .hasNotWorld:      
        cmp     DWORD [eax + Player.hasArrow], TRUE
        jne     .hasNotArrow
        
        mov     DWORD [eax + Player.hasArrow], FALSE
        mov     DWORD [eax + Player.invulnerabilityTimer], 0
        jmp     .exit
        
  .hasNotArrow:      
        cmp     DWORD [eax + Player.hasHeart], TRUE
        jne     .hasNotHeart
        
        mov     DWORD [eax + Player.hasHeart], FALSE
        mov     DWORD [eax + Player.invulnerabilityTimer], 0
        jmp     .exit
        
  .hasNotHeart: 
        stdcall Player.Die, eax
        
  .exit:   
        ret
endp

proc Player.Die\
     refPlayer
     
        mov     eax, [refPlayer]
     
        mov     DWORD [eax + GameObject.collide], Structs.DEAD_PLAYER
        mov     DWORD [eax + GameObjectWithAnimation.animation.refFrames], deadPlayerFrames
          
        ret
endp