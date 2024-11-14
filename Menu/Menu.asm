include 'Units/Units.inc'
         
proc Menu.Start

        ret
endp

proc Menu.Timer

        ret
endp

proc Menu.Paint 

        ret
endp

proc Menu.KeyDown\
     key
        
        stdcall KeyDown.Click, [key]
        
        ret
endp

proc Menu.KeyUp\
     key
        
        ret
endp