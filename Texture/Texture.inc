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

;General------------------------------------------------------------------------
;Void---------------------------------------------------------------------------
include 'General/Void/void.inc'

;Menu---------------------------------------------------------------------------


;Game---------------------------------------------------------------------------
;General------------------------------------------------------------------------
;Blocks-------------------------------------------------------------------------
include 'Game/General/Blocks/shadow.inc'

include 'Game/General/Blocks/dirt.inc'

include 'Game/General/Blocks/brick.inc'

include 'Game/General/Blocks/luck.inc'
include 'Game/General/Blocks/luck2.inc'
include 'Game/General/Blocks/luck3.inc'
include 'Game/General/Blocks/luck4.inc'

include 'Game/General/Blocks/block.inc'

include 'Game/General/Blocks/blueBlock.inc'

include 'Game/General/Blocks/greenBlock.inc'

include 'Game/General/Blocks/pinkBlock.inc'

include 'Game/General/Blocks/yellowBlock.inc'

include 'Game/General/Blocks/bottomPipe.inc'
include 'Game/General/Blocks/topPipe.inc'

;Bonuses------------------------------------------------------------------------


;Player-------------------------------------------------------------------------
include 'Game/General/Player/standingPlayer.inc'
include 'Game/General/Player/standingPlayer2.inc'
include 'Game/General/Player/standingPlayer3.inc'

include 'Game/General/Player/runningPlayer.inc'
include 'Game/General/Player/runningPlayer2.inc'
include 'Game/General/Player/runningPlayer3.inc'
include 'Game/General/Player/runningPlayer4.inc'
include 'Game/General/Player/runningPlayer5.inc'
include 'Game/General/Player/runningPlayer6.inc'

include 'Game/General/Player/upJumpingPlayer.inc'

include 'Game/General/Player/downJumpingPlayer.inc'

include 'Game/General/Player/dyingPlayer.inc'

;Location1----------------------------------------------------------------------
;Background---------------------------------------------------------------------


;Blocks-------------------------------------------------------------------------
include 'Game/Location1/Blocks/grass.inc'

;Decorations--------------------------------------------------------------------
include 'Game/Location1/Decorations/bush.inc'

include 'Game/Location1/Decorations/palm.inc'

include 'Game/Location1/Decorations/flower.inc'

;Mobs---------------------------------------------------------------------------
include 'Game/Location1/Mobs/owl.inc'
include 'Game/Location1/Mobs/owl2.inc'
include 'Game/Location1/Mobs/owl3.inc'
include 'Game/Location1/Mobs/owl4.inc'
include 'Game/Location1/Mobs/owl5.inc'
include 'Game/Location1/Mobs/owl6.inc'

include 'Game/Location1/Mobs/deadOwl.inc'

include 'Game/Location1/Mobs/venusFlycatcher.inc'
include 'Game/Location1/Mobs/venusFlycatcher2.inc'

include 'Game/Location1/Mobs/deadVenusFlycatcher.inc'

include 'Game/Location1/Mobs/bee.inc'
include 'Game/Location1/Mobs/bee2.inc'

include 'Game/Location1/Mobs/deadBee.inc'