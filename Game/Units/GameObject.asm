struct GameObject
  object  Object
  collide dd ?
ends

GameObject.DECORATION         = 1
;blocks
;with both
GameObject.BLOCK              = GameObject.DECORATION * 2
GameObject.JUMP               = GameObject.BLOCK * 2
GameObject.DELETE             = GameObject.JUMP * 2
;with player
GameObject.TELEPORT           = GameObject.DELETE * 2
GameObject.TOP_BLOCK          = GameObject.TELEPORT * 2
GameObject.TOP_BREAK          = GameObject.TOP_BLOCK * 2
GameObject.BOTTOM_LUCK        = GameObject.TOP_BREAK * 2
GameObject.BOTTOM_BREAK       = GameObject.BOTTOM_LUCK * 2
;with enemy
GameObject.REVERSE            = GameObject.BOTTOM_BREAK * 2
GameObject.ROTATE             = GameObject.REVERSE * 2
;with bullets
GameObject.ACTIVATE           = GameObject.ROTATE * 2
;bonuses 
GameObject.COIN               = GameObject.ACTIVATE * 2
GameObject.STAR               = GameObject.COIN * 2
GameObject.HEART              = GameObject.STAR * 2
GameObject.ARROW              = GameObject.HEART * 2
GameObject.WORLD              = GameObject.ARROW * 2
;bullets
GameObject.ENEMY_BULLET       = GameObject.WORLD * 2
GameObject.PLAYER_BULLET      = GameObject.ENEMY_BULLET * 2
;enemies
;with both
GameObject.DEAD_ENEMY         = GameObject.PLAYER_BULLET * 2
GameObject.SNAIL              = GameObject.DEAD_ENEMY * 2
;with block
GameObject.BLOCKABLE_ENEMY    = GameObject.SNAIL * 2
GameObject.JUMPABLE_ENEMY     = GameObject.BLOCKABLE_ENEMY * 2
GameObject.REVERSEABLE_ENEMY  = GameObject.JUMPABLE_ENEMY * 2
GameObject.ROTATEABLE_ENEMY   = GameObject.REVERSEABLE_ENEMY * 2
GameObject.STOPABLE_ENEMY     = GameObject.ROTATEABLE_ENEMY * 2
;with player
GameObject.ENEMY              = GameObject.STOPABLE_ENEMY * 2
GameObject.UNTOCHABLE_ENEMY   = GameObject.ENEMY * 2 
GameObject.UNBEATABLE_ENEMY   = GameObject.UNTOCHABLE_ENEMY * 2
;players
GameObject.DEAD_PLAYER        = GameObject.UNBEATABLE_ENEMY * 2
GameObject.PLAYER             = GameObject.DEAD_PLAYER * 2

struct GameObjectWithDrawing
  gameObject GameObject
  drawing    Drawing
ends

struct GameObjectWithAnimation
  gameObjectWithDrawing GameObjectWithDrawing
  animation             Animation
ends