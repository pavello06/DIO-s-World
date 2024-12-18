struct Boss
  enemy    Enemy
  henchmen dd ?
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