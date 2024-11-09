struct EnemyWithReverseTimer
  enemy     Enemy
  timer     dd ?
  maxTimer  dd ?
ends               

proc EnemyWithReverseTimer.Start\
     refEnemyWithReverseTimer
     
        mov     eax, [refEnemyWithReverseTimer]     
     
        add     eax, EnemyWithReverseTimer.timer
        stdcall Timer.Start, eax
     
        ret
endp

proc EnemyWithReverseTimer.Stop\
     refEnemyWithReverseTimer
     
        mov     eax, [refEnemyWithReverseTimer]     
     
        add     eax, EnemyWithReverseTimer.timer 
        stdcall Timer.Stop, eax
     
        ret
endp

proc EnemyWithReverseTimer.CanReverse\
     refEnemyWithReverseTimer
     
        mov     eax, [refEnemyWithReverseTimer]
     
        add     eax, EnemyWithReverseTimer.timer
        stdcall Timer.IsTimeUp, eax, [eax + sizeof.EnemyWithReverseTimer.timer]
        cmp     eax, TRUE
        je      .canNotMove
        
  .canMove:
        mov     eax, TRUE
        jmp     .exit
        
  .canNotMove:
        mov     eax, FALSE
     
        ret
endp

proc EnemyWithReverseTimer.Reverse\
     refEnemyWithReverseTimer
     
        mov     eax, [refEnemyWithReverseTimer]
     
        neg     DWORD [eax + Entity.speedY]
        
        stdcall EnemyWithReverseTimer.Stop, eax
     
        ret
endp

proc EnemyWithReverseTimer.TimerObject uses ebx,\
     refEnemyWithStopTimer
     
        mov     ebx, [refEnemyWithBullets]
        
        stdcall EnemyWithReverseTimer.CanReverse, ebx
        
        cmp     eax, FALSE
        je      .exit
        
        stdcall EnemyWithReverseTimer.Reverse, ebx
     
  .exit: 
        ret
endp

proc EnemyWithReverseTimer.TimerObjects uses ebx,\
     refEnemiesWithReverseTimer, refPlayer    
     
        mov     ebx, [refEnemiesWithReverseTimer]
        
        mov     ecx, [ebx + 0]
        add     ebx, 4
  
  .loop:
        push    ecx                
        
        stdcall EnemyWithReverseTimer.TimerObject, [ebx]
                      
        add     ebx, 4                                   
        pop     ecx
        loop    .loop    
          
        ret
endp 