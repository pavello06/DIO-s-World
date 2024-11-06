struct EnemyWithStopTimer
  enemy    Enemy
  timer    dd ?
  maxTimer dd ?
ends

proc EnemyWithStopTimer.Start\
     refEnemyWithStopTimer
     
        mov     eax, [refEnemyWithStopTimer]     
     
        add     eax, EnemyWithStopTimer.timer
        stdcall Timer.Start, eax
     
        ret
endp

proc EnemyWithStopTimer.Stop\
     refEnemyWithStopTimer
     
        mov     eax, [refEnemyWithStopTimer]     
     
        add     eax, EnemyWithStopTimer.timer 
        stdcall Timer.Stop, eax
     
        ret
endp

proc EnemyWithStopTimer.CanMove\
     refEnemyWithStopTimer
     
        mov     eax, [refEnemyWithStopTimer]
     
        add     eax, EnemyWithStopTimer.timer
        stdcall Timer.IsTimeUp, eax, [eax + sizeof.EnemyWithStopTimer.timer]
        cmp     eax, TRUE
        je      .canNotMove
        
  .canMove:
        mov     eax, TRUE
        jmp     .exit
        
  .canNotMove:
        mov     eax, FALSE
     
        ret
endp

proc EnemyWithStopTimer.Move\
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
     
        mov     ebx, [refEnemyWithBullets]
        
        stdcall EnemyWithStopTimer.CanMove, ebx
        
        cmp     eax, FALSE
        je      .exit
        
        stdcall EnemyWithStopTimer.Move, ebx
     
  .exit: 
        ret
endp

proc EnemyWithStopTimer.TimerObjects uses ebx,\
     refEnemiesWithStopTimer, refPlayer    
     
        mov     ebx, [refEnemiesWithStopTimer]
        
        mov     ecx, [ebx + 0]
        add     ebx, 4
  
  .loop:
        push    ecx                
        
        stdcall EnemyWithStopTimer.TimerObject, [ebx]
                      
        add     ebx, 4                                   
        pop     ecx
        loop    .loop    
          
        ret
endp 