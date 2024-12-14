proc Collide.CollideRotateableEnemyAndRotate\
     refEnemy, side

        mov     eax, [refEnemy]
        mov     ecx, [side]
   
        cmp     ecx, Collide.RIGHT
        je      .right
        cmp     ecx, Collide.BOTTOM
        je      .bottom
        cmp     ecx, Collide.LEFT
        je      .left  
        
  .top:
        mov     DWORD [eax + GameObjectWithDrawing.drawing.directionX], Drawing.RIGHT
        mov     DWORD [eax + GameObjectWithDrawing.drawing.directionY], Drawing.UP
        mov     DWORD [eax + GameObjectWithDrawing.drawing.refTexture], coconutTexture
        
        mov     DWORD [eax + GameObjectWithAnimation.animation.refFrames], coconutFrames
  
        mov     DWORD [eax + Entity.speedX], 5
        mov     DWORD [eax + Entity.speedY], 0
        jmp     .exit 
        
  .right:
        mov     DWORD [eax + GameObjectWithDrawing.drawing.directionX], Drawing.RIGHT
        mov     DWORD [eax + GameObjectWithDrawing.drawing.directionY], Drawing.UP
        mov     DWORD [eax + GameObjectWithDrawing.drawing.refTexture], rotatedCoconutTexture
        
        mov     DWORD [eax + GameObjectWithAnimation.animation.refFrames], rotatedCoconutFrames
        
        mov     DWORD [eax + Entity.speedX], 0
        mov     DWORD [eax + Entity.speedY], -5
        jmp     .exit 
        
  .bottom:
        mov     DWORD [eax + GameObjectWithDrawing.drawing.directionX], Drawing.LEFT
        mov     DWORD [eax + GameObjectWithDrawing.drawing.directionY], Drawing.DOWN
        mov     DWORD [eax + GameObjectWithDrawing.drawing.refTexture], coconutTexture
        
        mov     DWORD [eax + GameObjectWithAnimation.animation.refFrames], coconutFrames
        
        mov     DWORD [eax + Entity.speedX], -5
        mov     DWORD [eax + Entity.speedY], 0
        jmp     .exit
        
  .left:
        mov     DWORD [eax + GameObjectWithDrawing.drawing.directionX], Drawing.LEFT
        mov     DWORD [eax + GameObjectWithDrawing.drawing.directionY], Drawing.DOWN
        mov     DWORD [eax + GameObjectWithDrawing.drawing.refTexture], rotatedCoconutTexture
        
        mov     DWORD [eax + GameObjectWithAnimation.animation.refFrames], rotatedCoconutFrames
        
        mov     DWORD [eax + Entity.speedX], 0
        mov     DWORD [eax + Entity.speedY], 5

  .exit:   
        ret
endp

proc Collide.CollideRotateableEnemyAndSomething uses ebx esi edi,\
     refEnemy, refObject, side
     
        mov     ebx, [refEnemy]
        mov     esi, [refObject]
        mov     edi, [esi + GameObject.collide]
             
        test    edi, GameObject.SPECIAL
        je      .exit
        stdcall Collide.CollideRotateableEnemyAndRotate, ebx, [side]
        stdcall Collide.CollideBlockableEnemyAndBlock, ebx, esi, [side]
  
  .exit:   
        ret     
endp