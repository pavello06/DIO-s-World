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

Structs.LITTLE = 3
Structs.NORMAL = 5

Structs.LEFT  = -1
Structs.RIGHT = 1

Structs.DOWN  = -1
Structs.UP    = 1
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

;general
Structs.OBJECT                     = 1
Structs.SCREEN                     = Structs.OBJECT * 2
;menu
Structs.MENU_OBJECT                = Structs.SCREEN * 2
Structs.MENU_OBJECT_WITH_DRAWING   = Structs.MENU_OBJECT * 2
Structs.MENU_OBJECT_WITH_ANIMATION = Structs.MENU_OBJECT_WITH_DRAWING * 2
;game
Structs.GAME_OBJECT                = Structs.Structs.MENU_OBJECT_WITH_ANIMATION * 2
Structs.GAME_OBJECT_WITH_DRAWING   = Structs.GAME_OBJECT * 2
Structs.GAME_OBJECT_WITH_ANIMATION = Structs.GAME_OBJECT_WITH_DRAWING * 2
Structs.TELEPORT                   = Structs.GAME_OBJECT_WITH_ANIMATION * 2
Structs.BRICK_WIWH_BREAK_TIMER     = Structs.TELEPORT * 2
Structs.LUCK                       = Structs.BRICK_WIWH_BREAK_TIMER * 2
Structs.ENTITY                     = Structs.LUCK * 2
Structs.BULLET                     = Structs.ENTITY * 2
Structs.ENEMY                      = Structs.BULLET * 2
Structs.ENEMY_WITH_STOP_TIMER      = Structs.ENEMY * 2
Structs.ENEMY_WITH_BULLETS         = Structs.ENEMY_WITH_STOP_TIMER * 2
Structs.PLAYER                     = Structs.ENEMY_WITH_BULLETS  * 2
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