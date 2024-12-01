struct EnemyWithStopTimer
  enemyWithTimer         EnemyWithTimer
ends               

proc EnemyWithStopTimer.Start\
     refEnemyWithStopTimer
     
        mov     eax, [refEnemyWithStopTimer] 
     
        add     eax, EnemyWithTimer.timer
        stdcall Timer.Start, eax
     
        ret
endp

proc EnemyWithStopTimer.Stop\
     refEnemyWithStopTimer
     
        mov     eax, [refEnemyWithStopTimer]     
     
        add     eax, EnemyWithTimer.timer 
        stdcall Timer.Stop, eax
     
        ret
endp

proc EnemyWithStopTimer.CanMove\
     refEnemyWithStopTimer
     
        mov     eax, [refEnemyWithStopTimer]
     
        add     eax, EnemyWithTimer.timer
        stdcall Timer.IsTimeUp, eax, [eax + sizeof.EnemyWithTimer.timer]
        cmp     eax, FALSE
        je      .canNotMove
        
  .canMove:
        mov     eax, TRUE
        jmp     .exit
        
  .canNotMove:
        mov     eax, FALSE
  
  .exit:   
        ret
endp

proc EnemyWithStopTimer.StartMove\
     refEnemyWithStopTimer
     
        mov     eax, [refEnemyWithStopTimer]
     
        mov     [eax + Entity.canMove], TRUE
        
        stdcall EnemyWithStopTimer.Stop, eax
     
        ret
endp

proc EnemyWithStopTimer.StopMove\
     refEnemyWithStopTimer
     
        mov     eax, [refEnemyWithStopTimer]
     
        mov     [eax + Entity.canMove], FALSE
        
        stdcall EnemyWithStopTimer.Start, eax
     
        ret
endp

proc EnemyWithStopTimer.TimerObject uses ebx,\
     refEnemyWithStopTimer
     
        mov     ebx, [refEnemyWithStopTimer]
        
        stdcall EnemyWithStopTimer.CanMove, ebx        
        cmp     eax, FALSE
        je      .exit
        
        stdcall EnemyWithStopTimer.StartMove, ebx
     
  .exit: 
        ret
endp

proc EnemyWithStopTimer.TimerObjects\
     refEnemiesWithStopTimer      
        
        stdcall Array.Iterate, EnemyWithStopTimer.TimerObject, [refEnemiesWithStopTimer]   
          
        ret
endp 