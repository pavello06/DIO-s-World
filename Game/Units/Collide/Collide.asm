include 'CollidePlayerAndSomething.asm'
include 'CollideDeadPlayerAndSomething.asm'
include 'CollidePlayerBulletAndSomething.asm'

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
proc Collide.HandleCollisionPlayerBulletAndSomething uses ebx esi,\
     refPlayerBullet, refObject, side
     
        mov     ebx, [refPlayerBullet]
        mov     esi, [refObject]
     
        cmp     DWORD [esi + GameObject.collide], GameObject.BLOCK
        jne     @F
        ;stdcall Collide.CollidePlayerBulletAndBlockOrUnbeatableEnemy, ebx 
  @@:
        cmp     DWORD [esi + GameObject.collide], GameObject.ENEMY
        jne     @F
        ;stdcall Collide.CollidePlayerBulletAndEnemyOrUntochableEnemy, ebx, esi 
  @@:
        cmp     DWORD [esi + GameObject.collide], GameObject.UNTOCHABLE_ENEMY
        jne     @F
        ;stdcall Collide.CollidePlayerBulletAndEnemyOrUntochableEnemy, ebx, esi
  @@:
        cmp     DWORD [esi + GameObject.collide], GameObject.UNBEATABLE_ENEMY
        jne     @F
        ;stdcall Collide.CollidePlayerBulletAndBlockOrUnbeatableEnemy, ebx
  @@:
        cmp     DWORD [esi + GameObject.collide], GameObject.SNAIL
        jne     .exit
        ;stdcall Collide.CollidePlayerBulletAndSnail
  
  .exit:   
        ret     
endp

proc Collide.HandleCollision\
     refObject1, refObject2, side

        mov     eax, [refObject1]
        mov     ecx, [refObject2]
        
        cmp     DWORD [eax + GameObject.collide], GameObject.PLAYER_BULLET
        jne     .notPlayerBullet
        stdcall Collide.HandleCollisionPlayerBulletAndSomething, eax, ecx, [side]     
        jmp     .exit        
  .notPlayerBullet:
        cmp     DWORD [eax + GameObject.collide], GameObject.PLAYER
        jne     .notPlayer
        stdcall Collide.CollidePlayerAndSomething, eax, ecx, [side]           
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