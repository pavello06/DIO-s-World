;-------------------------------------------------------------------------------
struct Color
  red   db ?
  green db ?
  blue  db ?
ends

struct Texture
  width  dd ?
  height dd ?
  colors Color 
ends
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
struct Drawing
  pixelSize  dd ?
  directionX dd ?
  directionY dd ?
  refTexture dd ?
ends

LITTLE = 3
NORMAL = 5

LEFT  = -1
RIGHT = 1

DOWN  = -1
UP    = 1
;------------------------------------------------------------------------------- 

;-------------------------------------------------------------------------------
struct Frames
  totalFrames  dd ?
  refsTextures dd ?
ends

struct Animation
  isFinite     dd ?
  maxTimer     dd ?
  timer        dd ?
  currentFrame dd ?
  refFrames    dd ?
ends
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
struct Object
  type   dd ?
  x      dd ?
  y      dd ?
  width  dd ?
  height dd ?
ends

OBJECT                     = 1
SCREEN                     = OBJECT * 2

MENU_OBJECT                = SCREEN * 2
MENU_OBJECT_WITH_DRAWING   = MENU_OBJECT * 2
MENU_OBJECT_WITH_ANIMATION = MENU_OBJECT_WITH_DRAWING * 2

GAME_OBJECT                = MENU_OBJECT_WITH_ANIMATION * 2
GAME_OBJECT_WITH_DRAWING   = GAME_OBJECT * 2
GAME_OBJECT_WITH_ANIMATION = GAME_OBJECT_WITH_DRAWING * 2

;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
struct Screen
  object Object
  speedX dd ?
  speedY dd ?
ends
;-------------------------------------------------------------------------------  

;-------------------------------------------------------------------------------
FALSE = 0
TRUE  = 1
;-------------------------------------------------------------------------------