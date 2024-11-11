struct MenuObject
  object  Object
ends

struct MenuObjectWithDrawing
  menuObject MenuObject
  drawing    Drawing
ends

struct MenuObjectWithAnimation
  menuObjectWithDrawing MenuObjectWithDrawing
  animation             Animation
ends