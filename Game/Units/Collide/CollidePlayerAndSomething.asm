proc Collide.CollidePlayerAndBlock\
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

proc Collide.CollidePlayerAndJump\
     refPlayer, side
     
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
        
        stdcall Teleport.TeleportObject, [refTeleport], [refPlayer]
     
        ret
endp

proc Collide.CollidePlayerAndDelete\

        invoke  ExitProcess, 0

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
        
        stdcall BrickWithBreakTimer.Start, [refBrickWithBreakTimer]     
  
  .exit:   
        ret
endp

proc Collide.CollidePlayerAndBottomLuck\
     refLuck, side
     
        cmp     DWORD [side], Collide.BOTTOM
        jne     .exit
        
        stdcall Luck.SpawnBonus, [refLuck]     
  
  .exit:     
        ret
endp

proc Collide.CollidePlayerAndBottomBreak\
     refObject, side
     
        cmp     DWORD [side], Collide.BOTTOM
        jne     .exit
        
        stdcall Object.Delete, [refObject]    
  
  .exit:     
        ret
endp

proc Collide.CollidePlayerAndHeart\
     refPlayer, refObject
     
        mov     eax, [refPlayer]
        
        mov     [eax + Player.hasHeart], TRUE
        
        stdcall Object.Delete, [refObject]    
  
  .exit:     
        ret
endp

proc Collide.CollidePlayerAndArrow\
     refPlayer, refObject
     
        mov     eax, [refPlayer]
        
        mov     [eax + Player.hasArrow], TRUE
        
        stdcall Object.Delete, [refObject]    
  
  .exit:     
        ret
endp

proc Collide.CollidePlayerAndWorld\
     refPlayer, refObject
     
        mov     eax, [refPlayer]
        
        mov     [eax + Player.hasWorld], TRUE
        add     eax, Player.worldTimer
        stdcall Timer.Start, eax
        
        stdcall Object.Delete, [refObject]    
  
  .exit:     
        ret
endp

proc Collide.CollidePlayerAndEnemy\
     refPlayer, refEnemy, side

        mov     eax, [refPlayer]
        mov     ecx, [refEnemy]
        mov     edx, [side]
   
        cmp     edx, Collide.BOTTOM
        je      .bottom 
        
        stdcall Player.GetDamage, eax
        jmp     .exit 
        
  .bottom:
        stdcall Enemy.GetDamage, ecx

  .exit:   
        ret
endp

proc Collide.CollidePlayerAndUntochableEnemy\
     refPlayer, refEnemy, side
        
        stdcall Player.GetDamage, [refPlayer] 
 
        ret
endp

proc Collide.CollidePlayerAndUnbeatableEnemy\
     refPlayer, refEnemy, side
        
        stdcall Player.GetDamage, [refPlayer] 
 
        ret
endp

proc Collide.CollidePlayerAndSnail\
     refPlayer, refEnemy, side

        mov     eax, [refPlayer]
        mov     ecx, [refEnemy]
        mov     edx, [side]
   
        cmp     edx, Collide.BOTTOM
        je      .bottom 
        
        stdcall Player.GetDamage, eax
        jmp     .exit 
        
  .bottom:
        stdcall Snail.GetDamage, ecx

  .exit:   
        ret
endp

proc Collide.CollidePlayerAndSomething uses ebx esi,\
     refPlayer, refObject, side
     
        mov     ebx, [refPlayer]
        mov     esi, [refObject]
     
        cmp     DWORD [esi + GameObject.collide], GameObject.BLOCK
        jne     @F
        stdcall Collide.CollidePlayerAndBlock, ebx, esi, [side]
  @@:
        cmp     DWORD [esi + GameObject.collide], GameObject.JUMP
        jne     @F
        stdcall Collide.CollidePlayerAndJump, ebx, [side] 
  @@:
        cmp     DWORD [esi + GameObject.collide], GameObject.TELEPORT
        jne     @F
        stdcall Collide.CollidePlayerAndTeleport, ebx, esi
  @@:
        cmp     DWORD [esi + GameObject.collide], GameObject.DELETE
        jne     @F
        stdcall Collide.CollidePlayerAndDelete
  @@:
        cmp     DWORD [esi + GameObject.collide], GameObject.TOP_BLOCK
        jne     @F
        stdcall Collide.CollidePlayerAndTopBlock, ebx, esi, [side]
  @@:
        cmp     DWORD [esi + GameObject.collide], GameObject.TOP_BREAK
        jne     @F
        stdcall Collide.CollidePlayerAndTopBreak, esi, [side]
  @@:
        cmp     DWORD [esi + GameObject.collide], GameObject.BOTTOM_LUCK
        jne     @F
        stdcall Collide.CollidePlayerAndBottomLuck, esi, [side]
  @@:
        cmp     DWORD [esi + GameObject.collide], GameObject.BOTTOM_BREAK
        jne     @F
        stdcall Collide.CollidePlayerAndBottomBreak, esi, [side]
  @@: 
        cmp     DWORD [esi + GameObject.collide], GameObject.COIN
        jne     @F
        ;stdcall Collide.CollidePlayerAndCoin
  @@:
        cmp     DWORD [esi + GameObject.collide], GameObject.STAR
        jne     @F
        ;stdcall Collide.CollidePlayerAndStar
  @@:
        cmp     DWORD [esi + GameObject.collide], GameObject.HEART
        jne     @F
        stdcall Collide.CollidePlayerAndHeart, ebx, esi
  @@:
        cmp     DWORD [esi + GameObject.collide], GameObject.ARROW
        jne     @F
        stdcall Collide.CollidePlayerAndArrow, ebx, esi
  @@:
        cmp     DWORD [esi + GameObject.collide], GameObject.WORLD
        jne     @F
        stdcall Collide.CollidePlayerAndWorld, ebx, esi
  @@:
        cmp     DWORD [esi + GameObject.collide], GameObject.ENEMY
        jne     @F
        stdcall Collide.CollidePlayerAndEnemy, ebx, esi, [side]
  @@:
        cmp     DWORD [esi + GameObject.collide], GameObject.UNTOCHABLE_ENEMY
        jne     @F
        stdcall Collide.CollidePlayerAndUntochableEnemy, ebx, esi, [side]
  @@:
        cmp     DWORD [esi + GameObject.collide], GameObject.UNBEATABLE_ENEMY
        jne     @F
        stdcall Collide.CollidePlayerAndUnbeatableEnemy, ebx, esi, [side]
  @@:
        cmp     DWORD [esi + GameObject.collide], GameObject.SNAIL
        jne     .exit
        stdcall Collide.CollidePlayerAndSnail, ebx, esi, [side]
  
  .exit:   
        ret     
endp