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

;-------------------------------------------------------------------------------
struct Frames
  totalFrames  dd ?
  refsTextures Texture
ends

struct Animation
  isInfinite   dd ?
  maxTimer     dd ?
  timer        dd ?
  currentFrame dd ?
  refFrames    dd ?
ends
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
struct Object
  collideType dd ?
  x           dd ?
  y           dd ?
  width       dd ?
  height      dd ?
  drawing     Drawing
  animation   Animation
ends
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
struct Entity
  object       Object
  speedX       dd ?
  speedY       dd ?
  canGravitate dd ?
ends
;-------------------------------------------------------------------------------