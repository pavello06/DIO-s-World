;-------------------------------------------------------------------------------
Collide.LEFT   = 0
Collide.TOP    = 1
Collide.RIGHT  = 2
Collide.BOTTOM = 3

proc Collide.AreObjectsColliding\
     refObject1, refObject2
     
        mov     eax, [refObject1]
        mov     ecx, [refObject2]
        
        mov     edx, [eax + Object.x]
        add     edx, [eax + Object.width]
        cmp     edx, [ecx + Object.x]
        jle     .noCollision
         
        mov     edx, [ecx + Object.x]
        add     edx, [ecx + Object.width]
        cmp     edx, [eax + Object.x]
        jle     .noCollision
               
        mov     edx, [eax + Object.y]
        add     edx, [eax + Object.height]
        cmp     edx, [ecx + Object.y]
        jle     .noCollision
                
        mov     edx, [ecx + Object.y]
        add     edx, [ecx + Object.height]
        cmp     edx, [eax + Object.y]
        jle     .noCollision      

  .collision:
        mov     eax, TRUE
        jmp     .exit

  .noCollision:
        mov     eax, FALSE
        
  .exit:     
        ret
endp

proc Collide.GetCollisionSide uses ebx esi,\
     refObject1, refObject2
     
        mov     eax, [refObject1]
        mov     ecx, [refObject2]
        
        mov     edx, [eax + Object.x]
        add     edx, [eax + Object.width]
        sub     edx, [ecx + Object.x]
        mov     esi, [ecx + Object.x]
        add     esi, [ecx + Object.width]
        sub     esi, [eax + Object.x]
        cmp     edx, esi
        jle     @F
        mov     edx, esi
        
  @@:
        mov     ebx, [eax + Object.y]
        add     ebx, [eax + Object.height]
        sub     ebx, [ecx + Object.y]
        mov     esi, [ecx + Object.y]
        add     esi, [ecx + Object.height]
        sub     esi, [eax + Object.y]
        cmp     ebx, esi
        jle     @F
        mov     ebx, esi

  @@:              
        cmp     edx, ebx
        jg      .vertical

  .horizontal:
        mov     edx, [eax + Object.x]
        cmp     edx, [ecx + Object.x]
        jl      .right
        
  .left:
        mov     eax, Collide.LEFT
        jmp     .exit
    
  .right:
        mov     eax, Collide.RIGHT
        jmp     .exit
   
  .vertical:
        mov     edx, [eax + Object.y]
        cmp     edx, [ecx + Object.y]
        jl      .top
   
  .bottom:
        mov     eax, Collide.BOTTOM
        jmp     .exit 
        
  .top:
        mov     eax, Collide.TOP
        jmp     .exit    
    
  .exit: 
        ret
endp
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------


proc Collide.CollidePlayerOrBlockableEnemyAndBlock\
     refEntity, refObject, side

        mov     eax, [refEntity]
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
        cmp     DWORD [eax + Entity.canGravitate], FALSE
        je      .exit
        mov     [eax + Entity.speedY], 0
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
        cmp     DWORD [eax + Entity.canGravitate], FALSE
        je      .exit
        mov     [eax + Entity.speedY], 0
        cmp     DWORD [eax + GameObject.collide], Structs.PLAYER
        jne     .exit
        mov     [eax + Player.canJump], TRUE

  .exit:   
        ret
endp

proc Collide.CollidePlayerAndJump\
     refPlayer, refObject, side
     
        cmp     DWORD [side], Collide.BOTTOM
        jne     .exit
        
        mov     eax, [refPlayer]
        
        cmp     DWORD [eax + Entity.speedY], -Move.G
        jge      .exit
        
        mov     DWORD [eax + Entity.speedY], 40        
  
  .exit:   
        ret
endp

