proc Collide.CollideDeadPlayerAndDelete

        stdcall Entity.Delete, player
        stdcall Result.Lose

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