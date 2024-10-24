struct GameObject
  object  Object
  collide dd ?
ends

GameObject.DECORATION         = 1
;blocks
;with both
GameObject.BLOCK              = GameObject.DECORATION * 2
GameObject.JUMP               = GameObject.BLOCK * 2
GameObject.TELEPORT           = GameObject.JUMP * 2
GameObject.DELETE             = GameObject.TELEPORT * 2
;with player
GameObject.TOP_BLOCK          = GameObject.DELETE * 2
GameObject.TOP_BREAK          = GameObject.TOP_BLOCK * 2
GameObject.BOTTOM_LUCK        = GameObject.TOP_BREAK * 2
GameObject.BOTTOM_BREAK       = GameObject.BOTTOM_LUCK * 2
;with enemy
GameObject.REVERSE            = GameObject.BOTTOM_BREAK * 2
GameObject.ROTATE             = GameObject.REVERSE * 2
;bonuses 
GameObject.COIN               = GameObject.ROTATE * 2
GameObject.STAR               = GameObject.COIN * 2
GameObject.HEART              = GameObject.STAR * 2
GameObject.ARROW              = GameObject.HEART * 2
GameObject.WORLD              = GameObject.ARROW * 2
;bullets
GameObject.ACTIVATE           = GameObject.WORLD * 2
;enemies
;with both
GameObject.DEAD_ENEMY         = GameObject.ACTIVATE * 2
;with block
GameObject.DECORATIVE_ENEMY   = GameObject.DEAD_ENEMY * 2
GameObject.BLOCKABLE_ENEMY    = GameObject.DECORATIVE_ENEMY * 2
GameObject.JUMPABLE_ENEMY     = GameObject.BLOCKABLE_ENEMY * 2
GameObject.TELEPORTABLE_ENEMY = GameObject.JUMPABLE_ENEMY * 2
GameObject.REVERSEABLE_ENEMY  = GameObject.TELEPORTABLE_ENEMY * 2
GameObject.ROTATEABLE_ENEMY   = GameObject.REVERSEABLE_ENEMY * 2
;with player
GameObject.ENEMY              = GameObject.ROTATEABLE_ENEMY * 2
GameObject.UNTOCHABLE_ENEMY   = GameObject.ENEMY * 2 
GameObject.UNBEATABLE_ENEMY   = GameObject.UNTOCHABLE_ENEMY * 2
GameObject.SNAIL              = GameObject.UNBEATABLE_ENEMY * 2
;players
GameObject.DEAD_PLAYER        = GameObject.SNAIL * 2
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