proc Collide.CollidePlayerAndBlock\
     refPlayer, refObject, side

        mov     eax, [refPlayer]
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
        mov     [eax + Entity.speedY], 0
        mov     [eax + Player.canJump], TRUE

  .exit:   
        ret
endp

proc Collide.CollidePlayerAndTopBlock\
     refPlayer, refObject, side
     
        cmp     DWORD [side], Collide.BOTTOM
        jne     .exit
        
        mov     eax, [refPlayer]
        
        cmp     DWORD [eax + Entity.speedY], 0
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

proc Collide.CollidePlayerAndJump\
     refPlayer, refObject, side
     
        cmp     DWORD [side], Collide.BOTTOM
        jne     .exit
        
        mov     eax, [refPlayer]
        mov     ecx, [refObject]
        
        cmp     DWORD [eax + Entity.speedY], 0
        jg      .exit
        
        mov     DWORD [eax + Entity.speedY], 45
        
        add     ecx, GameObjectWithAnimation.animation
        stdcall Animation.Start, ecx        
  
  .exit:   
        ret
endp

proc Collide.CollidePlayerAndKill\
     refPlayer

        stdcall Player.Die, [refPlayer]

        ret
endp

proc Collide.CollidePlayerAndTopBreak\
     refBrickWithBreakTimer, side
     
        cmp     DWORD [side], Collide.BOTTOM
        jne     .exit
        
        stdcall BrickWithBreakTimer.Start, [refBrickWithBreakTimer]     
  
  .exit:   
        ret
endp

proc Collide.CollidePlayerAndBottomBreak\
     refObject, side
     
        cmp     DWORD [side], Collide.TOP
        jne     .exit
        
        stdcall Object.Delete, [refObject]    
  
  .exit:     
        ret
endp

proc Collide.CollidePlayerAndBottomLuck\
     refLuck, side
     
        cmp     DWORD [side], Collide.TOP
        jne     .exit
        
        mov     eax, [refLuck]
        
        xor     [eax + GameObject.collide], GameObject.BOTTOM_LUCK
        mov     [eax + GameObjectWithDrawing.drawing.refTexture], blockTexture
        add     eax, GameObjectWithAnimation.animation
        stdcall Animation.Stop, eax
        
        stdcall Luck.SpawnBonus, [refLuck]     
  
  .exit:     
        ret
endp

proc Collide.CollidePlayerAndTeleport\
     refPlayer, refTeleport 
        
        stdcall Teleport.TeleportObject, [refTeleport], [refPlayer]
     
        ret
endp

proc Collide.CollidePlayerAndBonusForLevel\
     refLevel, refBonus     
        
        mov     eax, [currentLevel]
        mov     ecx, [refBonus]
        
        cmp     DWORD [ecx + Bonus.type], Bonus.STAR
        je      .star
  
  .coin:
        stdcall Bonus.GetCoin, ecx
        jmp     .exit    
 
  .star:
        stdcall Bonus.GetStar, ecx        
  
  .exit:               
        ret
endp

proc Collide.CollidePlayerAndBonusForPlayer\
     refPlayer, refBonus     
        
        mov     eax, [refPlayer]
        mov     ecx, [refBonus]
        mov     edx, [ecx + Bonus.type]
        
        cmp     edx, Bonus.HEART
        jne     .notHeart
        
        stdcall Bonus.GetHeart, ecx
        jmp     .exit
  
  .notHeart:
        cmp     edx, Bonus.ARROW
        jne     .notArrow
        
        stdcall Bonus.GetArrow, ecx
        jmp     .exit
  
  .notArrow:
        stdcall Bonus.GetWorld, ecx
  
  .exit:            
        ret
endp

proc Collide.CollidePlayerAndEnemyBullet\
     refPlayer
    
        stdcall Player.GetDamage, [refPlayer]
    
        ret 
endp

