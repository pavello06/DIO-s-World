struct Snail
  enemy           Enemy
  countOfCollides dd ?
ends

proc Snail.GetDamage\
     refSnail
     
        stdcall Enemy.GetDamage, [refSnail]
        
        mov     eax, [refSnail]
        
        cmp     DWORD [eax + Enemy.health], 2
        jne     .notStop
        
        mov     DWORD [eax + Enemy.speedX], 0
  
  .notStop:        
        cmp     DWORD [eax + Enemy.health], 1
        jne     .exit
  
        mov     DWORD [eax + Enemy.speedX], 20
        
  .exit:   
        ret
endp