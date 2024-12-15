struct Lock
  menuObjectWithDrawing MenuObjectWithDrawing
  refLevelAvailability  dd ?
ends

proc Lock.TimerObject\
     refLock

        mov     eax, [refLock]
        mov     ecx, [eax + Lock.refLevelAvailability]
        
        cmp     DWORD [ecx], FALSE
        jne     .notLock
        
  .lock:
        mov     [eax + MenuObjectWithDrawing.drawing.refTexture], lockTexture
        jmp     .exit
  
  .notLock:
        mov     [eax + MenuObjectWithDrawing.drawing.refTexture], openTexture
        
  .exit:
        ret
endp

proc Lock.TimerObjects\
     refLocks

        stdcall Array.Iterate, Lock.TimerObject, [refLocks]

        ret
endp