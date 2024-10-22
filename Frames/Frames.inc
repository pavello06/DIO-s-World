;-------------------------------------------------------------------------------
struct Frames
  totalFrames  dd ?
  refsTextures dd ?
ends
;-------------------------------------------------------------------------------

;General------------------------------------------------------------------------


;Menu---------------------------------------------------------------------------


;Game---------------------------------------------------------------------------
;General------------------------------------------------------------------------
;Blocks-------------------------------------------------------------------------
include 'Game/General/Blocks/luck.inc'

;Bonuses------------------------------------------------------------------------


;Player-------------------------------------------------------------------------
include 'Game/General/Player/standingPlayer.inc'

include 'Game/General/Player/runningPlayer.inc'

include 'Game/General/Player/upJumpingPlayer.inc'

include 'Game/General/Player/downJumpingPlayer.inc'

include 'Game/General/Player/dyingPlayer.inc'

;Location1----------------------------------------------------------------------
;Background---------------------------------------------------------------------


;Blocks-------------------------------------------------------------------------


;Decorations--------------------------------------------------------------------


;Mobs---------------------------------------------------------------------------
include 'Game/Location1/Mobs/owl.inc'

include 'Game/Location1/Mobs/deadOwl.inc'

include 'Game/Location1/Mobs/venusFlycatcher.inc'

include 'Game/Location1/Mobs/deadVenusFlycatcher.inc'

include 'Game/Location1/Mobs/bee.inc'

include 'Game/Location1/Mobs/deadBee.inc'