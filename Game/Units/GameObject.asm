struct GameObject
  object  Object
  collide dd ?
ends

GameObject.DECORATION         = 1
;blocks
;with both
GameObject.TOP_BLOCK          = GameObject.DECORATION * 2
GameObject.BLOCK              = GameObject.TOP_BLOCK * 2
GameObject.KILL               = GameObject.BLOCK * 2
GameObject.DELETE             = GameObject.KILL * 2
;with player
GameObject.TOP_BREAK          = GameObject.DELETE * 2
GameObject.BOTTOM_BREAK       = GameObject.TOP_BREAK * 2
GameObject.BOTTOM_LUCK        = GameObject.BOTTOM_BREAK * 2
GameObject.JUMP               = GameObject.BOTTOM_LUCK * 2
;with enemy
GameObject.REVERSE            = GameObject.JUMP * 2
GameObject.SPECIAL            = GameObject.REVERSE * 2
;bonuses
GameObject.BONUS_FOR_LEVEL    = GameObject.SPECIAL * 2
GameObject.BONUS_FOR_PLAYER   = GameObject.BONUS_FOR_LEVEL * 2
;enemies
;with both
GameObject.DEAD_ENEMY         = GameObject.BONUS_FOR_PLAYER * 2
GameObject.ENEMY              = GameObject.DEAD_ENEMY * 2
GameObject.SNAIL              = GameObject.ENEMY * 2
;with block
GameObject.BLOCKABLE_ENEMY    = GameObject.SNAIL * 2
GameObject.JUMPABLE_ENEMY     = GameObject.BLOCKABLE_ENEMY * 2
GameObject.REVERSEABLE_ENEMY  = GameObject.JUMPABLE_ENEMY * 2
GameObject.ROTATEABLE_ENEMY   = GameObject.REVERSEABLE_ENEMY * 2
GameObject.STOPABLE_ENEMY     = GameObject.ROTATEABLE_ENEMY * 2
;with player
GameObject.UNTOCHABLE_ENEMY   = GameObject.STOPABLE_ENEMY * 2 
GameObject.UNBEATABLE_ENEMY   = GameObject.UNTOCHABLE_ENEMY * 2
GameObject.BOSS               = GameObject.UNBEATABLE_ENEMY * 2
;players
GameObject.DEAD_PLAYER        = GameObject.BOSS * 2
GameObject.PLAYER             = GameObject.DEAD_PLAYER * 2
GameObject.PLAYER_BULLET      = GameObject.PLAYER * 2

struct GameObjectWithDrawing
  gameObject GameObject
  drawing    Drawing
ends

struct GameObjectWithAnimation
  gameObjectWithDrawing GameObjectWithDrawing
  animation             Animation
ends