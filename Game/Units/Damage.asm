;-------------------------------------------------------------------------------
proc Damage.KillBullet\
     refBullet
     
        mov     eax, [refBullet]
        
        ;анимацию
        
        mov     DWORD [eax + Entity.speedX], 0
        mov     DWORD [eax + Entity.speedY], 0
        mov     DWORD [eax + Bullet.isActive], TRUE
     
        ret
endp
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
proc Damage.DamagePlayer\
     refPlayer
     
        mov     eax, [refPlayer]
     
        cmp     DWORD [eax + Player.hasWorld], TRUE
        je      .exit
        
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
        stdcall KillPlayer, eax
        
  .exit:   
        ret
endp

proc Damage.KillPlayer\
     refPlayer
     
        mov     eax, [refPlayer]
     
        mov     DWORD [eax + Entity.speedY], 10
        mov     DWORD [eax + GameObject.collide], Structs.DEAD_PLAYER
        ;mov     DWORD [eax + GameObjectWithAnimation.animation.refFrames], deadPlayerFrames
        
  .exit:   
        ret
endp
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
proc Damage.DamageEnemy\
     refEnemy
     
        mov     ecx, [refEnemy]
     
        dec     DWORD [ecx + Enemy.health]
        
        mov     eax, sizeof.Animation
        mul     DWORD [ecx + Enemy.health]
        mov     edx, [ecx + Enemy.refAnimations]
        add     edx, eax   
        mov     eax, [edx + Animation.isFinite]
        mov     [ecx + GameObjectWithAnimation.animation.isFinite], eax
        mov     eax, [edx + Animation.maxTimer]
        mov     [ecx + GameObjectWithAnimation.animation.maxTimer], eax
        mov     eax, [edx + Animation.timer]
        mov     [ecx + GameObjectWithAnimation.animation.timer], eax
        mov     eax, [edx + Animation.currentFrame]
        mov     [ecx + GameObjectWithAnimation.animation.currentFrame], eax
        mov     eax, [edx + Animation.refFrames]
        mov     [ecx + GameObjectWithAnimation.animation.refFrames], eax
        
        cmp     DWORD [ecx + Enemy.health], 0
        jne     .exit
        
        stdcall Action.KillEnemy, ecx
        
  .exit:   
        ret
endp

proc Damage.DamageSnail\
     refSnail
     
        stdcall Action.DamageEnemy, [refSnail]
        
        mov     eax, [refSnail]
        
        cmp     DWORD [eax + Enemy.health], 2
        jne     .notStop
        
        mov     DWORD [eax + Enemy.speedX], 0
  
  .notStop:
        
        cmp     DWORD [eax + Enemy.health], 1
        jne     .exit
  
        mov     DWORD [eax + Enemy.speedX], 20
        
  .exit:   
        ret
endp

proc Damage.KillEnemy\
     refEnemy
     
        mov     eax, [refEnemy]
     
        mov     DWORD [eax + Entity.speedY], 10
        mov     DWORD [eax + GameObject.collide], Structs.DEAD_ENEMY
                
  .exit:   
        ret
endp
;-------------------------------------------------------------------------------