proc Collide.CollideReverseableEnemyAndReverse\
     refEnemy 

        mov     eax, [refEnemy]
        
        cmp     DWORD [eax + Entity.speedX], 0
        je      .negOnY
  
  .negOnX:
        neg     DWORD [eax + GameObjectWithDrawing.drawing.directionX]        
        neg     DWORD [eax + Entity.speedX]
        
        jmp     .exit
        
  .negOnY: 
        neg     DWORD [eax + Entity.speedY]
        mov     DWORD [eax + Object.y], 150      
        
  .exit:
        ret
endp

proc Collide.CollideReverseableEnemyAndSomething uses ebx esi edi,\
     refEnemy, refObject, side
     
        mov     ebx, [refEnemy]
        mov     esi, [refObject]
        mov     edi, [esi + GameObject.collide]
             
        test    edi, GameObject.REVERSE
        je      .exit
        stdcall Collide.CollideReverseableEnemyAndReverse, ebx
        stdcall Collide.CollideBlockableEnemyAndBlock, ebx, esi, [side]
  
  .exit:   
        ret     
endp