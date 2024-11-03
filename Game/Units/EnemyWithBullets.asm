struct EnemyWithBullets
  enemy        Enemy
  timer        dd ?
  maxTimer     dd ?
  bulletSpeedX dd ?
  bulletSpeedY dd ?
  refsBullets  dd ?
ends

proc EnemyWithBullets.IsPlayerNear\
     refEnemyWithBullets, refPlayer
     
        mov     eax, [refEnemyWithBullets]
        mov     ecx, [refPlayer]
        
        mov     edx, [eax + Object.x]
        sub     edx, [ecx + Object.x]
     
        mov     eax, Screen.screen
        
        mov     eax, [eax + Object.width]
        shr     eax, 1
        
        cmp     edx, eax
        jg      .playerIsNotNear
  
  .playerIsNear:      
        mov     eax, TRUE
        jmp     .exit
        
  .playerIsNotNear:
        mov     eax, FALSE
        
  .exit:   
        ret 
endp

proc EnemyWithBullets.AreBulletsActive\
     refEnemyWithBullets
     
        mov     eax, [refEnemyWithBullets]
        mov     eax, [eax + EnemyWithBullets.refsBullets]
        
        mov     ecx, [eax + 0]
        add     eax, 4
        
  .loop:        
        mov     edx, [eax]
        
        cmp     DWORD [edx + Bullet.isActive], TRUE
        jne     .endLoop
        
        mov     eax, TRUE
        jmp     .exit 
  
  .endLoop:      
        add     eax, 4
        loop    .loop
        
        mov     eax, FALSE
        
  .exit:   
        ret 
endp

proc EnemyWithBullets.TimeUp\
     refEnemyWithBullets
     
        invoke  GetTickCount
        
        mov     ecx, [refEnemyWithBullets]
        
        sub	    eax, [ecx + EnemyWithBullets.timer]
	      cmp	    eax, [ecx + EnemyWithBullets.maxTimer]
	      jb	    .timeDoesNotUp
        
        add	    [ecx + EnemyWithBullets.timer], eax 
  
  .timeUp:
        mov     eax, TRUE
        jmp     .exit
  
  .timeDoesNotUp:
        mov     eax, FALSE
      
  .exit:   
        ret
endp

proc EnemyWithBullets.CanShoot uses ebx,\
     refEnemyWithBullets, refPlayer
     
        mov     ebx, [refEnemyWithBullets]
        
        stdcall EnemyWithBullets.IsPlayerNear, ebx, [refPlayer]
        cmp     eax, FALSE
        je      .canNotShoot
        
        stdcall EnemyWithBullets.AreBulletsActive, ebx
        cmp     eax, FALSE
        je      .canNotShoot

        stdcall EnemyWithBullets.TimeUp, ebx
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
     
        mov     eax, [refEnemyWithBullets]
        mov     eax, [eax + EnemyWithBullets.refsBullets]
        
        mov     ecx, [eax + 0]
        add     eax, 4
        
  .loop:        
        mov     edx, [eax]
        
        cmp     DWORD [edx + Bullet.isActive], TRUE
        jne     .endLoop
        
        jmp     .findActiveBullet
  
  .endLoop:      
        add     eax, 4
        loop    .loop
        
  .findActiveBullet:
        mov     eax, [refEnemyWithBullets]
        
        stdcall Bullet.Deactivate, edx, [eax + Object.x], [eax + Object.y], [eax + EnemyWithBullets.bulletSpeedX], [eax + EnemyWithBullets.bulletSpeedY]
  
  .exit:   
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