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

PIXEL_SIZE = 5
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

DECORATION        = 1

;blocks
;both
BLOCK             = DECORATION * 2
JUMP              = BLOCK * 2
TELEPORT          = JUMP * 2
DELETE            = TELEPORT * 2
;player
TOP_BLOCK         = DELETE * 2
TOP_BREAK         = TOP_BLOCK * 2
BOTTOM_LUCK       = TOP_BREAK * 2
BOTTOM_BREAK      = BOTTOM_LUCK * 2
;enemy
REVERSE           = BOTTOM_BREAK * 2
ROTATE            = REVERSE * 2

;bonuses 
COIN              = ROTATE * 2
STAR              = COIN * 2
HEART             = STAR * 2
POTION            = HEART * 2
AQUA              = POTION * 2

;enemies
;with player
ENEMY             = AQUA * 2
UNTOCHABLE_ENEMY  = ENEMY * 2 
UNBEATABLE_ENEMY  = UNTOCHABLE_ENEMY * 2
;with block
DEAD_ENEMY        = UNBEATABLE_ENEMY * 2
DECORATIVE_ENEMY  = DEAD_ENEMY
JUMPABLE_ENEMY    = DECORATIVE_ENEMY * 2
REVERSEABLE_ENEMY = JUMPABLE_ENEMY * 2
ROTATEABLE_ENEMY  = REVERSEABLE_ENEMY * 2

;players
PLAYER            = ROTATEABLE_ENEMY * 2
PLAYER_BULLET     = PLAYER * 2
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
struct Entity
  object       Object
  speedX       dd ?
  speedY       dd ?
  canGravitate dd ?
ends
;-------------------------------------------------------------------------------