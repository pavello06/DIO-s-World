struct EnemyWithStopTimer
  enemy    Enemy
  timer    dd ?
  maxTimer dd ?
ends

proc EnemyWithStopTimer.TimerObject uses ebx,\
     refEnemyWithBullets, refPlayer
     
        mov     ebx, [refEnemyWithBullets]
        
        stdcall EnemyWithBullets.CanShoot, ebx, [refPlayer]
        
        cmp     eax, FALSE
        je      .exit
        
        stdcall EnemyWithBullets.Shoot, ebx
     
  .exit: 
        ret
endp

proc EnemyWithStopTimer.TimerObjects uses ebx,\
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