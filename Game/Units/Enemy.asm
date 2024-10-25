struct Enemy
  entity        Entity
  health        dd ?
  refAnimations dd ?
  score         dd ?
ends

proc Enemy.GetDamage\
     refEnemy
     
        mov     ecx, [refEnemy]
     
        dec     DWORD [ecx + Enemy.health]
        
        mov     eax, sizeof.Animation
        mul     DWORD [ecx + Enemy.health]
        mov     edx, [ecx + Enemy.refAnimations]
        add     edx, eax   
        mov     eax, [edx + Animation.isFinite]
        mov     [ecx + GameObjectWithAnimation.animation.isFinite], eax
        mov     eax, [edx + Animation.timer]
        mov     [ecx + GameObjectWithAnimation.animation.timer], eax
        mov     eax, [edx + Animation.maxTimer]
        mov     [ecx + GameObjectWithAnimation.animation.maxTimer], eax
        mov     eax, [edx + Animation.currentFrame]
        mov     [ecx + GameObjectWithAnimation.animation.currentFrame], eax
        mov     eax, [edx + Animation.refFrames]
        mov     [ecx + GameObjectWithAnimation.animation.refFrames], eax
        
        cmp     DWORD [ecx + Enemy.health], 0
        jne     .exit
        
        stdcall Enemy.Die, ecx
        
  .exit:   
        ret
endp

proc Enemy.Die\
     refEnemy
     
        mov     eax, [refEnemy]
     
        mov     DWORD [eax + GameObject.collide], Structs.DEAD_ENEMY
                
  .exit:   
        ret
endp