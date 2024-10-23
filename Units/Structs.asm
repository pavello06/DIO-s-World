;-------------------------------------------------------------------------------
struct Object
  type   dd ?
  x      dd ?
  y      dd ?
  width  dd ?
  height dd ?
ends

Structs.GENERAL = 0
Structs.MENU    = 1
Structs.GAME    = 2
;------------------------------------------------------------------------------- 

;-------------------------------------------------------------------------------
struct Animation
  isFinite     dd ?
  maxTimer     dd ?
  timer        dd ?
  currentFrame dd ?
  refFrames    dd ?
ends
;-------------------------------------------------------------------------------  