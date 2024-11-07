proc Collide.CollideDeadEnemyAndDelete\
     refEnemy

        stdcall Entity.Delete, [refEnemy]

        ret
endp

proc Collide.CollideDeadEnemyAndSomething uses ebx esi edi,\
     refEnemy, refObject, side
     
        mov     ebx, [refEnemy]
        mov     esi, [refObject]
        mov     edi, [esi + GameObject.collide]
             
        test    edi, GameObject.DELETE
        je      .exit
        stdcall Collide.CollideDeadEnemyAndDelete, ebx
  
  .exit:   
        ret     
endp