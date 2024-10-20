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

proc Collide.CollidePlayerOrEnemyAndBlock\
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
        mov     [eax + Entity.object.x], edx
        jmp     .exit 
        
  .top:
        mov     edx, [ecx + Object.y]
        sub     edx, [eax + Entity.object.height]
        mov     [eax + Entity.object.y], edx
        cmp     DWORD [eax + Entity.canGravitate], FALSE
        je      .exit
        mov     [eax + Entity.speedY], 0
        jmp     .exit      
             
  .right:
        mov     edx, [ecx + Object.x]
        sub     edx, [eax + Entity.object.width]
        mov     [eax + Entity.object.x], edx
        jmp     .exit 
        
  .bottom:
        mov     edx, [ecx + Object.y]
        add     edx, [ecx + Object.height]
        mov     [eax + Entity.object.y], edx
        cmp     DWORD [eax + Entity.canGravitate], FALSE
        je      .exit
        mov     [eax + Entity.speedY], 0
        cmp     DWORD [eax + Entity.object.type], PLAYER
        jne     .exit
        mov     [eax + Player.canJump], TRUE

  .exit:   
        ret
endp

proc Collide.CollidePlayerOrEnemyAndTopBlock\
     refEntity, refObject, side

        mov     eax, [refEntity]
        mov     ecx, [refObject]
        mov     edx, [side]
   
        cmp     edx, Collide.BOTTOM
        jne     .exit 
        
  .bottom:
        mov     edx, [ecx + Object.y]
        add     edx, [ecx + Object.height]
        mov     [eax + Entity.object.y], edx
        cmp     DWORD [eax + Entity.object.type], PLAYER
        jne     .exit
        mov     [eax + Player.canJump], TRUE
        cmp     DWORD [eax + Entity.speedY], 0
        jg      .exit        
        mov     [eax + Entity.speedY], 0

  .exit:   
        ret
endp

proc Collide.CollidePlayerAndDeathPlayer\
     refPlayer    
        
        mov     eax, [refPlayer]
        
        mov     [eax + Player.health], 0      
   
        ret
endp

proc Collide.CollidePlayerAndBrick\
     refPlayer, refObject, side
   
        stdcall Collide.CollidePlayerOrEnemyAndBlock, [refPlayer], [refObject], [side] 
        
        cmp     DWORD [side], Collide.TOP
        jne     .exit
        
        mov     eax, [refObject]
        
        mov     [eax + Object.x], -1000
        mov     [eax + Object.y], -1000      

  .exit:   
        ret
endp

proc Collide.CollidePlayerAndLuck\
     refPlayer, refObject, side
     
        stdcall Collide.CollidePlayerOrEnemyAndBlock, [refPlayer], [refObject], [side]
        
        cmp     DWORD [side], Collide.TOP
        jne     .exit
        
        mov     eax, [refObject]
        mov     ecx, [eax + Luck.refBonus]        
        
        mov     [eax + Luck.object.type], BLOCK
        mov     [eax + Luck.object.drawing.refTexture], blockTexture
        mov     [eax + Luck.object.animation.refFrames], NO_ANIMATION
        
        mov     edi, [eax + Object.width]
        sub     edi, [ecx + Object.width]
        shr     edi, 1
        add     edi, [eax + Object.x]
        mov     [ecx + Object.x], edi
        
        mov     edi, [eax + Object.y] 
        add     edi, [eax + Object.height]
        add     edi, 2 * PIXEL_SIZE
        mov     [ecx + Object.y], edi
     
  .exit:   
        ret
endp

proc Collide.CollidePlayerAndFloppy\
     refObject, refLevelStatistics
     
        mov     eax, [refObject]
        mov     ecx, [refLevelStatistics]
        
        mov     [eax + Object.x], -1000
        mov     [eax + Object.y], -1000
        
        add     [ecx + LevelStatistics.score], 1
   
        ret
endp

proc Collide.CollidePlayerAndPC\
     refObject, refLevelStatistics
     
        mov     eax, [refObject]
        mov     ecx, [refLevelStatistics]
        
        mov     [eax + Object.x], -1000
        mov     [eax + Object.y], -1000
        
        add     [ecx + LevelStatistics.score], 400
        inc     [ecx + LevelStatistics.PCs]

  .exit:   
        ret
endp

proc Collide.CollidePlayerAndPancake\
     refPlayer, refObject
     
        mov     eax, [refPlayer]
        mov     ecx, [refObject]
        
        mov     [eax + Player.hasPancake], TRUE
        
        mov     [ecx + Object.x], -1000
        mov     [ecx + Object.y], -1000
   
        ret
endp

