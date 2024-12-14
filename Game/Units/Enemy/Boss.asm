struct Boss
  enemy    Enemy
  henchmen dd ?
ends

proc Boss.GetDamage\
     refBoss
     
        mov     eax, [refBoss]
     
        dec     DWORD [eax + Enemy.health]
        
        cmp     DWORD [eax + Enemy.health], 0
        jne     .exit
        
        stdcall Boss.Die, eax
  
  .exit:   
        ret     
endp

proc Boss.Die\
     refBoss
     
        stdcall Enemy.Die, [refBoss]
     
        mov     eax, [refBoss]
     
        stdcall Array.Iterate, Enemy.Die, [eax + Boss.henchmen]
     
        ret     
endp