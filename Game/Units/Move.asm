;-------------------------------------------------------------------------------
Move.G = 2

Move.maxTimer dd 17
Move.timer    dd 0

proc Move.Gravitate\
     refEntity

        mov     eax, [refEntity]
        
        sub     DWORD [eax + Entity.speedY], Move.G
          
        ret
endp

proc Move.MoveEntity uses ebx esi,\
     refEntity, refObjects
        
        mov     ebx, [refEntity]
        
        cmp     DWORD [ebx + GameObject.collide], Structs.PLAYER
        jne     .notPlayer
        mov     DWORD [ebx + GameObjectWithAnimation.animation.maxTimer], 180
        mov     DWORD [ebx + GameObjectWithAnimation.animation.timer], 0
        mov     DWORD [ebx + GameObjectWithAnimation.animation.refFrames], standingPlayerFrames
  
  .notPlayer:
        cmp     DWORD [ebx + Entity.canGravitate], FALSE
        je      .canNotGravitate      
        stdcall Move.Gravitate, ebx
        
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
        ;stdcall Collide.HandleCollisions, ebx, [refObjects]
        
        cmp     DWORD [ebx + GameObject.collide], Structs.PLAYER
        jne     .endXLoop
        mov     DWORD [ebx + GameObjectWithAnimation.animation.maxTimer], 100
        mov     DWORD [ebx + GameObjectWithAnimation.animation.timer], 0
        mov     DWORD [ebx + GameObjectWithAnimation.animation.refFrames], runPlayerFrames
  
  .endXLoop:        
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
        ;stdcall Collide.HandleCollisions, ebx, [refObjects]
        cmp     DWORD [ebx + Entity.speedY], 0
        je      .endYLoop
        
        cmp     DWORD [ebx + GameObject.collide], Structs.PLAYER
        jne     .endYLoop
        mov     DWORD [ebx + GameObjectWithDrawing.drawing.refTexture], upJumpPlayerTexture
        mov     DWORD [ebx + GameObjectWithAnimation.animation.timer], -1
        cmp     DWORD [ebx + Entity.speedY], 0
        jg      .endYLoop
        mov     DWORD [ebx + GameObjectWithDrawing.drawing.refTexture], downJumpPlayerTexture
        mov     DWORD [ebx + Player.canJump], FALSE
  
  .endYLoop:           
        pop     ecx                
        loop    .yLoop

  .exit:     
        ret
endp

proc Move.MoveEntities uses ebx esi,\
     refEntities, refObjects
     
        invoke	GetTickCount
	      sub	    eax, [Move.timer]
	      cmp	    eax, [Move.maxTimer]
	      jb	    .exit
        
        add	    [Move.timer], eax
     
        mov     ebx, [refEntities] 
        
        xor     esi, esi
        mov     ecx, [ebx + 0]
  
  .loop:
        push    ecx      
        
        stdcall Move.MoveEntity, [ebx + esi + 4], [refObjects]
            
  .endLoop:                     
        add     esi, 4
        pop     ecx                                   
        loop    .loop
        
  .exit:     
        ret
endp
;-------------------------------------------------------------------------------     