proc Collide.CollidePlayerAndBasket\
     refPlayer, refObject
     
        mov     eax, [refPlayer]
        mov     ecx, [refObject]
        
        mov     [eax + Player.canShoot], TRUE
        
        mov     [ecx + Object.x], -1000
        mov     [ecx + Object.y], -1000
   
        ret
endp

proc Collide.CollidePlayerAndApple\
     refPlayer, refObject
     
        mov     eax, [refPlayer]
        mov     ecx, [refObject]
        
        mov     [eax + Player.hasApple], TRUE
        
        mov     [ecx + Object.x], -1000
        mov     [ecx + Object.y], -1000
   
        ret
endp

proc Collide.CollidePlayerAndEnemy\
     refPlayer, refEnemy, side
     
        mov     eax, [refPlayer]
        mov     ecx, [refEnemy]
        
        cmp     DWORD [side], Collide.BOTTOM
        je      .damageEnemy
        cmp     [eax + Player.hasApple], TRUE
        je      .deathEnemy
        cmp     [eax + Player.canShoot], TRUE
        je      .canNotShoot
        cmp     [eax + Player.hasPancake], TRUE
        je      .hasNotPancake
  
        dec     [eax + Player.health]
        jmp     .exit       
        
  .damageEnemy:
        mov     DWORD [eax + Player.entity.speedY], 18
        stdcall [ecx + Enemy.refAction], ecx
        jmp     .exit      
        
  .deathEnemy:
        mov     [ecx + Enemy.health], 0
        jmp     .exit
  
  .canNotShoot:
        mov     [eax + Player.canShoot], FALSE
        jmp     .exit
        
  .hasNotPancake:
        mov     [eax + Player.hasPancake], FALSE
  
  .exit: 
        ret
endp

proc Collide.CollidePlayerAndUntochableEnemy\
     refPlayer, refEnemy
     
        mov     eax, [refPlayer]
        mov     ecx, [refEnemy]
        
        cmp     [eax + Player.hasApple], TRUE
        je      .deathEnemy
        cmp     [eax + Player.canShoot], TRUE
        je      .canNotShoot
        cmp     [eax + Player.hasPancake], TRUE
        je      .hasNotPancake
  
        dec     [eax + Player.health]
        jmp     .exit             
        
  .deathEnemy:
        mov     [ecx + Enemy.health], 0
        jmp     .exit
  
  .canNotShoot:
        mov     [eax + Player.canShoot], FALSE
        jmp     .exit
        
  .hasNotPancake:
        mov     [eax + Player.hasPancake], FALSE
  
  .exit: 
        ret
endp

proc Collide.CollidePlayerAndEnemyBullet\
     refPlayer, refEntity
     
        mov     eax, [refPlayer]
        mov     ecx, [refEntity]
        
        cmp     [eax + Player.canShoot], TRUE
        je      .canNotShoot
        cmp     [eax + Player.hasPancake], TRUE
        je      .hasNotPancake
  
        dec     [eax + Player.health]
        jmp     .exit             
  
  .canNotShoot:
        mov     [eax + Player.canShoot], FALSE
        jmp     .exit
        
  .hasNotPancake:
        mov     [eax + Player.hasPancake], FALSE
  
  .exit: 
        ret
endp

proc Collide.CollidePlayerBulletAndBlock\
     refEntity
     
        mov     eax, [refEntity]
        
        mov     [eax + Object.x], -1000
        mov     [eax + Object.y], -1000
        
        ret
endp

proc Collide.CollidePlayerBulletAndEnemyOrJumpableEnemyOrRotateableEnemy\
     refEntity, refEnemy
     
        mov     eax, [refEntity]
        mov     ecx, [refEnemy]
        
        dec     [ecx + Enemy.health]        
        mov     [eax + Object.x], -1000
        mov     [eax + Object.y], -1000
        
        ret
endp

proc Collide.CollideEnemyAndReverseEnemy\
     refEnemy, refObject, side
     
        stdcall Collide.CollidePlayerOrEnemyAndBlock, [refEnemy], [refObject], [side]
     
        mov     eax, [refEnemy]
        
        neg     DWORD [eax + Enemy.entity.speedX]
        neg     DWORD [eax + Enemy.entity.speedY]
        
        cmp     DWORD [eax + Enemy.entity.speedX], 0
        je      .exit
        neg     DWORD [eax + Enemy.entity.object.drawing.directionX]

  .exit:     
        ret
endp
;-------------------------------------------------------------------------------  

