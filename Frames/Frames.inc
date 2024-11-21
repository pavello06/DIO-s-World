;-------------------------------------------------------------------------------
struct Frames
  totalFrames dd ?
  refTextures dd ?
ends
;-------------------------------------------------------------------------------

;General------------------------------------------------------------------------


;Game---------------------------------------------------------------------------
;General------------------------------------------------------------------------
;Blocks-------------------------------------------------------------------------
include 'Game/General/Blocks/luck.inc'

include 'Game/General/Blocks/spring.inc'

;Bonuses------------------------------------------------------------------------
include 'Game/General/Bonuses/coin.inc'
include 'Game/General/Bonuses/star.inc'
include 'Game/General/Bonuses/heart.inc'
include 'Game/General/Bonuses/arrow.inc'
include 'Game/General/Bonuses/world.inc'

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

;Menu---------------------------------------------------------------------------
;ActiveButtonElements-----------------------------------------------------------
include 'Menu/ActiveButtonElements/activeButtonElement.inc'

;Decorations--------------------------------------------------------------------
include 'Menu/Decorations/dandelion.inc'