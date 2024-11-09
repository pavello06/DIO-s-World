struct EnemyWithTimer
  enemy    Enemy
  timer    dd ?
  maxTimer dd ?
ends

proc EnemyWithTimer.TimerObjects uses ebx esi,\
     refEnemyWithTimer.TimetObject, refEnemiesWithTimer    
     
        mov     ebx, [refEnemyWithTimer.TimetObject]
        mov     esi, [refEnemiesWithTimer]
        
        mov     ecx, [esi + 0]
        cmp     ecx, 0
        je      .exit
        
        add     esi, 4
  
  .loop:
        push    ecx                
        
        stdcall ebx, [esi]
                      
        add     esi, 4                                   
        pop     ecx
        loop    .loop    
  
  .exit:        
        ret
endp 