proc Collide.CollideBlockableEnemyAndBlock\
     refEnemy, refObject, side

        mov     eax, [refEnemy]
        mov     ecx, [refObject]
        mov     edx, [side]
   
        cmp     edx, Collide.TOP
        je      .top
        cmp     edx, Collide.RIGHT
        je      .right
        cmp     edx, Collide.BOTTOM
        je      .bottom 
        
  .left:
        mov     edx, [ecx + Object.x]
        add     edx, [ecx + Object.width]
        mov     [eax + Object.x], edx
        jmp     .exit 
        
  .top:
        mov     edx, [ecx + Object.y]
        sub     edx, [eax + Object.height]
        mov     [eax + Object.y], edx
        jmp     .exit      
             
  .right:
        mov     edx, [ecx + Object.x]
        sub     edx, [eax + Object.width]
        mov     [eax + Object.x], edx
        jmp     .exit 
        
  .bottom:
        mov     edx, [ecx + Object.y]
        add     edx, [ecx + Object.height]
        mov     [eax + Object.y], edx        

  .exit:   
        ret
endp

proc Collide.CollideBlockableEnemyAndTopBlock\
     refEnemy, refObject, side
     
        cmp     DWORD [side], Collide.BOTTOM
        jne     .exit
        
        mov     eax, [refEnemy]
        
        cmp     DWORD [eax + Entity.speedY], 0
        jg      .exit
        
        mov     ecx, [refObject]
        
        mov     edx, [ecx + Object.y]
        add     edx, [ecx + Object.height]
        mov     [eax + Object.y], edx
        mov     [eax + Entity.speedY], 0   
  
  .exit:   
        ret
endp

proc Collide.CollideBlockableEnemyAndSomething uses ebx esi edi,\
     refEnemy, refObject, side
     
        mov     ebx, [refEnemy]
        mov     esi, [refObject]
        mov     edi, [esi + GameObject.collide]
             
        test    edi, GameObject.BLOCK
        je      @F
        stdcall Collide.CollideBlockableEnemyAndBlock, ebx, esi, [side]
  @@:
        test    edi, GameObject.TOP_BLOCK
        je      .exit
        stdcall Collide.CollideBlockableEnemyAndTopBlock, ebx, esi, [side]
        
  .exit:   
        ret     
endp