proc Collide.CollidePlayerAndTeleport\
     refPlayer, refTeleport
     
        mov     eax, [refPlayer]
        mov     ecx, [refTeleport]
        
        mov     edx, [ecx + Teleport.x]
        mov     [eax + Object.x], edx
        
        mov     edx, [ecx + Teleport.y]
        mov     [eax + Object.y], edx
     
        ret
endp

proc Collide.CollidePlayerAndTopBlock\
     refPlayer, refObject, side
     
        cmp     DWORD [side], Collide.BOTTOM
        jne     .exit
        
        mov     eax, [refPlayer]
        
        cmp     DWORD [eax + Entity.speedY], -Move.G
        jg      .exit
        
        mov     ecx, [refObject]
        
        mov     edx, [ecx + Object.y]
        add     edx, [ecx + Object.height]
        mov     [eax + Object.y], edx
        mov     [eax + Entity.speedY], 0
        mov     [eax + Player.canJump], TRUE      
  
  .exit:   
        ret
endp

proc Collide.CollidePlayerAndTopBreak\
     refBrickWithBreakTimer, side
     
        cmp     DWORD [side], Collide.BOTTOM
        jne     .exit
        
        mov     eax, [refBrickWithBreakTimer]
        
        mov     [eax + BrickWithBreakTimer.timer], 0     
  
  .exit:   
        ret
endp

proc Collide.CollidePlayerAndBottomLuck\
     refLuck, side
     
        
     
        ret
endp
          
;-------------------------------------------------------------------------------  

;------------------------------------------------------------------------------- 
proc Collide.HandleCollisionPlayerBulletAndSomething uses ebx esi,\
     refPlayerBullet, refObject, side
     
        mov     ebx, [refPlayerBullet]
        mov     esi, [refObject]
     
        cmp     DWORD [esi + GameObject.collide], Structs.BLOCK
        jne     @F
        ;stdcall Collide.CollidePlayerBulletAndBlockOrUnbeatableEnemy, ebx 
  @@:
        cmp     DWORD [esi + GameObject.collide], Structs.ENEMY
        jne     @F
        ;stdcall Collide.CollidePlayerBulletAndEnemyOrUntochableEnemy, ebx, esi 
  @@:
        cmp     DWORD [esi + GameObject.collide], Structs.UNTOCHABLE_ENEMY
        jne     @F
        ;stdcall Collide.CollidePlayerBulletAndEnemyOrUntochableEnemy, ebx, esi
  @@:
        cmp     DWORD [esi + GameObject.collide], Structs.UNBEATABLE_ENEMY
        jne     @F
        ;stdcall Collide.CollidePlayerBulletAndBlockOrUnbeatableEnemy, ebx
  @@:
        cmp     DWORD [esi + GameObject.collide], Structs.SNAIL
        jne     .exit
        ;stdcall Collide.CollidePlayerBulletAndSnail
  
  .exit:   
        ret     
endp

