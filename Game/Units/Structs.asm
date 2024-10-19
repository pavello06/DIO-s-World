;-------------------------------------------------------------------------------
struct GameObject
  object  Object
  collide dd ?
ends


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