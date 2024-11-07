proc Collide.CollideDeadPlayerAndDelete

        invoke  ExitProcess, 0

        ret
endp

proc Collide.CollideDeadPlayerAndSomething uses ebx esi edi,\
     refPlayer, refObject, side
     
        mov     ebx, [refPlayer]
        mov     esi, [refObject]
        mov     edi, [esi + GameObject.collide]        
             
        test    edi, GameObject.DELETE
        je      .exit
        stdcall Collide.CollideDeadPlayerAndDelete
  
  .exit:   
        ret     
endp