proc Collide.HandleCollisionPlayerAndSomething uses ebx esi,\
     refPlayer, refObject2, side
     
        mov     ebx, [refPlayer]
        mov     esi, [refObject2]
     
        cmp     DWORD [esi + GameObject.collide], Structs.BLOCK
        jne     @F
        stdcall Collide.CollidePlayerOrBlockableEnemyAndBlock, ebx, esi, [side]
  @@:
        cmp     DWORD [esi + GameObject.collide], Structs.JUMP
        jne     @F
        stdcall Collide.CollidePlayerAndJump, ebx, esi, [side] 
  @@:
        cmp     DWORD [esi + GameObject.collide], Structs.TELEPORT
        jne     @F
        stdcall Collide.CollidePlayerAndTeleport, ebx, esi
  @@:
        cmp     DWORD [esi + GameObject.collide], Structs.DELETE
        jne     @F
        ;stdcall Collide.CollidePlayerAndDelete
  @@:
        cmp     DWORD [esi + GameObject.collide], Structs.TOP_BLOCK
        jne     @F
        stdcall Collide.CollidePlayerAndTopBlock, ebx, esi, [side]
  @@:
        cmp     DWORD [esi + GameObject.collide], Structs.TOP_BREAK
        jne     @F
        stdcall Collide.CollidePlayerAndTopBreak, esi, [side]
  @@:
        cmp     DWORD [esi + GameObject.collide], Structs.BOTTOM_LUCK
        jne     @F
        stdcall Collide.CollidePlayerAndBottomLuck, esi, [side]
  @@:
        cmp     DWORD [esi + GameObject.collide], Structs.BOTTOM_BREAK
        jne     @F
        ;stdcall Collide.CollidePlayerAndBottomBreak
  @@: 
        cmp     DWORD [esi + GameObject.collide], Structs.COIN
        jne     @F
        ;stdcall Collide.CollidePlayerAndCoin
  @@:
        cmp     DWORD [esi + GameObject.collide], Structs.STAR
        jne     @F
        ;stdcall Collide.CollidePlayerAndStar
  @@:
        cmp     DWORD [esi + GameObject.collide], Structs.HEART
        jne     @F
        ;stdcall Collide.CollidePlayerAndHeart
  @@:
        cmp     DWORD [esi + GameObject.collide], Structs.ARROW
        jne     @F
        ;stdcall Collide.CollidePlayerAndArrow
  @@:
        cmp     DWORD [esi + GameObject.collide], Structs.WORLD
        jne     @F
        ;stdcall Collide.CollidePlayerAndWorld
  @@:
        cmp     DWORD [esi + GameObject.collide], Structs.ENEMY
        jne     @F
        ;stdcall Collide.CollidePlayerAndEnemy
  @@:
        cmp     DWORD [esi + GameObject.collide], Structs.UNTOCHABLE_ENEMY
        jne     @F
        ;stdcall Collide.CollidePlayerAndUntochableEnemy
  @@:
        cmp     DWORD [esi + GameObject.collide], Structs.UNBEATABLE_ENEMY
        jne     @F
        ;stdcall Collide.CollidePlayerAndUnbeatableEnemy
  @@:
        cmp     DWORD [esi + GameObject.collide], Structs.SNAIL
        jne     .exit
        ;stdcall Collide.CollidePlayerAndSnail
  
  .exit:   
        ret     
endp

proc Collide.HandleCollision\
     refObject1, refObject2, side

        mov     eax, [refObject1]
        mov     ecx, [refObject2]
        
        cmp     DWORD [eax + GameObject.collide], Structs.PLAYER_BULLET
        jne     .notPlayerBullet
        stdcall Collide.HandleCollisionPlayerBulletAndSomething, eax, ecx, [side]     
        jmp     .exit        
  .notPlayerBullet:
        cmp     DWORD [eax + GameObject.collide], Structs.PLAYER
        jne     .notPlayer
        stdcall Collide.HandleCollisionPlayerAndSomething, eax, ecx, [side]           
        jmp     .exit
  .notPlayer:
             
  .exit: 
        ret
endp

proc Collide.HandleCollisions uses ebx esi edi,\
     refObject, refObjects
        
        mov     ebx, [refObject]
        mov     esi, [refObjects]
        
        xor     eax, eax
        mov     ecx, [esi + 0]
  
  .loop:
        push    ecx
        push    eax    
        mov     edi, [esi + eax + 4]
        
        cmp     ebx, edi
        je      .endLoop
        
        stdcall Collide.AreObjectsColliding, ebx, edi 
        cmp     eax, FALSE
        je      .endLoop
        
        stdcall Collide.GetCollisionSide, ebx, edi
        
        stdcall Collide.HandleCollision, ebx, edi, eax
                 
  .endLoop:      
        pop     eax
        add     eax, 4                                   
        pop     ecx
        loop    .loop
        
  .exit: 
        ret
endp
;-------------------------------------------------------------------------------