proc Collide.CollidePlayerAndEnemy\
     refPlayer, refEnemy, side

        cmp     DWORD [side], Collide.BOTTOM
        jne     .notBottom
        mov     eax, [refPlayer]
        cmp     DWORD [eax + Entity.speedY], -2
        jge     .notBottom
        
        mov     [eax + Entity.speedY], Player.SPEED_Y_AFTER_COLLIDING_WITH_ENEMY
        stdcall Enemy.GetDamage, [refEnemy]
        jmp     .exit 
        
  .notBottom:
        stdcall Player.GetDamage, [refPlayer]

  .exit:    
        ret
endp

proc Collide.CollidePlayerAndSnail\
     refPlayer, refSnail, side

        cmp     DWORD [side], Collide.BOTTOM
        je      .bottom 
        
        stdcall Player.GetDamage, [refPlayer]
        jmp     .exit 
        
  .bottom:
        stdcall Snail.GetDamage, [refSnail]

  .exit:   
        ret
endp

proc Collide.CollidePlayerAndUntochableEnemy\
     refPlayer
        
        stdcall Player.GetDamage, [refPlayer] 
 
        ret
endp

proc Collide.CollidePlayerAndUnbeatableEnemy\
     refPlayer
        
        stdcall Player.GetDamage, [refPlayer] 
 
        ret
endp

proc Collide.CollidePlayerAndSomething uses ebx esi edi,\
     refPlayer, refObject, side
     
        mov     ebx, [refPlayer]
        mov     esi, [refObject]
        mov     edi, [esi + GameObject.collide]
             
        test    edi, GameObject.BLOCK
        je      @F
        stdcall Collide.CollidePlayerAndBlock, ebx, esi, [side]
  @@:
        test    edi, GameObject.JUMP
        je      @F
        stdcall Collide.CollidePlayerAndJump, ebx, esi, [side]
  @@:
        test    edi, GameObject.KILL
        je      @F
        stdcall Collide.CollidePlayerAndKill, ebx
  @@:
        test    edi, GameObject.TOP_BLOCK
        je      @F
        stdcall Collide.CollidePlayerAndTopBlock, ebx, esi, [side]
  @@:
        test    edi, GameObject.TOP_BREAK
        je      @F
        stdcall Collide.CollidePlayerAndTopBreak, esi, [side]
  @@:
        test    edi, GameObject.BOTTOM_BREAK
        je      @F
        stdcall Collide.CollidePlayerAndBottomBreak, esi, [side]       
  @@:
        test    edi, GameObject.BOTTOM_LUCK
        je      @F
        stdcall Collide.CollidePlayerAndBottomLuck, esi, [side]
  @@:
        test    edi, GameObject.TELEPORT
        je      @F
        stdcall Collide.CollidePlayerAndTeleport, ebx, esi
  @@: 
        test    edi, GameObject.BONUS_FOR_LEVEL 
        je      @F
        stdcall Collide.CollidePlayerAndBonusForLevel, ebx, esi
  @@:
        test    edi, GameObject.BONUS_FOR_PLAYER
        je      @F
        stdcall Collide.CollidePlayerAndBonusForPlayer, ebx, esi
  @@:
        test    edi, GameObject.ENEMY_BULLET
        je      @F
        stdcall Collide.CollidePlayerAndEnemyBullet, ebx
  @@:
        test    edi, GameObject.SNAIL
        je      @F
        stdcall Collide.CollidePlayerAndSnail, ebx, esi, [side]
  @@:
        test    edi, GameObject.ENEMY
        je      @F
        stdcall Collide.CollidePlayerAndEnemy, ebx, esi, [side]
  @@:
        test    edi, GameObject.UNTOCHABLE_ENEMY
        je      @F
        stdcall Collide.CollidePlayerAndUntochableEnemy, ebx
  @@:
        test    edi, GameObject.UNBEATABLE_ENEMY
        je      .exit
        stdcall Collide.CollidePlayerAndUnbeatableEnemy, ebx
  
  .exit:   
        ret     
endp