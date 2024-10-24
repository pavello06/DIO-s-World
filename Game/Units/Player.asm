struct Player
  entity                  Entity
  canJump                 dd ?
  totalBullets            dd ?
  refBullets              dd ?
  hasHeart                dd ?
  hasArrow                dd ?
  hasWorld                dd ?
  worldTimer              dd ?
  maxWorldTimer           dd ?
  invulnerabilityTimer    dd ?
  maxInvulnerabilityTimer dd ?    
ends

player Player <<<<<Object.GAME, 30, 100, 1, 1>,\ 
              Structs.PLAYER>,\
              <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, standingPlayerTexture>>,\
              <FALSE, 0, 200, 0, standingPlayerFrames>>,\
              0, 0, TRUE>,\
              FALSE, 3, 0, FALSE, FALSE, FALSE, -1, 5000, -1, 2000