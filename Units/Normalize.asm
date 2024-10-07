;-------------------------------------------------------------------------------
proc Normalize.NormalizeAll\
     oldMin, oldMax, newMin, newMax, old
        locals
          new dd ?
        endl
        
        fild    [oldMax]
        fisub   [oldMin]
          
        fld     [newMax]
        fsub    [newMin]
        
        fild    [old]
        fisub   [oldMin]
        fmul    st0, st1
        fdiv    st0, st2
        fadd    [newMin]
        
        fstp    [new]
        fstp    st0
        fstp    st0
        
        mov     eax, [new]    
        
        ret
endp
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
proc Normalize.NormalizeColor\
     old
     
        stdcall Normalize.NormalizeAll, 0, 255, 0.0, 1.0, [old]
        
        ret
endp

proc Normalize.NormalizeCoordinate\
     oldMin, oldMax, old
     
        stdcall Normalize.NormalizeAll, [oldMin], [oldMax], -1.0, 1.0, [old]
        
        ret
endp
;-------------------------------------------------------------------------------  