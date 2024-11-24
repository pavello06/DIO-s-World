Move.MAX_TIMER = 17
Move.timer     dd 0

Move.G = 2

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
        mov     eax, [ebx + esi + Entity.speedX]
        mul     edi
        cmp     eax, 0
        jle     .exit
        
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
     
        stdcall Timer.IsTimeUp, Move.timer, Move.MAX_TIMER
	      cmp	    eax, FALSE 
	      je	    .exit
     
        mov     ebx, [refEntities] 
        
        mov     ecx, [ebx + 0]
        
        cmp     [player + Player.worldTimer], -1
        je      .notWorldTimer
  
  .worldTimer:      
        mov     ecx, 1      
        
  .notWorldTimer:      
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