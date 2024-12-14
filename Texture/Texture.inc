struct Texture
  width  dd ?
  height dd ?
  color  Color 
ends

;Game===========================================================================
;General------------------------------------------------------------------------
;Blocks-------------------------------------------------------------------------
include 'Game/General/Blocks/block.inc'

include 'Game/General/Blocks/bottomPipe.inc'

include 'Game/General/Blocks/brick.inc'

include 'Game/General/Blocks/luck.inc'
include 'Game/General/Blocks/luck2.inc'
include 'Game/General/Blocks/luck3.inc'
include 'Game/General/Blocks/luck4.inc'

include 'Game/General/Blocks/spawn.inc'

include 'Game/General/Blocks/spring.inc'
include 'Game/General/Blocks/spring2.inc'
include 'Game/General/Blocks/spring3.inc'

include 'Game/General/Blocks/topPipe.inc'

;Bonuses------------------------------------------------------------------------
include 'Game/General/Bonuses/arrow.inc'

include 'Game/General/Bonuses/border.inc'

include 'Game/General/Bonuses/coin.inc'
include 'Game/General/Bonuses/coin2.inc'
include 'Game/General/Bonuses/coin3.inc'
include 'Game/General/Bonuses/coin4.inc'
include 'Game/General/Bonuses/coin5.inc'
include 'Game/General/Bonuses/coin6.inc'

include 'Game/General/Bonuses/heart.inc'
include 'Game/General/Bonuses/heart2.inc'

include 'Game/General/Bonuses/star.inc'

include 'Game/General/Bonuses/world.inc'

;Mobs---------------------------------------------------------------------------
include 'Game/General/Mobs/bee.inc'
include 'Game/General/Mobs/bee2.inc'

include 'Game/General/Mobs/cannon.inc'

include 'Game/General/Mobs/core.inc'

include 'Game/General/Mobs/deadBee.inc'

include 'Game/General/Mobs/deadSnail.inc'

include 'Game/General/Mobs/deadVenusFlycatcher.inc'

include 'Game/General/Mobs/snail.inc'
include 'Game/General/Mobs/snail2.inc'

include 'Game/General/Mobs/spike.inc'

include 'Game/General/Mobs/venusFlycatcher.inc'
include 'Game/General/Mobs/venusFlycatcher2.inc'

;Player-------------------------------------------------------------------------
include 'Game/General/Player/deadPlayerBullet.inc'
include 'Game/General/Player/deadPlayerBullet2.inc'

include 'Game/General/Player/downJumpingPlayer.inc'

include 'Game/General/Player/dyingPlayer.inc'

include 'Game/General/Player/playerBullet.inc'
include 'Game/General/Player/playerBullet2.inc'

include 'Game/General/Player/runningPlayer.inc'
include 'Game/General/Player/runningPlayer2.inc'
include 'Game/General/Player/runningPlayer3.inc'
include 'Game/General/Player/runningPlayer4.inc'
include 'Game/General/Player/runningPlayer5.inc'
include 'Game/General/Player/runningPlayer6.inc'

include 'Game/General/Player/standingPlayer.inc'
include 'Game/General/Player/standingPlayer2.inc'
include 'Game/General/Player/standingPlayer3.inc'

include 'Game/General/Player/upJumpingPlayer.inc'

;Location1----------------------------------------------------------------------
;Blocks-------------------------------------------------------------------------
include 'Game/Location1/Blocks/bigBlock.inc'

include 'Game/Location1/Blocks/blueBlock.inc'

include 'Game/Location1/Blocks/dirt.inc'

include 'Game/Location1/Blocks/grass.inc'

include 'Game/Location1/Blocks/greenBlock.inc'

include 'Game/Location1/Blocks/pinkBlock.inc'

include 'Game/Location1/Blocks/yellowBlock.inc'

;Decorations--------------------------------------------------------------------
include 'Game/Location1/Decorations/bush.inc'

include 'Game/Location1/Decorations/flower.inc'

include 'Game/Location1/Decorations/palm.inc'

include 'Game/Location1/Decorations/shadow.inc'

;Mobs---------------------------------------------------------------------------
include 'Game/Location1/Mobs/deadHoney.inc'

include 'Game/Location1/Mobs/deadOwl.inc'

