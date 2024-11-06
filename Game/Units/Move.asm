Move.MAX_TIMER = 17
Move.G = 2

Move.timer    dd 0

proc Move.MoveEntityCoordinate uses ebx esi edi,\
     refEntity, refObjects, coordinate
     
        mov     ebx, [refEntity]
        
        mov     esi, [coordinate] 
     
        mov     edi, 1
        mov     ecx, [ebx + esi + Entity.speedX]
        cmp     ecx, 0
        jg      .loop
        neg     edi
        neg     ecx
    
  .loop:
        cmp     DWORD [ebx + esi + Entity.speedX], 0
        je      .exit
        mov     eax, [ebx + esi + Entity.speedX]
        mul     edi
        cmp     eax, 0
        jl      .exit
        
        push    ecx
        
        add     [ebx + esi + Object.x], edi
        stdcall Collide.HandleCollisions, ebx, [refObjects]
             
        pop     ecx                
        loop    .loop

  .exit:     
        ret
endp

proc Move.MoveEntityCoordinateX\
     refEntity, refObjects
     
        stdcall Move.MoveEntityCoordinate, [refEntity], [refObjects], 0
            
        ret
endp

proc Move.MoveEntityCoordinateY\
     refEntity, refObjects
     
        stdcall Move.MoveEntityCoordinate, [refEntity], [refObjects], sizeof.Object.x
            
        ret
endp
     

proc Move.MoveEntity uses ebx,\
     refEntity, refObjects
        
        mov     ebx, [refEntity]
        
        cmp     DWORD [ebx + Entity.canMove], FALSE
        je      .exit
  
        cmp     DWORD [ebx + Entity.canGravitate], FALSE
        je      .canNotGravitate
        
  .canGravitate:      
        sub     DWORD [ebx + Entity.speedY], Move.G
        
  .canNotGravitate:      
        stdcall Move.MoveEntityCoordinateX, ebx, [refObjects]
        stdcall Move.MoveEntityCoordinateY, ebx, [refObjects]

  .exit:     
        ret
endp

proc Move.MoveEntities uses ebx,\
     refEntities, refObjects
     
        invoke	GetTickCount
        
	      sub	    eax, [Move.timer]
	      cmp	    eax, Move.MAX_TIMER
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