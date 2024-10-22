;-------------------------------------------------------------------------------
struct Object
  type   dd ?
  x      dd ?
  y      dd ?
  width  dd ?
  height dd ?
ends

Structs.GENERAL = 1
Structs.MENU    = 2
Structs.GAME    = 3
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
struct Drawing
  pixelSize  dd ?
  directionX dd ?
  directionY dd ?
  refTexture dd ?
ends

Structs.LITTLE = 3
Structs.NORMAL = 5

Structs.LEFT  = -1
Structs.RIGHT = 1

Structs.DOWN  = -1
Structs.UP    = 1
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