struct Boss
  enemyWithStopTimer EnemyWithStopTimer 
  henchmen           dd ?
  oldX               dd ?
  oldY               dd ? 
ends

proc Boss.GetDamage uses ebx,\
     refBoss
     
        mov     ebx, [refBoss]
     
        dec     DWORD [ebx + Enemy.health]
        
        stdcall String.NumberToString, 3, [ebx + Enemy.health], Level5.nHEALTH + String.string
        
        cmp     DWORD [ebx + Enemy.health], 0
        jne     .exit
        
        stdcall Boss.Die, ebx
  
  .exit:   
        ret     
endp

proc Boss.Die\
     refBoss
     
        stdcall Enemy.Die, [refBoss]
     
        mov     eax, [refBoss]
     
        stdcall Array.Iterate, Enemy.Die, [eax + Boss.henchmen]
        
        cmp     BYTE [isAudioOn], FALSE
        je      @F
        
        invoke  PlaySound, backgroundMusic, 0, 0x00020000 or 0x0001 or 0x0008
        
  @@:     
        ret     
endp

proc Boss.TimerObject uses ebx esi,\
     refBoss
     
        mov     eax, [refBoss]
        mov     edx, [eax + Boss.henchmen]
        mov     ecx, [edx]
        add     edx, 4
        
  .loop:
        mov     ebx, [edx]
        mov     esi, [eax + Object.x]
        sub     esi, [eax + Boss.oldX]
        add     [ebx + Object.x], esi
        mov     esi, [eax + Object.y]
        sub     esi, [eax + Boss.oldY]
        add     [ebx + Object.y], esi       
        
        add     edx, 4
        loop    .loop
         
        ret     
endp