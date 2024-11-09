struct EnemyWithReverseTimer
  enemyWithTimer EnemyWithTimer
ends               

proc EnemyWithReverseTimer.CanReverse\
     refEnemyWithReverseTimer
     
        mov     eax, [refEnemyWithReverseTimer]
     
        add     eax, EnemyWithTimer.timer
        stdcall Timer.IsTimeUp, eax, [eax + sizeof.EnemyWithTimer.timer]
        cmp     eax, TRUE
        je      .canNotReverse
        
  .canReverse:
        mov     eax, TRUE
        jmp     .exit
        
  .canNotReverse:
        mov     eax, FALSE
     
        ret
endp

proc EnemyWithReverseTimer.Reverse\
     refEnemyWithReverseTimer
     
        mov     eax, [refEnemyWithReverseTimer]
     
        neg     DWORD [eax + Entity.speedY]
     
        ret
endp

proc EnemyWithReverseTimer.TimerObject uses ebx,\
     refEnemyWithReverseTimer
     
        mov     ebx, [refEnemyWithReverseTimer]
        
        stdcall EnemyWithReverseTimer.CanReverse, ebx        
        cmp     eax, FALSE
        je      .exit
        
        stdcall EnemyWithReverseTimer.Reverse, ebx
     
  .exit: 
        ret
endp

proc EnemyWithReverseTimer.TimerObjects\
     refEnemiesWithReverseTimer   
        
        stdcall EnemyWithTimer.TimerObjects, EnemyWithReverseTimer.TimerObject, [refEnemiesWithReverseTimer]   
          
        ret
endp 