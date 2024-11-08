proc Collide.CollideReverseableEnemyAndReverse\
     refEnemy 

        mov     eax, [refEnemy]
        
        neg     DWORD [eax + GameObjectWithDrawing.drawing.directionX]
        
        neg     DWORD [eax + Entity.speedX]

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