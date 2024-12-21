include 'CollideDeadEnemyAndSomething.asm'
include 'CollideEnemyAndSomething.asm'
include 'CollideSnailAndSomething.asm'
include 'CollideBlockableEnemyAndSomething.asm'
include 'CollideJumpableEnemyAndSomething.asm'
include 'CollideReverseableEnemyAndSomething.asm'
include 'CollideRotateableEnemyAndSomething.asm'
include 'CollideStopableEnemyAndSomething.asm'

include 'CollideDeadPlayerAndSomething.asm'
include 'CollidePlayerAndSomething.asm'
include 'CollidePlayerBulletAndSomething.asm'

Collide.TOP    = 0
Collide.RIGHT  = 1
Collide.BOTTOM = 2
Collide.LEFT   = 3

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
        jge     .vertical

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

proc Collide.HandleCollision uses ebx esi edi,\
     refObject1, refObject2, side

        mov     ebx, [refObject1]
        mov     esi, [refObject2]
        mov     edi, [ebx + GameObject.collide]
        
        test    edi, GameObject.DECORATION
        jne     .exit
        test    DWORD [esi + GameObject.collide], GameObject.DECORATION
        jne     .exit  
        
        test    edi, GameObject.DEAD_PLAYER
        je      .notDeadPlayer
        stdcall Collide.CollideDeadPlayerAndSomething, ebx, esi, [side]
        jmp     .exit
         
  .notDeadPlayer:
        test    edi, GameObject.PLAYER
        je      .notPlayer
        stdcall Collide.CollidePlayerAndSomething, ebx, esi, [side]
        jmp     .exit
        
  .notPlayer:
        test    edi, GameObject.PLAYER_BULLET
        je      .notPlayerBullet
        stdcall Collide.CollidePlayerBulletAndSomething, ebx, esi, [side]
  
  .notPlayerBullet:         
        test    edi, GameObject.DEAD_ENEMY
        je      @F
        stdcall Collide.CollideDeadEnemyAndSomething, ebx, esi, [side]
  @@:
        test    edi, GameObject.ENEMY
        je      @F
        stdcall Collide.CollideEnemyAndSomething, ebx, esi, [side]
  @@:
        test    edi, GameObject.SNAIL
        je      @F
        stdcall Collide.CollideSnailAndSomething, ebx, esi, [side]
  @@:
        test    edi, GameObject.BLOCKABLE_ENEMY
        je      @F
        stdcall Collide.CollideBlockableEnemyAndSomething, ebx, esi, [side]
  @@:
        test    edi, GameObject.JUMPABLE_ENEMY
        je      @F
        stdcall Collide.CollideJumpableEnemyAndSomething, ebx, esi, [side]
  @@:
        test    edi, GameObject.REVERSEABLE_ENEMY
        je      @F
        stdcall Collide.CollideReverseableEnemyAndSomething, ebx, esi, [side]
  @@:
        test    edi, GameObject.ROTATEABLE_ENEMY
        je      @F
        stdcall Collide.CollideRotateableEnemyAndSomething, ebx, esi, [side]
  @@:
        test    edi, GameObject.STOPABLE_ENEMY
        je      .exit
        stdcall Collide.CollideStopableEnemyAndSomething, ebx, esi, [side]     
             
  .exit: 
        ret
endp

proc Collide.HandleCollisions uses ebx esi edi,\
     refObject
        
        mov     ebx, [refObject]
        mov     eax, [currentLevel]
        mov     esi, [eax + Level.gameObjects.refGameObjects]
        
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