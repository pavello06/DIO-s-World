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