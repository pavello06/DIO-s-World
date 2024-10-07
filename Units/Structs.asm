;-------------------------------------------------------------------------------
struct Color
  red   dd ?
  green dd ?
  blue  dd ?
ends

struct Texture
  width  dd ?
  height dd ?
  colors Color 
ends

struct Drawing
  pixelSize  dd ?
  directionX dd ?
  directionY dd ?
  refTexture dd ?
ends

PIXEL_SIZE_GENERAL = 5
PIXEL_SIZE_SMALL   = 3

DIRECTION_X_LEFT  = -1
DIRECTION_X_RIGHT =  1
DIRECTION_Y_DOWN  = -1
DIRECTION_Y_UP    =  1
;-------------------------------------------------------------------------------