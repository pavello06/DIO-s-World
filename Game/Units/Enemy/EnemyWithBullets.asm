struct EnemyWithBullets
  enemyWithTimer EnemyWithTimer
  refBullets     dd ?
ends

proc EnemyWithBullets.CanShoot uses ebx,\
     refEnemyWithBullets
     
        mov     ebx, [refEnemyWithBullets]
        
        stdcall Enemy.IsPlayerNear, ebx, player, 0, 1000        
        cmp     eax, FALSE
        je      .canNotShoot
        
        stdcall Bullet.GetActiveBullet, [ebx + EnemyWithBullets.refBullets]       
        cmp     eax, -1
        je      .canNotShoot

        add     ebx, EnemyWithTimer.timer
        stdcall Timer.IsTimeUp, ebx, [ebx + sizeof.EnemyWithTimer.timer]         
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
        
        stdcall Bullet.GetActiveBullet, [ebx + EnemyWithBullets.refBullets]
        
        stdcall Bullet.Deactivate, eax, [ebx + Object.x], [ebx + Object.y]
    
        ret     
endp

proc EnemyWithBullets.TimerObject uses ebx,\
     refEnemyWithBullets
     
        mov     ebx, [refEnemyWithBullets]
        
        stdcall EnemyWithBullets.CanShoot, ebx      
        cmp     eax, FALSE
        je      .exit
        
        stdcall EnemyWithBullets.Shoot, ebx
     
  .exit: 
        ret
endp

proc EnemyWithBullets.TimerObjects\
     refEnemiesWithBullets       
        
        stdcall EnemyWithTimer.TimerObjects, EnemyWithBullets.TimerObject, [refEnemiesWithBullets]
          
        ret
endp   