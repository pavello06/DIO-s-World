Move.G = 2

Move.timer    dd 0
Move.maxTimer dd 17

proc Move.MoveEntityCoordinate\
     refEntity, refObjects, coordinate
     
        mov     eax, 
     
        mov     esi, 1
        mov     ecx, [ebx + Entity.speedX]
        cmp     ecx, 0
        jg      .loop
        neg     esi
        neg     ecx
    
  .loop:
        cmp     DWORD [ebx + Entity.speedX], 0
        je      .exit
        mov     eax, [ebx + Entity.speedX]
        mul     esi
        cmp     eax, 0
        jl      .exit
        
        push    ecx
        
        add     [ebx + Object.x], esi
        stdcall Collide.HandleCollisions, ebx, [refObjects]
             
        pop     ecx                
        loop    .loop

  .exit:     
        ret
endp
     

proc Move.MoveEntity uses ebx esi,\
     refEntity, refObjects
        
        mov     ebx, [refEntity]
  
        cmp     DWORD [ebx + Entity.canGravitate], FALSE
        je      .canNotGravitate
        
  .canGravitate:      
        sub     DWORD [ebx + Entity.speedY], Move.G
        
  .canNotGravitate:      
        mov     esi, 1
        mov     ecx, [ebx + Entity.speedX]
        cmp     ecx, 0
        jg      .xLoop
        neg     esi
        neg     ecx
    
  .xLoop:
        cmp     DWORD [ebx + Entity.speedX], 0
        je      .stopX
        mov     eax, [ebx + Entity.speedX]
        imul    eax, esi
        cmp     eax, 0
        jl      .stopX
        
        push    ecx 
        
        add     [ebx + Object.x], esi
        stdcall Collide.HandleCollisions, ebx, [refObjects]
          
        pop     ecx                
        loop    .xLoop
  
  .stopX:           
        mov     esi, 1
        mov     ecx, [ebx + Entity.speedY]
        cmp     ecx, 0
        jg      .yLoop
        neg     esi
        neg     ecx
    
  .yLoop:
        cmp     DWORD [ebx + Entity.speedY], 0
        je      .exit
        mov     eax, [ebx + Entity.speedY]
        imul    eax, esi
        cmp     eax, 0
        jl      .exit
        
        push    ecx
        
        add     [ebx + Object.y], esi
        stdcall Collide.HandleCollisions, ebx, [refObjects]
             
        pop     ecx                
        loop    .yLoop

  .exit:     
        ret
endp

proc Move.MoveEntities uses ebx,\
     refEntities, refObjects
     
        invoke	GetTickCount
        
	      sub	    eax, [Move.timer]
	      cmp	    eax, [Move.maxTimer]
	      jb	    .exit
        
        add	    [Move.timer], eax
     
        mov     ebx, [refEntities] 
        
        mov     ecx, [ebx + 0]
        add     ebx, 4
  
  .loop:
        push    ecx      
        
        stdcall Move.MoveEntity, [ebx], [refObjects]
                    
        add     ebx, 4
        pop     ecx                                   
        loop    .loop
        
  .exit:     
        ret
endp     