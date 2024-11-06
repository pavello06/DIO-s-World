struct Enemy
  entity        Entity
  health        dd ?
  refAnimations dd ?
  score         dd ?
ends

proc Enemy.IsPlayerNear\
     refEnemy, refPlayer, minDistance, maxDistance
     
        mov     eax, [refEnemy]
        mov     ecx, [refPlayer]
        
        mov     edx, [eax + Object.x]
        sub     edx, [ecx + Object.x]
        
        cmp     edx, [minDistance]
        jl      .playerIsNotNear
        cmp     edx, [maxDistance]
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
        
        add     eax, GameObjectWithAnimation.animation
        stdcall Animation.Start, eax
        
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
                
  .exit:   
        ret
endp