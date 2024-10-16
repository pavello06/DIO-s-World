;-------------------------------------------------------------------------------
struct Teleport
  object Object
  x      dd ?
  y      dd ?
ends
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
struct Luck
  object   Object
  refBonus dd ?
ends
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
struct Enemy
  entity     Entity
  score      dd ?
  health     dd ?
  animations dd ?
ends
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
struct Player
  entity     Entity
  health     dd ?
  canJump    dd ?
  hasPancake dd ?
  canShoot   dd ?
  hasApple   dd ? 
ends
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
struct LevelStatistics
  isAvailable dd ?
  isCompleted dd ?
  score       dd ?
  bestSCore   dd ?
  PCs         dd ?
  bestPCs     dd ?
ends

struct Level
  levelStatistics LevelStatistics
  xMin            dd ?
  yMin            dd ?
  xMax            dd ?
  yMax            dd ?
  refObjects      dd ?
  refEntities     dd ?
ends
;-------------------------------------------------------------------------------