include 'Game/Location1/Mobs/honey.inc'
include 'Game/Location1/Mobs/honey2.inc'
include 'Game/Location1/Mobs/honey3.inc'
include 'Game/Location1/Mobs/honey4.inc'
include 'Game/Location1/Mobs/honey5.inc'
include 'Game/Location1/Mobs/honey6.inc'

include 'Game/Location1/Mobs/owl.inc'
include 'Game/Location1/Mobs/owl2.inc'
include 'Game/Location1/Mobs/owl3.inc'
include 'Game/Location1/Mobs/owl4.inc'
include 'Game/Location1/Mobs/owl5.inc'
include 'Game/Location1/Mobs/owl6.inc'

;Location2----------------------------------------------------------------------
;Blocks-------------------------------------------------------------------------
include 'Game/Location2/Blocks/oldBrick.inc'
include 'Game/Location2/Blocks/oldBrick2.inc'

include 'Game/Location2/Blocks/stone.inc'

include 'Game/Location2/Blocks/water.inc'
include 'Game/Location2/Blocks/water2.inc'
include 'Game/Location2/Blocks/water3.inc'
include 'Game/Location2/Blocks/water4.inc'
include 'Game/Location2/Blocks/water5.inc'

;Decorations--------------------------------------------------------------------
include 'Game/Location2/Decorations/laser.inc'

include 'Game/Location2/Decorations/pineapple.inc'

include 'Game/Location2/Decorations/web.inc'

;Mobs---------------------------------------------------------------------------
include 'Game/Location2/Mobs/deadCoconut.inc'

include 'Game/Location2/Mobs/deadSigma.inc'

include 'Game/Location2/Mobs/deadSpider.inc'

include 'Game/Location2/Mobs/coconut.inc'
include 'Game/Location2/Mobs/coconut2.inc'
include 'Game/Location2/Mobs/coconut3.inc'
include 'Game/Location2/Mobs/coconut4.inc'
include 'Game/Location2/Mobs/coconut5.inc'
include 'Game/Location2/Mobs/coconut6.inc'

include 'Game/Location2/Mobs/rotatedCoconut.inc'
include 'Game/Location2/Mobs/rotatedCoconut2.inc'
include 'Game/Location2/Mobs/rotatedCoconut3.inc'
include 'Game/Location2/Mobs/rotatedCoconut4.inc'
include 'Game/Location2/Mobs/rotatedCoconut5.inc'
include 'Game/Location2/Mobs/rotatedCoconut6.inc'

include 'Game/Location2/Mobs/nedoSigma.inc'
include 'Game/Location2/Mobs/nedoSigma2.inc'
include 'Game/Location2/Mobs/nedoSigma3.inc'
include 'Game/Location2/Mobs/nedoSigma4.inc'
include 'Game/Location2/Mobs/nedoSigma5.inc'
include 'Game/Location2/Mobs/nedoSigma6.inc'

include 'Game/Location2/Mobs/sigma.inc'
include 'Game/Location2/Mobs/sigma2.inc'
include 'Game/Location2/Mobs/sigma3.inc'
include 'Game/Location2/Mobs/sigma4.inc'
include 'Game/Location2/Mobs/sigma5.inc'
include 'Game/Location2/Mobs/sigma6.inc'

include 'Game/Location2/Mobs/spider.inc'
include 'Game/Location2/Mobs/spider2.inc'

;General========================================================================
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

;Menu===========================================================================
;Buttons------------------------------------------------------------------------
include 'Menu/Buttons/continue.inc'

include 'Menu/Buttons/levelButton.inc'

include 'Menu/Buttons/menu.inc'

include 'Menu/Buttons/next.inc'

include 'Menu/Buttons/restart.inc'

include 'Menu/Buttons/screenButton.inc'

;Decorations--------------------------------------------------------------------
include 'Menu/Decorations/activeButtonElement.inc'
include 'Menu/Decorations/activeButtonElement2.inc'

include 'Menu/Decorations/dandelion.inc'
include 'Menu/Decorations/dandelion2.inc'
include 'Menu/Decorations/dandelion3.inc'
include 'Menu/Decorations/dandelion4.inc'
include 'Menu/Decorations/dandelion5.inc'

include 'Menu/Decorations/toothless.inc'
include 'Menu/Decorations/toothless2.inc'

include 'Menu/Decorations/voidStar.inc'