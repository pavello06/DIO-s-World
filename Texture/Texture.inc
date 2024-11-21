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

;General------------------------------------------------------------------------
;Alphabet-----------------------------------------------------------------------
include 'General/Alphabet/a.inc'
include 'General/Alphabet/b.inc'
include 'General/Alphabet/c.inc'
include 'General/Alphabet/d.inc'
include 'General/Alphabet/e.inc'
include 'General/Alphabet/f.inc'
include 'General/Alphabet/g.inc'
include 'General/Alphabet/h.inc'
include 'General/Alphabet/i.inc'
include 'General/Alphabet/j.inc'
include 'General/Alphabet/k.inc'
include 'General/Alphabet/l.inc'
include 'General/Alphabet/m.inc'
include 'General/Alphabet/n.inc'
include 'General/Alphabet/o.inc'
include 'General/Alphabet/p.inc'
include 'General/Alphabet/q.inc'
include 'General/Alphabet/r.inc'
include 'General/Alphabet/s.inc'
include 'General/Alphabet/t.inc'
include 'General/Alphabet/u.inc'
include 'General/Alphabet/v.inc'
include 'General/Alphabet/w.inc'
include 'General/Alphabet/x.inc'
include 'General/Alphabet/y.inc'
include 'General/Alphabet/z.inc'

include 'General/Alphabet/quotationMark.inc'

;Digits-------------------------------------------------------------------------
include 'General/Digits/0.inc'
include 'General/Digits/1.inc'
include 'General/Digits/2.inc'
include 'General/Digits/3.inc'
include 'General/Digits/4.inc'
include 'General/Digits/5.inc'
include 'General/Digits/6.inc'
include 'General/Digits/7.inc'
include 'General/Digits/8.inc'
include 'General/Digits/9.inc'

;Void---------------------------------------------------------------------------
include 'General/Void/void.inc'

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

include 'Game/General/Blocks/spring.inc'
include 'Game/General/Blocks/spring2.inc'
include 'Game/General/Blocks/spring3.inc'

;Bonuses------------------------------------------------------------------------
include 'Game/General/Bonuses/coin.inc'
include 'Game/General/Bonuses/coin2.inc'
include 'Game/General/Bonuses/coin3.inc'
include 'Game/General/Bonuses/coin4.inc'
include 'Game/General/Bonuses/coin5.inc'
include 'Game/General/Bonuses/coin6.inc'

include 'Game/General/Bonuses/star.inc'

include 'Game/General/Bonuses/heart.inc'
include 'Game/General/Bonuses/heart2.inc'

include 'Game/General/Bonuses/arrow.inc'
include 'Game/General/Bonuses/arrow2.inc'
include 'Game/General/Bonuses/arrow3.inc'
include 'Game/General/Bonuses/arrow4.inc'
include 'Game/General/Bonuses/arrow5.inc'

include 'Game/General/Bonuses/world.inc'
include 'Game/General/Bonuses/world2.inc'

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

;Menu---------------------------------------------------------------------------
;ActiveButtonElements-----------------------------------------------------------
include 'Menu/ActiveButtonElements/activeButtonElement.inc'
include 'Menu/ActiveButtonElements/activeButtonElement2.inc'

;Buttons------------------------------------------------------------------------
include 'Menu/Buttons/levelButton.inc'

include 'Menu/Buttons/menu.inc'

include 'Menu/Buttons/next.inc'

include 'Menu/Buttons/restart.inc'

include 'Menu/Buttons/screenButton.inc'

;Star---------------------------------------------------------------------------
include 'Menu/Star/voidStar.inc'

;Decorations--------------------------------------------------------------------
include 'Menu/Decorations/dandelion.inc'
include 'Menu/Decorations/dandelion2.inc'
include 'Menu/Decorations/dandelion3.inc'
include 'Menu/Decorations/dandelion4.inc'
include 'Menu/Decorations/dandelion5.inc'