proc Collide.CollideRotateableEnemyAndRotate\
     refEnemy, side

        mov     eax, [refEnemy]
        mov     ecx, [side]
   
        cmp     ecx, Collide.TOP
        je      .vertical
        cmp     ecx, Collide.BOTTOM
        je      .vertical 
        
  .horizontal:
        neg     DWORD [eax + Entity.speedY]
        inc     DWORD [eax + Entity.speedY]        

        mov     DWORD [eax + Entity.speedX], 0        
        jmp     .exit 
        
  .vertical:
        neg     DWORD [eax + Entity.speedX]
        inc     DWORD [eax + Entity.speedX]        

        mov     DWORD [eax + Entity.speedY], 0

  .exit:   
        ret
endp

proc Collide.CollideRotateableEnemyAndSomething uses ebx esi edi,\
     refEnemy, refObject, side
     
        mov     ebx, [refEnemy]
        mov     esi, [refObject]
        mov     edi, [esi + GameObject.collide]
             
        test    edi, GameObject.REVERSE
        je      .exit
        stdcall Collide.CollideRotateableEnemyAndRotate, ebx, [side]
  
  .exit:   
        ret     
endp