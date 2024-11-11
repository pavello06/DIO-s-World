struct Enemy
  entity        Entity
  health        dd ?
  refAnimations dd ?
  score         dd ?
ends
 
Enemy.SPEED_Y_AFTER_COLLIDING_WITH_JUMP = 40

Enemy.SPEED_X_AFTER_DEATH = 0
Enemy.SPEED_Y_AFTER_DEATH = 15

proc Enemy.IsPlayerNear\
     refEnemy, minDistance, maxDistance
     
        mov     eax, [refEnemy]
        
        mov     ecx, [eax + Object.x]
        sub     ecx, [player + Object.x]
        
        cmp     ecx, [minDistance]
        jl      .playerIsNotNear
        cmp     ecx, [maxDistance]
        jg      .playerIsNotNear
  
  .playerIsNear:      
        mov     eax, TRUE
        jmp     .exit
        
  .playerIsNotNear:
        mov     eax, FALSE
        
  .exit:   
        ret 
endp

proc Enemy.GetDamage\
     refEnemy
     
        mov     ecx, [refEnemy]
     
        dec     DWORD [ecx + Enemy.health]
        
        mov     eax, sizeof.Animation
        mul     DWORD [ecx + Enemy.health]
        mov     edx, [ecx + Enemy.refAnimations]
        add     edx, eax
        add     ecx, GameObjectWithAnimation.animation 
        stdcall Animation.Copy, ecx, edx
        
        mov     eax, [refEnemy]       
        
        cmp     DWORD [eax + Enemy.health], 0
        jne     .exit
        
        stdcall Enemy.Die, eax
        
  .exit:   
        ret
endp

proc Enemy.Die\
     refEnemy
     
        mov     eax, [refEnemy]
     
        mov     DWORD [eax + GameObject.collide], GameObject.DEAD_ENEMY
        mov     DWORD [eax + Entity.speedX], Enemy.SPEED_X_AFTER_DEATH
        mov     DWORD [eax + Entity.speedY], Enemy.SPEED_Y_AFTER_DEATH
        mov     DWORD [eax + Entity.canGravitate], TRUE
                 
        ret
endp