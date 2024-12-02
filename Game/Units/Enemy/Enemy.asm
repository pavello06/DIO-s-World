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
     refEnemy, distance
     
        mov     eax, [refEnemy]
        
        mov     ecx, [eax + Object.x]
        sub     ecx, [player + Object.x]
        
        mov     edx, [distance]
        
        cmp     ecx, edx
        jg      .playerIsNotNear
        neg     edx
        cmp     ecx, edx
        jl      .playerIsNotNear
  
  .playerIsNear:      
        mov     eax, TRUE
        jmp     .exit
        
  .playerIsNotNear:
        mov     eax, FALSE
        
  .exit:   
        ret 
endp

proc Enemy.GetEnemyInRange uses ebx,\
     refEnemies, xMin, xMax, yMin
     
        mov     ebx, [refEnemies]
        
        mov     ecx, [ebx + Array.length]
        lea     ebx, [ebx + Array.element]
        
  .loop:
        mov     eax, [ebx]
        
        mov     edx, [eax + Object.x]        
        cmp     edx, [xMax]
        jg      .endLoop
        add     edx, [eax + Object.width]
        cmp     edx, [xMin]
        jl      .endLoop
        mov     edx, [eax + Object.y]
        cmp     edx, [yMin]
        jg      .exit    
  
  .endLoop:
        add     ebx, sizeof.Array.element
        loop    .loop
        
        mov     eax, -1
          
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