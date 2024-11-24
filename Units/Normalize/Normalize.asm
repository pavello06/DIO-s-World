proc Normalize.NormalizeAll\
     old, oldMin, oldMax, newMin, newMax
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

proc Normalize.NormalizeColor\
     old
     
        stdcall Normalize.NormalizeAll, [old], 0, 255, 0.0, 1.0
        
        ret
endp

proc Normalize.NormalizeCoordinate\
     old, oldMin, oldMax
     
        stdcall Normalize.NormalizeAll, [old], [oldMin], [oldMax], -1.0, 1.0
        
        ret
endp

proc Normalize.NormalizeCoordinateX\
     old
     
        stdcall Normalize.NormalizeCoordinate, [old], [Screen.xMin], [Screen.xMax]
        
        ret
endp

proc Normalize.NormalizeCoordinateY\
     old
     
        stdcall Normalize.NormalizeCoordinate, [old], [Screen.yMin], [Screen.yMax]
        
        ret
endp