struct Frames
  totalFrames dd ?
  refTexture  dd ?
ends

;General------------------------------------------------------------------------
;Alphabet-----------------------------------------------------------------------

;Digits-------------------------------------------------------------------------

;Void---------------------------------------------------------------------------
include 'General/Void/void.inc'

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

;Mobs---------------------------------------------------------------------------
include 'Game/General/Mobs/venusFlycatcher.inc'

include 'Game/General/Mobs/deadVenusFlycatcher.inc'

;Player-------------------------------------------------------------------------
include 'Game/General/Player/standingPlayer.inc'

include 'Game/General/Player/runningPlayer.inc'

include 'Game/General/Player/upJumpingPlayer.inc'

include 'Game/General/Player/downJumpingPlayer.inc'

include 'Game/General/Player/dyingPlayer.inc'

include 'Game/General/Player/invulnerableStandingPlayer.inc'

include 'Game/General/Player/invulnerableRunningPlayer.inc'

include 'Game/General/Player/invulnerableUpJumpingPlayer.inc'

include 'Game/General/Player/invulnerableDownJumpingPlayer.inc'

include 'Game/General/Player/invulnerableDyingPlayer.inc'

include 'Game/General/Player/playerBullet.inc'

;Location1----------------------------------------------------------------------
;Blocks-------------------------------------------------------------------------

;Decorations--------------------------------------------------------------------

;Mobs---------------------------------------------------------------------------
include 'Game/Location1/Mobs/owl.inc'

include 'Game/Location1/Mobs/deadOwl.inc'

include 'Game/Location1/Mobs/bee.inc'

include 'Game/Location1/Mobs/deadBee.inc'

include 'Game/Location1/Mobs/honey.inc'

include 'Game/Location1/Mobs/deadHoney.inc'

;Menu---------------------------------------------------------------------------
;Buttons------------------------------------------------------------------------

;Decorations--------------------------------------------------------------------
include 'Menu/Decorations/activeButtonElement.inc'

include 'Menu/Decorations/dandelion.inc'