struct EnemyWithBullets
  enemyWithTimer EnemyWithTimer
  refBullets     dd ?
ends

proc EnemyWithBullets.CanShoot uses ebx,\
     refEnemyWithBullets
     
        mov     ebx, [refEnemyWithBullets]
        
        test    DWORD [ebx + GameObject.collide], GameObject.DEAD_ENEMY
        jne     .canNotShoot
                
        stdcall Screen.IsObjectOnScreen, ebx        
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
        
        mov     ecx, [ebx + Object.y]
        add     ecx, 24
        mov     edx, [ebx + Object.x]
        cmp     DWORD [ebx + GameObjectWithDrawing.drawing.directionX], Drawing.LEFT
        jne     @F
        
        add     edx, 3 * Drawing.NORMAL
  
  @@:       
        stdcall Bullet.Deactivate, eax, edx, ecx
    
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
        
        stdcall Array.Iterate, EnemyWithBullets.TimerObject, [refEnemiesWithBullets]
          
        ret
endp   