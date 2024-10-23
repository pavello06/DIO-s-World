;-------------------------------------------------------------------------------
struct Player
  entity                  Entity
  canJump                 dd ?
  totalBullets            dd ?
  refBullets              dd ?
  hasHeart                dd ?
  hasArrow                dd ?
  hasWorld                dd ?
  maxWorldTimer           dd ?
  worldTimer              dd ?
  maxInvulnerabilityTimer dd ?
  invulnerabilityTimer    dd ?  
ends
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
player Player <<<<<Structs.GAME, 30, 100, 1, 1>,\ 
              Structs.PLAYER>,\
              <Structs.NORMAL, Structs.RIGHT, Structs.UP, standingPlayerTexture>>,\
              <FALSE, 200, 0, 0, standingPlayerFrames>>,\
              0, 0, TRUE>,\
              FALSE, 3, 0, FALSE, FALSE, FALSE, 5000, -1, 2000, -1
;-------------------------------------------------------------------------------