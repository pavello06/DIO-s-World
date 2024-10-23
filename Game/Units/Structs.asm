;-------------------------------------------------------------------------------
struct GameObject
  object  Object
  collide dd ?
ends

Structs.DECORATION         = 1
;blocks
;with both
Structs.BLOCK              = Structs.DECORATION * 2
Structs.JUMP               = Structs.BLOCK * 2
Structs.TELEPORT           = Structs.JUMP * 2
Structs.DELETE             = Structs.TELEPORT * 2
;with player
Structs.TOP_BLOCK          = Structs.DELETE * 2
Structs.TOP_BREAK          = Structs.TOP_BLOCK * 2
Structs.BOTTOM_LUCK        = Structs.TOP_BREAK * 2
Structs.BOTTOM_BREAK       = Structs.BOTTOM_LUCK * 2
;with enemy
Structs.REVERSE            = Structs.BOTTOM_BREAK * 2
Structs.ROTATE             = Structs.REVERSE * 2
;bonuses 
Structs.COIN               = Structs.ROTATE * 2
Structs.STAR               = Structs.COIN * 2
Structs.HEART              = Structs.STAR * 2
Structs.ARROW              = Structs.HEART * 2
Structs.WORLD              = Structs.ARROW * 2
;bullets
Structs.ACTIVATE           = Structs.WORLD * 2
;enemies
;with both
Structs.DEAD_ENEMY         = Structs.ACTIVATE * 2
;with block
Structs.DECORATIVE_ENEMY   = Structs.DEAD_ENEMY * 2
Structs.BLOCKABLE_ENEMY    = Structs.DECORATIVE_ENEMY * 2
Structs.JUMPABLE_ENEMY     = Structs.BLOCKABLE_ENEMY * 2
Structs.TELEPORTABLE_ENEMY = Structs.JUMPABLE_ENEMY * 2
Structs.REVERSEABLE_ENEMY  = Structs.TELEPORTABLE_ENEMY * 2
Structs.ROTATEABLE_ENEMY   = Structs.REVERSEABLE_ENEMY * 2
;with player
Structs.ENEMY              = Structs.ROTATEABLE_ENEMY * 2
Structs.UNTOCHABLE_ENEMY   = Structs.ENEMY * 2 
Structs.UNBEATABLE_ENEMY   = Structs.UNTOCHABLE_ENEMY * 2
Structs.SNAIL              = Structs.UNBEATABLE_ENEMY * 2
;players
Structs.DEAD_PLAYER        = Structs.SNAIL * 2
Structs.PLAYER             = Structs.DEAD_PLAYER * 2
Structs.PLAYER_BULLET      = Structs.PLAYER * 2
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
struct GameObjectWithDrawing
  gameObject GameObject
  drawing    Drawing
ends
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
struct GameObjectWithAnimation
  gameObjectWithDrawing GameObjectWithDrawing
  animation             Animation
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
  gameObjectWithAnimation GameObjectWithAnimation
  maxTimer                dd ?
  timer                   dd ?
ends
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
struct Luck
  gameObjectWithAnimation GameObjectWithAnimation
  refBonus                dd ?
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
  enemy    Enemy
  maxTimer dd ?
  timer    dd ?
ends
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
struct EnemyWithBullets
  enemy        Enemy
  maxTimer     dd ?
  timer        dd ?
  totalBullets dd ?
  refsBullets  dd ?
ends
;-------------------------------------------------------------------------------