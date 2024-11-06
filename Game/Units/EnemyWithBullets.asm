struct EnemyWithBullets
  enemy        Enemy
  timer        dd ?
  maxTimer     dd ?
  bulletSpeedX dd ?
  bulletSpeedY dd ?
  refsBullets  dd ?
ends

proc EnemyWithBullets.CanShoot uses ebx,\
     refEnemyWithBullets, refPlayer
     
        mov     ebx, [refEnemyWithBullets]
        
        stdcall Enemy.IsPlayerNear, ebx, [refPlayer]
        
        cmp     eax, FALSE
        je      .canNotShoot
        
        mov     eax, [ebx + EnemyWithBullets.refsBullets]
        stdcall Bullet.GetActiveBullet, eax
        
        cmp     eax, -1
        je      .canNotShoot

        add     ebx, EnemyWithBullets.timer
        stdcall Timer.IsTimeUp, ebx, [ebx + sizeof.EnemyWithBullets.timer]
         
        cmp     eax, FALSE
        je      .canNotShoot                   
  
  .canShoot:
        mov     eax, TRUE
        jmp     .exit
  
  .canNotShoot:
        mov     eax, FALSE
  
  .exit:   
        ret     
endp

proc EnemyWithBullets.Shoot uses ebx,\
     refEnemyWithBullets
     
        mov     ebx, [refEnemyWithBullets]
        mov     eax, [ebx + EnemyWithBullets.refsBullets]
        stdcall Bullet.GetActiveBullet, eax
        
        stdcall Bullet.Deactivate, eax, [ebx + Object.x], [ebx + Object.y], [ebx + EnemyWithBullets.bulletSpeedX], [ebx + EnemyWithBullets.bulletSpeedY]
    
        ret     
endp

proc EnemyWithBullets.TimerObject uses ebx,\
     refEnemyWithBullets, refPlayer
     
        mov     ebx, [refEnemyWithBullets]
        
        stdcall EnemyWithBullets.CanShoot, ebx, [refPlayer]
        
        cmp     eax, FALSE
        je      .exit
        
        stdcall EnemyWithBullets.Shoot, ebx
     
  .exit: 
        ret
endp

proc EnemyWithBullets.TimerObjects uses ebx,\
     refEnemiesWithBullets, refPlayer    
     
        mov     ebx, [refEnemiesWithBullets]
        
        mov     ecx, [ebx + 0]
        add     ebx, 4
  
  .loop:
        push    ecx                
        
        stdcall EnemyWithBullets.TimerObject, [ebx], [refPlayer]
                      
        add     ebx, 4                                   
        pop     ecx
        loop    .loop    
          
        ret
endp   