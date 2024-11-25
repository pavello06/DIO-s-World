Move.MAX_TIMER = 17
Move.timer     dd 0

Move.G = 2

proc Move.MoveEntityCoordinate uses ebx esi edi,\
     refEntity, coordinate
     
        mov     ebx, [refEntity]
        
        mov     esi, [coordinate] 
     
        mov     edi, 1
        mov     ecx, [ebx + esi + Entity.speedX]
        cmp     ecx, 0
        jg      .loop
        neg     edi
        neg     ecx
    
  .loop:
        mov     eax, [ebx + esi + Entity.speedX]
        mul     edi
        cmp     eax, 0
        jle     .exit
        
        push    ecx
        
        add     [ebx + esi + Object.x], edi
        stdcall Collide.HandleCollisions, ebx
             
        pop     ecx
        loop    .loop                

  .exit:     
        ret
endp

proc Move.MoveEntityCoordinateX\
     refEntity
     
        stdcall Move.MoveEntityCoordinate, [refEntity], 0
            
        ret
endp

proc Move.MoveEntityCoordinateY\
     refEntity
     
        stdcall Move.MoveEntityCoordinate, [refEntity], sizeof.Object.x
            
        ret
endp
     

proc Move.MoveEntity uses ebx,\
     refEntity
        
        mov     ebx, [refEntity]
        
        cmp     DWORD [ebx + Entity.canMove], FALSE
        je      .exit
  
        cmp     DWORD [ebx + Entity.canGravitate], FALSE
        je      .canNotGravitate
        
  .canGravitate:      
        sub     DWORD [ebx + Entity.speedY], Move.G
        
  .canNotGravitate:      
        stdcall Move.MoveEntityCoordinateX, ebx
        stdcall Move.MoveEntityCoordinateY, ebx

  .exit:     
        ret
endp

proc Move.MoveEntities uses ebx,\
     refEntities
     
        stdcall Timer.IsTimeUp, Move.timer, Move.MAX_TIMER
	      cmp	    eax, FALSE 
	      je	    .exit
        
        stdcall Array.Iterate, Move.MoveEntity, [refEntities]
        
  .exit:     
        ret
endp     