;------------------------------------------------------------------------------- 
proc Collide.HandleCollisionPlayerBulletAndSomething\
     refObject1, refObject2, side
     
        mov     eax, [refObject1]
        mov     ecx, [refObject2]
     
        cmp     DWORD [ecx + GameObject.collide], Structs.BLOCK
        jne     @F
        ;stdcall Collide.CollidePlayerBulletAndBlock
  @@:
        cmp     DWORD [ecx + GameObject.collide], Structs.ENEMY
        jne     @F
        ;stdcall Collide.CollidePlayerBulletAndEnemy 
  @@:
        cmp     DWORD [ecx + GameObject.collide], Structs.UNTOCHABLE_ENEMY
        jne     @F
        ;stdcall Collide.CollidePlayerBulletAndUntochableEnemy
  @@:
        cmp     DWORD [ecx + GameObject.collide], Structs.UNBEATABLE_ENEMY
        jne     @F
        ;stdcall Collide.CollidePlayerBulletAndUnbeatableEnemy
  @@:
        cmp     DWORD [ecx + GameObject.collide], Structs.SNAIL
        jne     .exit
        ;stdcall Collide.CollidePlayerBulletAndSnail
     
        ret     
endp

proc Collide.HandleCollisionPlayerAndSomething\
     refObject1, refObject2, side
     
        mov     eax, [refObject1]
        mov     ecx, [refObject2]
     
        cmp     DWORD [ecx + GameObject.collide], Structs.BLOCK
        jne     @F
        ;stdcall Collide.CollidePlayerAndBlock
  @@:
        cmp     DWORD [ecx + GameObject.collide], Structs.JUMP
        jne     @F
        ;stdcall Collide.CollidePlayerAndJump
  @@:
        cmp     DWORD [ecx + GameObject.collide], Structs.TELEPORT
        jne     @F
        ;stdcall Collide.CollidePlayerAndTeleport
  @@:
        cmp     DWORD [ecx + GameObject.collide], Structs.DELETE
        jne     @F
        ;stdcall Collide.CollidePlayerAndDelete
  @@:
        cmp     DWORD [ecx + GameObject.collide], Structs.TOP_BLOCK
        jne     @F
        ;stdcall Collide.CollidePlayerAndTopBlock
  @@:
        cmp     DWORD [ecx + GameObject.collide], Structs.TOP_BREAK
        jne     @F
        ;stdcall Collide.CollidePlayerAndTopBreak
  @@:
        cmp     DWORD [ecx + GameObject.collide], Structs.BOTTOM_LUCK
        jne     @F
        ;stdcall Collide.CollidePlayerAndBottomLuck
  @@:
        cmp     DWORD [ecx + GameObject.collide], Structs.BottomBreak
        jne     @F
        ;stdcall Collide.CollidePlayerAndBottomBreak
  @@: 
        cmp     DWORD [ecx + GameObject.collide], Structs.COIN
        jne     @F
        ;stdcall Collide.CollidePlayerAndCoin
  @@:
        cmp     DWORD [ecx + GameObject.collide], Structs.STAR
        jne     @F
        ;stdcall Collide.CollidePlayerAndStar
  @@:
        cmp     DWORD [ecx + GameObject.collide], Structs.HEART
        jne     @F
        ;stdcall Collide.CollidePlayerAndHeart
  @@:
        cmp     DWORD [ecx + GameObject.collide], Structs.ARROW
        jne     @F
        ;stdcall Collide.CollidePlayerAndArrow
  @@:
        cmp     DWORD [ecx + GameObject.collide], Structs.WORLD
        jne     @F
        ;stdcall Collide.CollidePlayerAndWorld
  @@:
        cmp     DWORD [ecx + GameObject.collide], Structs.ENEMY
        jne     @F
        ;stdcall Collide.CollidePlayerAndEnemy
  @@:
        cmp     DWORD [ecx + GameObject.collide], Structs.UNTOCHABLE_ENEMY
        jne     @F
        ;stdcall Collide.CollidePlayerAndUntochableEnemy
  @@:
        cmp     DWORD [ecx + GameObject.collide], Structs.UNBEATABLE_ENEMY
        jne     @F
        ;stdcall Collide.CollidePlayerAndUnbeatableEnemy
  @@:
        cmp     DWORD [ecx + GameObject.collide], Structs.SNAIL
        jne     .exit
        ;stdcall Collide.CollidePlayerAndSnail
     
        ret     
endp

proc Collide.HandleCollision\
     refObject1, refObject2, side

        mov     eax, [refObject1]
        mov     ecx, [refObject2]
        
        cmp     DWORD [eax + GameObject.collide], Structs.PLAYER_BULLET
        jne     .notPlayerBullet
        stdcall Collide.HandleCollisionPlayerBulletAndSomething, eax, ecx, side     
        jmp     .exit        
  .notPlayerBullet:
        cmp     DWORD [eax + GameObject.collide], Structs.PLAYER
        jne     .notPlayer
        stdcall Collide.HandleCollisionPlayerAndSomething, eax, ecx, side           
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