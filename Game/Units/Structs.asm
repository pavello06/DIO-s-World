;-------------------------------------------------------------------------------
struct GameObject
  object  Object
  collide dd ?
ends

DECORATION         = 1
;blocks
;with both
BLOCK              = DECORATION * 2
JUMP               = BLOCK * 2
TELEPORT           = JUMP * 2
DELETE             = TELEPORT * 2
;with player
TOP_BLOCK          = DELETE * 2
TOP_BREAK          = TOP_BLOCK * 2
BOTTOM_LUCK        = TOP_BREAK * 2
BOTTOM_BREAK       = BOTTOM_LUCK * 2
;with enemy
REVERSE            = BOTTOM_BREAK * 2
ROTATE             = REVERSE * 2
;bonuses 
COIN               = ROTATE * 2
STAR               = COIN * 2
HEART              = STAR * 2
ARROW              = HEART * 2
WORLD              = ARROW * 2
;enemies
;with block
DEAD_ENEMY         = WORLD * 2
DECORATIVE_ENEMY   = DEAD_ENEMY * 2
BLOCKABLE_ENEMY    = DECORATIVE_ENEMY * 2
JUMPABLE_ENEMY     = BLOCKABLE_ENEMY * 2
TELEPORTABLE_ENEMY = JUMPABLE_ENEMY * 2
REVERSEABLE_ENEMY  = TELEPORTABLE_ENEMY * 2
ROTATEABLE_ENEMY   = REVERSEABLE_ENEMY * 2
;with player
ENEMY              = ROTATEABLE_ENEMY * 2
UNTOCHABLE_ENEMY   = ENEMY * 2 
UNBEATABLE_ENEMY   = UNTOCHABLE_ENEMY * 2
SNAIL              = UNBEATABLE_ENEMY * 2
;players
PLAYER             = SNAIL * 2
PLAYER_BULLET      = PLAYER * 2
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
struct GameObjectWithDrawing
  gameObject GameObject
  drawing    Drawing
ends
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
struct GameObjectWithAnimation
  gameObject GameObject
  animation  Animation
ends
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
struct Teleport
  gameObject GameObject
  x          dd ?
  y          dd ?
ends
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
struct BrickWithBreakTimer
  gameObject GameObject
  maxTimer   dd ?
  timer      dd ?
ends
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
struct Luck
  gameObject GameObject
  refBonus   dd ?
ends
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
struct Entity
  gameObjectWithAnimation GameObjectWithAnimation
  speedX                  dd ?
  speedY                  dd ?
  canGravitate            dd ?
ends
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
struct Bullet
  entity   Entity
  isActive dd ?
ends
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
struct Enemy
  entity        Entity
  health        dd ?
  refAnimations dd ?
  score         dd ?
ends
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
struct EnemyWithStopTimer
  enemy Enemy
  maxTimer   dd ?
  timer      dd ?
ends
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
struct EnemyWithBullets
  enemy Enemy
  maxTimer     dd ?
  timer        dd ?
  totalBullets dd ?
  refsBullets  dd ?
ends
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
struct Player
  entity                  Entity
  canJump                 dd ?
  totalBullets            dd ?
  refsBullets             dd ?
  hasHeart                dd ?
  hasArrow                dd ?
  hasWorld                dd ?
  maxWorldTimer           dd ?
  worldTimer              dd ?
  maxInvulnerabilityTimer dd ?
  invulnerabilityTimer    dd ?  
ends
;-------------------------------------------------------------------------------