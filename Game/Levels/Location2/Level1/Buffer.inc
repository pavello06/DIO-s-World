BufferLevel4:
dd BufferLevel4Length / 4 - 1             

.delete GameObject\
<Object.GAME, 0, -1, 100000, 1>, GameObject.DELETE

.kill GameObject\
<Object.GAME, 0, 0, 100000, 1>, GameObject.KILL

.border1 GameObject\
<Object.GAME, -STONE_WIDTH * Drawing.NORMAL, 0, STONE_WIDTH * Drawing.NORMAL, 6 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK

.border2 GameObject\
<Object.GAME, -2 * STONE_WIDTH * Drawing.NORMAL, 0, STONE_WIDTH * Drawing.NORMAL, 100000>, GameObject.BLOCK

.border3 GameObject\
<Object.GAME, -STONE_WIDTH * Drawing.NORMAL, 7 * STONE_HEIGHT * Drawing.NORMAL, STONE_WIDTH * Drawing.NORMAL, 6 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK

.star1 Bonus\
<<<<Object.GAME, -STONE_WIDTH * Drawing.NORMAL, 6 * STONE_HEIGHT * Drawing.NORMAL, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, starTexture>>,\
<TRUE, 0, 10, 0, starFrames>>,\
Bonus.STAR
;===============================================================================
.stone1 GameObjectWithDrawing\
<<Object.GAME, 0, 0, 9 * STONE_WIDTH * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone2 GameObjectWithDrawing\
<<Object.GAME, 0, 7 * STONE_HEIGHT * Drawing.NORMAL, 2 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone3 GameObjectWithDrawing\
<<Object.GAME, 2 * STONE_WIDTH * Drawing.NORMAL, 8 * STONE_HEIGHT * Drawing.NORMAL, 5 * STONE_WIDTH * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.spawn1 GameObjectWithDrawing\
<<Object.GAME, 1 * STONE_WIDTH * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL, 1 * SPAWN_WIDTH * Drawing.NORMAL, 1 * SPAWN_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, spawnTexture>

.pineapple1 GameObjectWithDrawing\
<<Object.GAME, 7 * STONE_WIDTH * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL, PINEAPPLE_WIDTH * Drawing.NORMAL, PINEAPPLE_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pineappleTexture>
;===============================================================================
.bottomPipe1 GameObjectWithDrawing\
<<Object.GAME, 11 * STONE_WIDTH * Drawing.NORMAL, 0, 1 * BOTTOM_PIPE_WIDTH * Drawing.LITTLE, 80 * BOTTOM_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, bottomPipeTexture>                               
                              
.topPipe1 GameObjectWithDrawing\
<<Object.GAME, 11 * STONE_WIDTH * Drawing.NORMAL - 12, 80 * BOTTOM_PIPE_HEIGHT * Drawing.LITTLE, TOP_PIPE_WIDTH * Drawing.LITTLE, TOP_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, topPipeTexture>

.coin1 Bonus\
<<<<Object.GAME, 11 * STONE_WIDTH * Drawing.NORMAL - 12, (80 * BOTTOM_PIPE_HEIGHT + TOP_PIPE_HEIGHT + 5) * Drawing.LITTLE, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin2 Bonus\
<<<<Object.GAME, 12 * STONE_WIDTH * Drawing.NORMAL - 12, (80 * BOTTOM_PIPE_HEIGHT + TOP_PIPE_HEIGHT + 5) * Drawing.LITTLE, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.bottomPipe2 GameObjectWithDrawing\
<<Object.GAME, 14 * STONE_WIDTH * Drawing.NORMAL, 0, 1 * BOTTOM_PIPE_WIDTH * Drawing.LITTLE, 100 * BOTTOM_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, bottomPipeTexture>                               
                              
.topPipe2 GameObjectWithDrawing\
<<Object.GAME, 14 * STONE_WIDTH * Drawing.NORMAL - 12, 100 * BOTTOM_PIPE_HEIGHT * Drawing.LITTLE, TOP_PIPE_WIDTH * Drawing.LITTLE, TOP_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, topPipeTexture>

.coin3 Bonus\
<<<<Object.GAME, 14 * STONE_WIDTH * Drawing.NORMAL - 12, (100 * BOTTOM_PIPE_HEIGHT + TOP_PIPE_HEIGHT + 5) * Drawing.LITTLE, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin4 Bonus\
<<<<Object.GAME, 15 * STONE_WIDTH * Drawing.NORMAL - 12, (100 * BOTTOM_PIPE_HEIGHT + TOP_PIPE_HEIGHT + 5) * Drawing.LITTLE, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.water1 GameObjectWithAnimation\
<<<Object.GAME, 9 * STONE_WIDTH * Drawing.NORMAL, 0, 9 * WATER_WIDTH * Drawing.NORMAL, WATER_HEIGHT * Drawing.NORMAL>, GameObject.KILL>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, waterTexture>>,\
<FALSE, 0, 100, 0, waterFrames>
;===============================================================================
.stone4 GameObjectWithDrawing\
<<Object.GAME, 18 * STONE_WIDTH * Drawing.NORMAL, 0, 11 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.reverse1 GameObject\
<Object.GAME, 21 * DIRT_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse2 GameObject\
<Object.GAME, 21 * DIRT_WIDTH * Drawing.NORMAL, 9 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.web1 GameObjectWithDrawing\
<<Object.GAME, (21 * DIRT_WIDTH) * Drawing.NORMAL + SPIDER_WIDTH * Drawing.LITTLE / 2, 4 * STONE_HEIGHT * Drawing.NORMAL, WEB_WIDTH * Drawing.LITTLE, 5 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.REVERSEABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.LEFT, Drawing.UP, webTexture>

.spider1 Enemy\
<<<<<Object.GAME, 21 * DIRT_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, SPIDER_WIDTH * Drawing.LITTLE, SPIDER_HEIGHT * Drawing.LITTLE>, GameObject.ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.LEFT, Drawing.UP, spiderTexture>>,\
<FALSE, 0, 100, 0, spiderFrames>>,\
TRUE, 0, 3, FALSE>,\
1, spiderAnimations, 100

.stone5 GameObjectWithDrawing\
<<Object.GAME, 20 * STONE_WIDTH * Drawing.NORMAL, 9 * STONE_HEIGHT * Drawing.NORMAL, 10 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.pineapple2 GameObjectWithDrawing\
<<Object.GAME, 22 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, PINEAPPLE_WIDTH * Drawing.NORMAL, PINEAPPLE_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pineappleTexture>

.brick1 GameObjectWithDrawing\
<<Object.GAME, 25 * STONE_WIDTH * Drawing.NORMAL, 6 * STONE_HEIGHT * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.brick2 GameObjectWithDrawing\
<<Object.GAME, 26 * STONE_WIDTH * Drawing.NORMAL, 6 * STONE_HEIGHT * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.coin5 Bonus\
<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
                              
.luck1 Luck\
<<<<Object.GAME, 27 * STONE_WIDTH * Drawing.NORMAL, 6 * STONE_HEIGHT * Drawing.NORMAL, LUCK_WIDTH * Drawing.NORMAL, LUCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
<FALSE, 0, 150, 0, luckFrames>>,\
Level4.coin5
;===============================================================================
.stone6 GameObjectWithDrawing\
<<Object.GAME, 29 * STONE_WIDTH * Drawing.NORMAL, 0, 18 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.reverse3 GameObject\
<Object.GAME, 29 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse4 GameObject\
<Object.GAME, (47 * STONE_WIDTH - 1) * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.sigma1 Enemy\
<<<<<Object.GAME, 30 * STONE_WIDTH * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL, SIGMA_WIDTH * Drawing.NORMAL, SIGMA_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, sigmaTexture>>,\
<FALSE, 0, 100, 0, sigmaFrames>>,\
TRUE, 7, 0, TRUE>,\
2, sigmaAnimations, 100

.sigma2 Enemy\
<<<<<Object.GAME, 33 * STONE_WIDTH * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL, SIGMA_WIDTH * Drawing.NORMAL, SIGMA_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, sigmaTexture>>,\
<FALSE, 0, 100, 0, sigmaFrames>>,\
TRUE, 7, 0, TRUE>,\
2, sigmaAnimations, 100

.snail1 Snail\
<<<<<<Object.GAME, 35 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL, SNAIL_WIDTH * Drawing.LITTLE, SNAIL_HEIGHT * Drawing.LITTLE>, GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY + GameObject.SNAIL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, snailTexture>>,\
<FALSE, 0, 200, 0, snailFrames>>,\
TRUE, 5, 0, TRUE>,\
3, snailAnimations, 300>,\
3

.pineapple3 GameObjectWithDrawing\
<<Object.GAME, 34 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL, PINEAPPLE_WIDTH * Drawing.NORMAL, PINEAPPLE_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pineappleTexture>

.coin6 Bonus\
<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, starTexture>>,\
<FALSE, 0, 90, 0, starFrames>>,\
Bonus.STAR
                              
.luck2 Luck\
<<<<Object.GAME, 38 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, LUCK_WIDTH * Drawing.NORMAL, LUCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
<FALSE, 0, 150, 0, luckFrames>>,\
Level4.coin6

.special34 GameObject\
<Object.GAME, (38 * STONE_WIDTH - 1) * Drawing.NORMAL, (5 * STONE_HEIGHT + COCONUT_WIDTH) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special35 GameObject\
<Object.GAME, (39 * STONE_WIDTH + COCONUT_WIDTH) * Drawing.NORMAL, (5 * STONE_HEIGHT + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special36 GameObject\
<Object.GAME, (39 * STONE_WIDTH) * Drawing.NORMAL, (4 * STONE_HEIGHT - COCONUT_WIDTH) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special37 GameObject\
<Object.GAME, (38 * STONE_WIDTH - 1 - COCONUT_WIDTH) * Drawing.NORMAL, (4 * STONE_HEIGHT - 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.coconut9 Enemy\
<<<<<Object.GAME, 38 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, COCONUT_WIDTH * Drawing.NORMAL, COCONUT_HEIGHT * Drawing.NORMAL>, GameObject.ROTATEABLE_ENEMY + GameObject.UNTOCHABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, coconutTexture>>,\
<FALSE, 0, 100, 0, coconutFrames>>,\
TRUE, 5, 0, FALSE>,\
1, coconutAnimations, 100

.coconut10 Enemy\
<<<<<Object.GAME, 39 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, COCONUT_WIDTH * Drawing.NORMAL, COCONUT_HEIGHT * Drawing.NORMAL>, GameObject.ROTATEABLE_ENEMY + GameObject.UNTOCHABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, rotatedCoconutTexture>>,\
<FALSE, 0, 100, 0, rotatedCoconutFrames>>,\
TRUE, 0, -5, FALSE>,\
1, coconutAnimations, 100

.coconut11 Enemy\
<<<<<Object.GAME, 38 * STONE_WIDTH * Drawing.NORMAL, (3 * STONE_HEIGHT + 1) * Drawing.NORMAL, COCONUT_WIDTH * Drawing.NORMAL, COCONUT_HEIGHT * Drawing.NORMAL>, GameObject.ROTATEABLE_ENEMY + GameObject.UNTOCHABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.LEFT, Drawing.DOWN, coconutTexture>>,\
<FALSE, 0, 100, 0, coconutFrames>>,\
TRUE, -5, 0, FALSE>,\
1, coconutAnimations, 100

.coconut12 Enemy\
<<<<<Object.GAME, (37 * STONE_WIDTH + 1) * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, COCONUT_WIDTH * Drawing.NORMAL, COCONUT_HEIGHT * Drawing.NORMAL>, GameObject.ROTATEABLE_ENEMY + GameObject.UNTOCHABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.LEFT, Drawing.DOWN, rotatedCoconutTexture>>,\
<FALSE, 0, 100, 0, rotatedCoconutFrames>>,\
TRUE, 0, 5, FALSE>,\
1, coconutAnimations, 100
;===============================================================================
.stone7 GameObjectWithDrawing\
<<Object.GAME, 47 * STONE_WIDTH * Drawing.NORMAL, 0, 2 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone8 GameObjectWithDrawing\
<<Object.GAME, 49 * STONE_WIDTH * Drawing.NORMAL, 0, 10 * STONE_WIDTH * Drawing.NORMAL, 1 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.spike1 GameObjectWithDrawing\
<<Object.GAME, 49 * STONE_WIDTH * Drawing.NORMAL, 1 * STONE_HEIGHT * Drawing.NORMAL, 10 * STONE_WIDTH * Drawing.NORMAL, 1 * SPIKE_HEIGHT * Drawing.NORMAL>, GameObject.KILL>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, spikeTexture>

.stone9 GameObjectWithDrawing\
<<Object.GAME, 52 * STONE_WIDTH * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL, 4 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.special1 GameObject\
<Object.GAME, (52 * STONE_WIDTH - 1) * Drawing.NORMAL, (5 * STONE_HEIGHT + COCONUT_WIDTH) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special2 GameObject\
<Object.GAME, (56 * STONE_WIDTH + COCONUT_WIDTH) * Drawing.NORMAL, (5 * STONE_HEIGHT + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special3 GameObject\
<Object.GAME, (56 * STONE_WIDTH) * Drawing.NORMAL, (3 * STONE_HEIGHT - COCONUT_WIDTH) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special4 GameObject\
<Object.GAME, (52 * STONE_WIDTH - 1 - COCONUT_WIDTH) * Drawing.NORMAL, (3 * STONE_HEIGHT - 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.coconut1 Enemy\
<<<<<Object.GAME, 52 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, COCONUT_WIDTH * Drawing.NORMAL, COCONUT_HEIGHT * Drawing.NORMAL>, GameObject.ROTATEABLE_ENEMY + GameObject.UNTOCHABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, coconutTexture>>,\
<FALSE, 0, 100, 0, coconutFrames>>,\
TRUE, 5, 0, FALSE>,\
1, coconutAnimations, 100
;===============================================================================
.stone10 GameObjectWithDrawing\
<<Object.GAME, 59 * STONE_WIDTH * Drawing.NORMAL, 0, 2 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone11 GameObjectWithDrawing\
<<Object.GAME, 61 * STONE_WIDTH * Drawing.NORMAL, 0, 19 * STONE_WIDTH * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.coin7 Bonus\
<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
                              
.luck3 Luck\
<<<<Object.GAME, 63 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, LUCK_WIDTH * Drawing.NORMAL, LUCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
<FALSE, 0, 150, 0, luckFrames>>,\
Level4.coin7

.brick3 GameObjectWithDrawing\
<<Object.GAME, 64 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.brick4 GameObjectWithDrawing\
<<Object.GAME, 65 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.coin8 Bonus\
<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
                              
.luck4 Luck\
<<<<Object.GAME, 66 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, LUCK_WIDTH * Drawing.NORMAL, LUCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
<FALSE, 0, 150, 0, luckFrames>>,\
Level4.coin8

.reverse5 GameObject\
<Object.GAME, 63 * STONE_WIDTH * Drawing.NORMAL, 6 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse6 GameObject\
<Object.GAME, (67 * STONE_WIDTH - 1) * Drawing.NORMAL, 6 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.sigma3 Enemy\
<<<<<Object.GAME, 64 * STONE_WIDTH * Drawing.NORMAL, 6 * STONE_HEIGHT * Drawing.NORMAL, SIGMA_WIDTH * Drawing.NORMAL, SIGMA_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, sigmaTexture>>,\
<FALSE, 0, 100, 0, sigmaFrames>>,\
TRUE, 7, 0, TRUE>,\
2, sigmaAnimations, 100

.reverse5_1 GameObject\
<Object.GAME, 61 * STONE_WIDTH * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse6_1 GameObject\
<Object.GAME, (70 * STONE_WIDTH - 1) * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.pineapple4 GameObjectWithDrawing\
<<Object.GAME, 70 * STONE_WIDTH * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL, PINEAPPLE_WIDTH * Drawing.NORMAL, PINEAPPLE_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pineappleTexture>

.coin9 Bonus\
<<<<Object.GAME, 74 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin10 Bonus\
<<<<Object.GAME, 75 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin11 Bonus\
<<<<Object.GAME, 76 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin12 Bonus\
<<<<Object.GAME, 77 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin13 Bonus\
<<<<Object.GAME, 74 * STONE_WIDTH * Drawing.NORMAL, 6 * STONE_HEIGHT * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin14 Bonus\
<<<<Object.GAME, 75 * STONE_WIDTH * Drawing.NORMAL, 6 * STONE_HEIGHT * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin15 Bonus\
<<<<Object.GAME, 76 * STONE_WIDTH * Drawing.NORMAL, 6 * STONE_HEIGHT * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin16 Bonus\
<<<<Object.GAME, 77 * STONE_WIDTH * Drawing.NORMAL, 6 * STONE_HEIGHT * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.core1 Bullet\
<<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, CORE_WIDTH * Drawing.LITTLE, CORE_HEIGHT * Drawing.LITTLE>, GameObject.UNBEATABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coreTexture>>,\
<FALSE, 0, 1000, 0, coreFrames>>,\
FALSE, -11, 0, FALSE>,\
TRUE, coreAnimations

.core2 Bullet\
<<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, CORE_WIDTH * Drawing.LITTLE, CORE_HEIGHT * Drawing.LITTLE>, GameObject.UNBEATABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coreTexture>>,\
<FALSE, 0, 1000, 0, coreFrames>>,\
FALSE, -11, 0, FALSE>,\
TRUE, coreAnimations

.core3 Bullet\
<<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, CORE_WIDTH * Drawing.LITTLE, CORE_HEIGHT * Drawing.LITTLE>, GameObject.UNBEATABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coreTexture>>,\
<FALSE, 0, 1000, 0, coreFrames>>,\
FALSE, -11, 0, FALSE>,\
TRUE, coreAnimations

.cores1 dd 3, Level4.core1, Level4.core2, Level4.core3

.cannon1 EnemyWithBullets\
<<<<<<<Object.GAME, 79 * STONE_WIDTH * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL, CANNON_WIDTH * Drawing.NORMAL, CANNON_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, cannonTexture>>,\
<0, 0, 0, 0, 0>>,\
0, 0, 0, 0>,\
0, 0, 0>,\
0, 1700>,\
Level4.cores1
;===============================================================================
.water2 GameObjectWithAnimation\
<<<Object.GAME, 80 * STONE_WIDTH * Drawing.NORMAL, 0, 3 * WATER_WIDTH * Drawing.NORMAL, WATER_HEIGHT * Drawing.NORMAL>, GameObject.KILL>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, waterTexture>>,\
<FALSE, 0, 100, 0, waterFrames>

.stone12 GameObjectWithDrawing\
<<Object.GAME, 83 * STONE_WIDTH * Drawing.NORMAL, 0, 17 * STONE_WIDTH * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone13 GameObjectWithDrawing\
<<Object.GAME, 87 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, 2 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone14 GameObjectWithDrawing\
<<Object.GAME, 92 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, 2 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone15 GameObjectWithDrawing\
<<Object.GAME, 98 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, 2 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.special5 GameObject\
<Object.GAME, (87 * STONE_WIDTH - 1) * Drawing.NORMAL, (6 * STONE_HEIGHT + COCONUT_WIDTH) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special6 GameObject\
<Object.GAME, (89 * STONE_WIDTH + COCONUT_WIDTH) * Drawing.NORMAL, (6 * STONE_HEIGHT + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special7 GameObject\
<Object.GAME, (89 * STONE_WIDTH) * Drawing.NORMAL, (4 * STONE_HEIGHT - COCONUT_WIDTH) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special8 GameObject\
<Object.GAME, (87 * STONE_WIDTH - 1 - COCONUT_WIDTH) * Drawing.NORMAL, (4 * STONE_HEIGHT - 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.coconut2 Enemy\
<<<<<Object.GAME, 88 * STONE_WIDTH * Drawing.NORMAL, 6 * STONE_HEIGHT * Drawing.NORMAL, COCONUT_WIDTH * Drawing.NORMAL, COCONUT_HEIGHT * Drawing.NORMAL>, GameObject.ROTATEABLE_ENEMY + GameObject.UNTOCHABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, coconutTexture>>,\
<FALSE, 0, 100, 0, coconutFrames>>,\
TRUE, 5, 0, FALSE>,\
1, coconutAnimations, 100

.special9 GameObject\
<Object.GAME, (92 * STONE_WIDTH - 1) * Drawing.NORMAL, (6 * STONE_HEIGHT + COCONUT_WIDTH) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special10 GameObject\
<Object.GAME, (94 * STONE_WIDTH + COCONUT_WIDTH) * Drawing.NORMAL, (6 * STONE_HEIGHT + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special11 GameObject\
<Object.GAME, (94 * STONE_WIDTH) * Drawing.NORMAL, (4 * STONE_HEIGHT - COCONUT_WIDTH) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special12 GameObject\
<Object.GAME, (92 * STONE_WIDTH - 1 - COCONUT_WIDTH) * Drawing.NORMAL, (4 * STONE_HEIGHT - 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.coconut3 Enemy\
<<<<<Object.GAME, 94 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, COCONUT_WIDTH * Drawing.NORMAL, COCONUT_HEIGHT * Drawing.NORMAL>, GameObject.ROTATEABLE_ENEMY + GameObject.UNTOCHABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, rotatedCoconutTexture>>,\
<FALSE, 0, 100, 0, rotatedCoconutFrames>>,\
TRUE, 0, -5, FALSE>,\
1, coconutAnimations, 100

.special13 GameObject\
<Object.GAME, (98 * STONE_WIDTH - 1) * Drawing.NORMAL, (6 * STONE_HEIGHT + COCONUT_WIDTH) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special14 GameObject\
<Object.GAME, (100 * STONE_WIDTH + COCONUT_WIDTH) * Drawing.NORMAL, (6 * STONE_HEIGHT + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special15 GameObject\
<Object.GAME, (100 * STONE_WIDTH) * Drawing.NORMAL, (4 * STONE_HEIGHT - COCONUT_WIDTH) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special16 GameObject\
<Object.GAME, (98 * STONE_WIDTH - 1 - COCONUT_WIDTH) * Drawing.NORMAL, (4 * STONE_HEIGHT - 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.coconut4 Enemy\
<<<<<Object.GAME, 99 * STONE_WIDTH * Drawing.NORMAL, (4 * STONE_HEIGHT - COCONUT_HEIGHT) * Drawing.NORMAL, COCONUT_WIDTH * Drawing.NORMAL, COCONUT_HEIGHT * Drawing.NORMAL>, GameObject.ROTATEABLE_ENEMY + GameObject.UNTOCHABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.LEFT, Drawing.DOWN, coconutTexture>>,\
<FALSE, 0, 100, 0, coconutFrames>>,\
TRUE, -5, 0, FALSE>,\
1, coconutAnimations, 100
;===============================================================================
.water3 GameObjectWithAnimation\
<<<Object.GAME, 100 * STONE_WIDTH * Drawing.NORMAL, 0, 7 * WATER_WIDTH * Drawing.NORMAL, WATER_HEIGHT * Drawing.NORMAL>, GameObject.KILL>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, waterTexture>>,\
<FALSE, 0, 100, 0, waterFrames>

.brickWitBreakTimer0 BrickWithBreakTimer\
<<<<Object.GAME, 102 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, OLD_BRICK_WIDTH * Drawing.NORMAL, OLD_BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.TOP_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, oldBrickTexture>>,\
<FALSE, -1, 200, 0, oldBrickFrames>>,\
-1, 700

.brickWitBreakTimer1 BrickWithBreakTimer\
<<<<Object.GAME, 103 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, OLD_BRICK_WIDTH * Drawing.NORMAL, OLD_BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.TOP_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, oldBrickTexture>>,\
<FALSE, -1, 200, 0, oldBrickFrames>>,\
-1, 700

.brickWitBreakTimer2 BrickWithBreakTimer\
<<<<Object.GAME, 104 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, OLD_BRICK_WIDTH * Drawing.NORMAL, OLD_BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.TOP_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, oldBrickTexture>>,\
<FALSE, -1, 200, 0, oldBrickFrames>>,\
-1, 700

.brickWitBreakTimer3 BrickWithBreakTimer\
<<<<Object.GAME, 105 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, OLD_BRICK_WIDTH * Drawing.NORMAL, OLD_BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.TOP_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, oldBrickTexture>>,\
<FALSE, -1, 200, 0, oldBrickFrames>>,\
-1, 700

.brickWitBreakTimer4 BrickWithBreakTimer\
<<<<Object.GAME, 106 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, OLD_BRICK_WIDTH * Drawing.NORMAL, OLD_BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.TOP_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, oldBrickTexture>>,\
<FALSE, -1, 200, 0, oldBrickFrames>>,\
-1, 700

.stone16 GameObjectWithDrawing\
<<Object.GAME, 107 * STONE_WIDTH * Drawing.NORMAL, 0, 10 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone17 GameObjectWithDrawing\
<<Object.GAME, 106 * STONE_WIDTH * Drawing.NORMAL, 10 * STONE_HEIGHT * Drawing.NORMAL, 29 * STONE_WIDTH * Drawing.NORMAL, 1 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone17_2 GameObjectWithDrawing\
<<Object.GAME, 135 * STONE_WIDTH * Drawing.NORMAL, (10 * STONE_HEIGHT - 1) * Drawing.NORMAL, 1 * STONE_WIDTH * Drawing.NORMAL, 1 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone17_3 GameObjectWithDrawing\
<<Object.GAME, 136 * STONE_WIDTH * Drawing.NORMAL, 10 * STONE_HEIGHT * Drawing.NORMAL, 4 * STONE_WIDTH * Drawing.NORMAL, 1 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.coin17 Bonus\
<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
                              
.luck5 Luck\
<<<<Object.GAME, 109 * STONE_WIDTH * Drawing.NORMAL, 7 * STONE_HEIGHT * Drawing.NORMAL, LUCK_WIDTH * Drawing.NORMAL, LUCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
<FALSE, 0, 150, 0, luckFrames>>,\
Level4.coin8

.pineapple5 GameObjectWithDrawing\
<<Object.GAME, 111 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, PINEAPPLE_WIDTH * Drawing.NORMAL, PINEAPPLE_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pineappleTexture>

.reverse7 GameObject\
<Object.GAME, 107 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse8 GameObject\
<Object.GAME, (117 * STONE_WIDTH - 1) * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.sigma4 Enemy\
<<<<<Object.GAME, 108 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, SIGMA_WIDTH * Drawing.NORMAL, SIGMA_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, sigmaTexture>>,\
<FALSE, 0, 100, 0, sigmaFrames>>,\
TRUE, 7, 0, TRUE>,\
2, sigmaAnimations, 100
;===============================================================================
.water4 GameObjectWithAnimation\
<<<Object.GAME, 117 * STONE_WIDTH * Drawing.NORMAL, 0, 2 * WATER_WIDTH * Drawing.NORMAL, WATER_HEIGHT * Drawing.NORMAL>, GameObject.KILL>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, waterTexture>>,\
<FALSE, 0, 100, 0, waterFrames>

.stone18 GameObjectWithDrawing\
<<Object.GAME, 119 * STONE_WIDTH * Drawing.NORMAL, 0, 5 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.water5 GameObjectWithAnimation\
<<<Object.GAME, 124 * STONE_WIDTH * Drawing.NORMAL, 0, 3 * WATER_WIDTH * Drawing.NORMAL, WATER_HEIGHT * Drawing.NORMAL>, GameObject.KILL>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, waterTexture>>,\
<FALSE, 0, 100, 0, waterFrames>

.stone19 GameObjectWithDrawing\
<<Object.GAME, 127 * STONE_WIDTH * Drawing.NORMAL, 0, 6 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.brickWitBreakTimer5 BrickWithBreakTimer\
<<<<Object.GAME, 124 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, OLD_BRICK_WIDTH * Drawing.NORMAL, OLD_BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.TOP_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, oldBrickTexture>>,\
<FALSE, -1, 200, 0, oldBrickFrames>>,\
-1, 700

.brickWitBreakTimer6 BrickWithBreakTimer\
<<<<Object.GAME, 125 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, OLD_BRICK_WIDTH * Drawing.NORMAL, OLD_BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.TOP_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, oldBrickTexture>>,\
<FALSE, -1, 200, 0, oldBrickFrames>>,\
-1, 700

.brickWitBreakTimer7 BrickWithBreakTimer\
<<<<Object.GAME, 126 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, OLD_BRICK_WIDTH * Drawing.NORMAL, OLD_BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.TOP_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, oldBrickTexture>>,\
<FALSE, -1, 200, 0, oldBrickFrames>>,\
-1, 700

.arrow1 Bonus\
<<<<Object.GAME, 125 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, ARROW_WIDTH * Drawing.SMALL, ARROW_HEIGHT * Drawing.SMALL>, GameObject.BONUS_FOR_PLAYER>,\
<Drawing.SMALL, Drawing.RIGHT, Drawing.UP, arrowTexture>>,\
<FALSE, 0, 100, 0, arrowFrames>>,\
Bonus.ARROW

.stone20 GameObjectWithDrawing\
<<Object.GAME, 120 * STONE_WIDTH * Drawing.NORMAL, 6 * STONE_HEIGHT * Drawing.NORMAL, 11 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.special17 GameObject\
<Object.GAME, (120 * STONE_WIDTH - 1) * Drawing.NORMAL, (8 * STONE_HEIGHT + COCONUT_WIDTH) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special18 GameObject\
<Object.GAME, (131 * STONE_WIDTH + COCONUT_WIDTH) * Drawing.NORMAL, (8 * STONE_HEIGHT + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special19 GameObject\
<Object.GAME, (131 * STONE_WIDTH) * Drawing.NORMAL, (6 * STONE_HEIGHT - COCONUT_WIDTH) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special20 GameObject\
<Object.GAME, (120 * STONE_WIDTH - 1 - COCONUT_WIDTH) * Drawing.NORMAL, (6 * STONE_HEIGHT - 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.coconut5 Enemy\
<<<<<Object.GAME, 121 * STONE_WIDTH * Drawing.NORMAL, 8 * STONE_HEIGHT * Drawing.NORMAL, COCONUT_WIDTH * Drawing.NORMAL, COCONUT_HEIGHT * Drawing.NORMAL>, GameObject.ROTATEABLE_ENEMY + GameObject.UNTOCHABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, coconutTexture>>,\
<FALSE, 0, 100, 0, coconutFrames>>,\
TRUE, 5, 0, FALSE>,\
1, coconutAnimations, 100

.special21 GameObject\
<Object.GAME, (119 * STONE_WIDTH - 1) * Drawing.NORMAL, (5 * STONE_HEIGHT + COCONUT_WIDTH) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special22 GameObject\
<Object.GAME, (124 * STONE_WIDTH + COCONUT_WIDTH) * Drawing.NORMAL, (5 * STONE_HEIGHT + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special23 GameObject\
<Object.GAME, (124 * STONE_WIDTH) * Drawing.NORMAL, (0 * STONE_HEIGHT - COCONUT_WIDTH) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special24 GameObject\
<Object.GAME, (119 * STONE_WIDTH - 1 - COCONUT_WIDTH) * Drawing.NORMAL, (0 * STONE_HEIGHT - 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.coconut6 Enemy\
<<<<<Object.GAME, 120 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, COCONUT_WIDTH * Drawing.NORMAL, COCONUT_HEIGHT * Drawing.NORMAL>, GameObject.ROTATEABLE_ENEMY + GameObject.UNTOCHABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, coconutTexture>>,\
<FALSE, 0, 100, 0, coconutFrames>>,\
TRUE, 5, 0, FALSE>,\
1, coconutAnimations, 100
;===============================================================================
.stone21 GameObjectWithDrawing\
<<Object.GAME, 133 * STONE_WIDTH * Drawing.NORMAL, 0, 6 * STONE_WIDTH * Drawing.NORMAL, 6 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.reverse9 GameObject\
<Object.GAME, 135 * DIRT_WIDTH * Drawing.NORMAL, 6 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse10 GameObject\
<Object.GAME, 135 * DIRT_WIDTH * Drawing.NORMAL, 10 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.star2 Bonus\
<<<<Object.GAME, 135 * DIRT_WIDTH * Drawing.NORMAL, (10 * STONE_HEIGHT + 5) * Drawing.NORMAL, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, starTexture>>,\
<TRUE, 0, 10, 0, starFrames>>,\
Bonus.STAR

.web2 GameObjectWithDrawing\
<<Object.GAME, (135 * DIRT_WIDTH) * Drawing.NORMAL + SPIDER_WIDTH * Drawing.LITTLE / 2, 6 * STONE_HEIGHT * Drawing.NORMAL, WEB_WIDTH * Drawing.LITTLE, (4 * STONE_HEIGHT - 1) * Drawing.NORMAL>, GameObject.REVERSEABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.LEFT, Drawing.UP, webTexture>

.spider2 Enemy\
<<<<<Object.GAME, 135 * DIRT_WIDTH * Drawing.NORMAL, 7 * STONE_HEIGHT * Drawing.NORMAL, SPIDER_WIDTH * Drawing.LITTLE, SPIDER_HEIGHT * Drawing.LITTLE>, GameObject.ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.LEFT, Drawing.UP, spiderTexture>>,\
<FALSE, 0, 100, 0, spiderFrames>>,\
TRUE, 0, 3, FALSE>,\
1, spiderAnimations, 100

.water6 GameObjectWithAnimation\
<<<Object.GAME, 139 * STONE_WIDTH * Drawing.NORMAL, 0, 3 * WATER_WIDTH * Drawing.NORMAL, WATER_HEIGHT * Drawing.NORMAL>, GameObject.KILL>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, waterTexture>>,\
<FALSE, 0, 100, 0, waterFrames>
;===============================================================================
.stone22 GameObjectWithDrawing\
<<Object.GAME, 142 * STONE_WIDTH * Drawing.NORMAL, 0, 28 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.bottomPipe3 GameObjectWithDrawing\
<<Object.GAME, 144 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, 1 * BOTTOM_PIPE_WIDTH * Drawing.LITTLE, 10 * BOTTOM_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, bottomPipeTexture>                               
                              
.topPipe3 GameObjectWithDrawing\
<<Object.GAME, 144 * STONE_WIDTH * Drawing.NORMAL - 12, (8 + 4 * STONE_HEIGHT) * Drawing.NORMAL, TOP_PIPE_WIDTH * Drawing.LITTLE, TOP_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, topPipeTexture>

.reverse11 GameObject\
<Object.GAME, (144 * STONE_WIDTH + 6) * Drawing.NORMAL, (4 * STONE_HEIGHT) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE + GameObject.SPECIAL

.reverse12 GameObject\
<Object.GAME, (144 * STONE_WIDTH + 6) * Drawing.NORMAL, (4 * STONE_HEIGHT + 42) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE + GameObject.SPECIAL

.venusFlycatcher1 EnemyWithStopTimer\
<<<<<<<Object.GAME, (144 * STONE_WIDTH + 2) * Drawing.NORMAL, (4 * STONE_HEIGHT + 10) * Drawing.NORMAL, VENUS_FLYCATCHER_WIDTH * Drawing.LITTLE, VENUS_FLYCATCHER_HEIGHT * Drawing.LITTLE>, GameObject.UNTOCHABLE_ENEMY + GameObject.REVERSEABLE_ENEMY + GameObject.STOPABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, venusFlycatcherTexture>>,\
<FALSE, 0, 300, 0, venusFlycatcherFrames>>,\
TRUE, 0, 2, FALSE>,\
1, venusFlycatcherAnimations, 200>,\
-1, 2000>

.reverse13 GameObject\
<Object.GAME, 146 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse14 GameObject\
<Object.GAME, (153 * STONE_WIDTH - 1) * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.sigma5 Enemy\
<<<<<Object.GAME, 147 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, SIGMA_WIDTH * Drawing.NORMAL, SIGMA_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, sigmaTexture>>,\
<FALSE, 0, 100, 0, sigmaFrames>>,\
TRUE, 7, 0, TRUE>,\
2, sigmaAnimations, 100

.bottomPipe4 GameObjectWithDrawing\
<<Object.GAME, 153 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, 1 * BOTTOM_PIPE_WIDTH * Drawing.LITTLE, 20 * BOTTOM_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, bottomPipeTexture>                               
                              
.topPipe4 GameObjectWithDrawing\
<<Object.GAME, 153 * STONE_WIDTH * Drawing.NORMAL - 12, (16 + 4 * STONE_HEIGHT) * Drawing.NORMAL, TOP_PIPE_WIDTH * Drawing.LITTLE, TOP_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, topPipeTexture>

.reverse15 GameObject\
<Object.GAME, 155 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse16 GameObject\
<Object.GAME, (159 * STONE_WIDTH + 10) * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.snail2 Snail\
<<<<<<Object.GAME, 156 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL, SNAIL_WIDTH * Drawing.LITTLE, SNAIL_HEIGHT * Drawing.LITTLE>, GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY + GameObject.SNAIL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, snailTexture>>,\
<FALSE, 0, 200, 0, snailFrames>>,\
TRUE, 5, 0, TRUE>,\
3, snailAnimations, 300>,\
3

.bottomPipe5 GameObjectWithDrawing\
<<Object.GAME, 160 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, 1 * BOTTOM_PIPE_WIDTH * Drawing.LITTLE, 10 * BOTTOM_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, bottomPipeTexture>                               
                              
.topPipe5 GameObjectWithDrawing\
<<Object.GAME, 160 * STONE_WIDTH * Drawing.NORMAL - 12, (8 + 4 * STONE_HEIGHT) * Drawing.NORMAL, TOP_PIPE_WIDTH * Drawing.LITTLE, TOP_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, topPipeTexture>

.reverse17 GameObject\
<Object.GAME, 162 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse18 GameObject\
<Object.GAME, (170 * STONE_WIDTH - 1) * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.sigma6 Enemy\
<<<<<Object.GAME, 163 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, SIGMA_WIDTH * Drawing.NORMAL, SIGMA_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, sigmaTexture>>,\
<FALSE, 0, 100, 0, sigmaFrames>>,\
TRUE, 7, 0, TRUE>,\
2, sigmaAnimations, 100

.pineapple6 GameObjectWithDrawing\
<<Object.GAME, 168 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, PINEAPPLE_WIDTH * Drawing.NORMAL, PINEAPPLE_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pineappleTexture>
;===============================================================================
.stone23 GameObjectWithDrawing\
<<Object.GAME, 170 * STONE_WIDTH * Drawing.NORMAL, 0, 4 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone24 GameObjectWithDrawing\
<<Object.GAME, 174 * STONE_WIDTH * Drawing.NORMAL, 0, 2 * STONE_WIDTH * Drawing.NORMAL, 7 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.spring1 GameObjectWithAnimation\
<<<Object.GAME, 171 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL, SPRING_WIDTH * Drawing.LITTLE, SPRING_HEIGHT * Drawing.LITTLE>, GameObject.JUMP>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, springTexture>>,\
<TRUE, -1, 50, 0, springFrames>

.water7 GameObjectWithAnimation\
<<<Object.GAME, 176 * STONE_WIDTH * Drawing.NORMAL, 0, 12 * WATER_WIDTH * Drawing.NORMAL, WATER_HEIGHT * Drawing.NORMAL>, GameObject.KILL>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, waterTexture>>,\
<FALSE, 0, 100, 0, waterFrames>

.bottomPipe6 GameObjectWithDrawing\
<<Object.GAME, 179 * STONE_WIDTH * Drawing.NORMAL, 0, 1 * BOTTOM_PIPE_WIDTH * Drawing.LITTLE, 100 * BOTTOM_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, bottomPipeTexture>                               
                              
.topPipe6 GameObjectWithDrawing\
<<Object.GAME, 179 * STONE_WIDTH * Drawing.NORMAL - 12, 100 * BOTTOM_PIPE_HEIGHT * Drawing.LITTLE, TOP_PIPE_WIDTH * Drawing.LITTLE, TOP_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, topPipeTexture>

.bottomPipe7 GameObjectWithDrawing\
<<Object.GAME, 184 * STONE_WIDTH * Drawing.NORMAL, 0, 1 * BOTTOM_PIPE_WIDTH * Drawing.LITTLE, 80 * BOTTOM_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, bottomPipeTexture>                               
                              
.topPipe7 GameObjectWithDrawing\
<<Object.GAME, 184 * STONE_WIDTH * Drawing.NORMAL - 12, 80 * BOTTOM_PIPE_HEIGHT * Drawing.LITTLE, TOP_PIPE_WIDTH * Drawing.LITTLE, TOP_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, topPipeTexture>

.reverse19 GameObject\
<Object.GAME, (184 * STONE_WIDTH + 6) * Drawing.NORMAL, (59) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE + GameObject.SPECIAL

.reverse20 GameObject\
<Object.GAME, (184 * STONE_WIDTH + 6) * Drawing.NORMAL, (98) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE + GameObject.SPECIAL

.venusFlycatcher2 EnemyWithStopTimer\
<<<<<<<Object.GAME, (184 * STONE_WIDTH + 2) * Drawing.NORMAL, (60) * Drawing.NORMAL, VENUS_FLYCATCHER_WIDTH * Drawing.LITTLE, VENUS_FLYCATCHER_HEIGHT * Drawing.LITTLE>, GameObject.UNTOCHABLE_ENEMY + GameObject.REVERSEABLE_ENEMY + GameObject.STOPABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, venusFlycatcherTexture>>,\
<FALSE, 0, 300, 0, venusFlycatcherFrames>>,\
TRUE, 0, 2, FALSE>,\
1, venusFlycatcherAnimations, 200>,\
-1, 2000>
;===============================================================================
.stone25 GameObjectWithDrawing\
<<Object.GAME, 188 * STONE_WIDTH * Drawing.NORMAL, 0, 15 * STONE_WIDTH * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.pineapple7 GameObjectWithDrawing\
<<Object.GAME, 190 * STONE_WIDTH * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL, PINEAPPLE_WIDTH * Drawing.NORMAL, PINEAPPLE_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pineappleTexture>

.pineapple8 GameObjectWithDrawing\
<<Object.GAME, 196 * STONE_WIDTH * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL, PINEAPPLE_WIDTH * Drawing.NORMAL, PINEAPPLE_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pineappleTexture>

.reverse21 GameObject\
<Object.GAME, 188 * STONE_WIDTH * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse22 GameObject\
<Object.GAME, (200 * STONE_WIDTH - 1) * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.sigma7 Enemy\
<<<<<Object.GAME, 189 * STONE_WIDTH * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL, SIGMA_WIDTH * Drawing.NORMAL, SIGMA_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, sigmaTexture>>,\
<FALSE, 0, 100, 0, sigmaFrames>>,\
TRUE, 7, 0, TRUE>,\
2, sigmaAnimations, 100

.core4 Bullet\
<<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, CORE_WIDTH * Drawing.LITTLE, CORE_HEIGHT * Drawing.LITTLE>, GameObject.UNBEATABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coreTexture>>,\
<FALSE, 0, 1000, 0, coreFrames>>,\
FALSE, -11, 0, FALSE>,\
TRUE, coreAnimations

.core5 Bullet\
<<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, CORE_WIDTH * Drawing.LITTLE, CORE_HEIGHT * Drawing.LITTLE>, GameObject.UNBEATABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coreTexture>>,\
<FALSE, 0, 1000, 0, coreFrames>>,\
FALSE, -11, 0, FALSE>,\
TRUE, coreAnimations

.core6 Bullet\
<<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, CORE_WIDTH * Drawing.LITTLE, CORE_HEIGHT * Drawing.LITTLE>, GameObject.UNBEATABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coreTexture>>,\
<FALSE, 0, 1000, 0, coreFrames>>,\
FALSE, -11, 0, FALSE>,\
TRUE, coreAnimations

.cores2 dd 3, Level4.core4, Level4.core5, Level4.core6

.cannon2 EnemyWithBullets\
<<<<<<<Object.GAME, 201 * STONE_WIDTH * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL, CANNON_WIDTH * Drawing.NORMAL, CANNON_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, cannonTexture>>,\
<0, 0, 0, 0, 0>>,\
0, 0, 0, 0>,\
0, 0, 0>,\
0, 1700>,\
Level4.cores2
;===============================================================================
.stone26 GameObjectWithDrawing\
<<Object.GAME, 203 * STONE_WIDTH * Drawing.NORMAL, 0, 10 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone27 GameObjectWithDrawing\
<<Object.GAME, 203 * STONE_WIDTH * Drawing.NORMAL, 10 * STONE_HEIGHT * Drawing.NORMAL, 23 * STONE_WIDTH * Drawing.NORMAL, 1 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.reverse23 GameObject\
<Object.GAME, 205 * DIRT_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse24 GameObject\
<Object.GAME, 205 * DIRT_WIDTH * Drawing.NORMAL, 10 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.web3 GameObjectWithDrawing\
<<Object.GAME, (205 * DIRT_WIDTH) * Drawing.NORMAL + SPIDER_WIDTH * Drawing.LITTLE / 2, 5 * STONE_HEIGHT * Drawing.NORMAL, WEB_WIDTH * Drawing.LITTLE, 5 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.REVERSEABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.LEFT, Drawing.UP, webTexture>

.spider3 Enemy\
<<<<<Object.GAME, 205 * DIRT_WIDTH * Drawing.NORMAL, 7 * STONE_HEIGHT * Drawing.NORMAL, SPIDER_WIDTH * Drawing.LITTLE, SPIDER_HEIGHT * Drawing.LITTLE>, GameObject.ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.LEFT, Drawing.UP, spiderTexture>>,\
<FALSE, 0, 100, 0, spiderFrames>>,\
TRUE, 0, 3, FALSE>,\
1, spiderAnimations, 100

.pineapple9 GameObjectWithDrawing\
<<Object.GAME, 207 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, PINEAPPLE_WIDTH * Drawing.NORMAL, PINEAPPLE_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pineappleTexture>

.reverse25 GameObject\
<Object.GAME, 209 * DIRT_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse26 GameObject\
<Object.GAME, 209 * DIRT_WIDTH * Drawing.NORMAL, 10 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.web4 GameObjectWithDrawing\
<<Object.GAME, (209 * DIRT_WIDTH) * Drawing.NORMAL + SPIDER_WIDTH * Drawing.LITTLE / 2, 5 * STONE_HEIGHT * Drawing.NORMAL, WEB_WIDTH * Drawing.LITTLE, 5 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.REVERSEABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.LEFT, Drawing.UP, webTexture>

.spider4 Enemy\
<<<<<Object.GAME, 209 * DIRT_WIDTH * Drawing.NORMAL, 8 * STONE_HEIGHT * Drawing.NORMAL, SPIDER_WIDTH * Drawing.LITTLE, SPIDER_HEIGHT * Drawing.LITTLE>, GameObject.ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.LEFT, Drawing.UP, spiderTexture>>,\
<FALSE, 0, 100, 0, spiderFrames>>,\
TRUE, 0, 3, FALSE>,\
1, spiderAnimations, 100
;===============================================================================
.stone28 GameObjectWithDrawing\
<<Object.GAME, 213 * STONE_WIDTH * Drawing.NORMAL, 0, 12 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.brick5 GameObjectWithDrawing\
<<Object.GAME, 217 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.brick6 GameObjectWithDrawing\
<<Object.GAME, 218 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.coin18 Bonus\
<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
                              
.luck6 Luck\
<<<<Object.GAME, 219 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, LUCK_WIDTH * Drawing.NORMAL, LUCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
<FALSE, 0, 150, 0, luckFrames>>,\
Level4.coin18

.brick7 GameObjectWithDrawing\
<<Object.GAME, 220 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.brick8 GameObjectWithDrawing\
<<Object.GAME, 221 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.coin19 Bonus\
<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
                              
.luck7 Luck\
<<<<Object.GAME, 222 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, LUCK_WIDTH * Drawing.NORMAL, LUCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
<FALSE, 0, 150, 0, luckFrames>>,\
Level4.coin19

.reverse27 GameObject\
<Object.GAME, 217 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse28 GameObject\
<Object.GAME, (222 * STONE_WIDTH - 1) * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse27_1 GameObject\
<Object.GAME, 213 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse28_1 GameObject\
<Object.GAME, (225 * STONE_WIDTH - 1) * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.sigma8 Enemy\
<<<<<Object.GAME, 218 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, SIGMA_WIDTH * Drawing.NORMAL, SIGMA_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, sigmaTexture>>,\
<FALSE, 0, 100, 0, sigmaFrames>>,\
TRUE, 7, 0, TRUE>,\
2, sigmaAnimations, 100
;===============================================================================
.stone29 GameObjectWithDrawing\
<<Object.GAME, 225 * STONE_WIDTH * Drawing.NORMAL, 0, 3 * STONE_WIDTH * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone30 GameObjectWithDrawing\
<<Object.GAME, 228 * STONE_WIDTH * Drawing.NORMAL, 0, 10 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.coin20 Bonus\
<<<<Object.GAME, 230 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin21 Bonus\
<<<<Object.GAME, 231 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin22 Bonus\
<<<<Object.GAME, 232 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin23 Bonus\
<<<<Object.GAME, 230 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin24 Bonus\
<<<<Object.GAME, 231 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin25 Bonus\
<<<<Object.GAME, 232 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.pineapple10 GameObjectWithDrawing\
<<Object.GAME, 234 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL, PINEAPPLE_WIDTH * Drawing.NORMAL, PINEAPPLE_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pineappleTexture>

.reverse29 GameObject\
<Object.GAME, 228 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse30 GameObject\
<Object.GAME, (238 * STONE_WIDTH - 1) * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.sigma9 Enemy\
<<<<<Object.GAME, 229 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL, SIGMA_WIDTH * Drawing.NORMAL, SIGMA_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, sigmaTexture>>,\
<FALSE, 0, 100, 0, sigmaFrames>>,\
TRUE, 7, 0, TRUE>,\
2, sigmaAnimations, 100

.sigma10 Enemy\
<<<<<Object.GAME, 234 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL, SIGMA_WIDTH * Drawing.NORMAL, SIGMA_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, sigmaTexture>>,\
<FALSE, 0, 100, 0, sigmaFrames>>,\
TRUE, 7, 0, TRUE>,\
2, sigmaAnimations, 100
;===============================================================================
.water8 GameObjectWithAnimation\
<<<Object.GAME, 238 * STONE_WIDTH * Drawing.NORMAL, 0, 2 * WATER_WIDTH * Drawing.NORMAL, WATER_HEIGHT * Drawing.NORMAL>, GameObject.KILL>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, waterTexture>>,\
<FALSE, 0, 100, 0, waterFrames>

.stone31 GameObjectWithDrawing\
<<Object.GAME, 240 * STONE_WIDTH * Drawing.NORMAL, 0, 15 * STONE_WIDTH * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone32 GameObjectWithDrawing\
<<Object.GAME, 245 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, 3 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone33 GameObjectWithDrawing\
<<Object.GAME, 252 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, 3 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.brickWitBreakTimer9 BrickWithBreakTimer\
<<<<Object.GAME, (247 * STONE_WIDTH - 1) * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL, OLD_BRICK_WIDTH * Drawing.NORMAL, OLD_BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.TOP_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, oldBrickTexture>>,\
<FALSE, -1, 200, 0, oldBrickFrames>>,\
-1, 700

.brickWitBreakTimer10 BrickWithBreakTimer\
<<<<Object.GAME, (254 * STONE_WIDTH - 1) * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL, OLD_BRICK_WIDTH * Drawing.NORMAL, OLD_BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.TOP_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, oldBrickTexture>>,\
<FALSE, -1, 200, 0, oldBrickFrames>>,\
-1, 700

.special25 GameObject\
<Object.GAME, (245 * STONE_WIDTH - 1) * Drawing.NORMAL, (6 * STONE_HEIGHT + COCONUT_WIDTH) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special26 GameObject\
<Object.GAME, (248 * STONE_WIDTH + COCONUT_WIDTH) * Drawing.NORMAL, (6 * STONE_HEIGHT + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special27 GameObject\
<Object.GAME, (248 * STONE_WIDTH) * Drawing.NORMAL, (4 * STONE_HEIGHT - COCONUT_WIDTH) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special28 GameObject\
<Object.GAME, (245 * STONE_WIDTH - 1 - COCONUT_WIDTH) * Drawing.NORMAL, (4 * STONE_HEIGHT - 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.coconut7 Enemy\
<<<<<Object.GAME, 246 * STONE_WIDTH * Drawing.NORMAL, 6 * STONE_HEIGHT * Drawing.NORMAL, COCONUT_WIDTH * Drawing.NORMAL, COCONUT_HEIGHT * Drawing.NORMAL>, GameObject.ROTATEABLE_ENEMY + GameObject.UNTOCHABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, coconutTexture>>,\
<FALSE, 0, 100, 0, coconutFrames>>,\
TRUE, 5, 0, FALSE>,\
1, coconutAnimations, 100

.special29 GameObject\
<Object.GAME, (252 * STONE_WIDTH - 1) * Drawing.NORMAL, (6 * STONE_HEIGHT + COCONUT_WIDTH) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special30 GameObject\
<Object.GAME, (255 * STONE_WIDTH + COCONUT_WIDTH) * Drawing.NORMAL, (6 * STONE_HEIGHT + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special31 GameObject\
<Object.GAME, (255 * STONE_WIDTH) * Drawing.NORMAL, (4 * STONE_HEIGHT - COCONUT_WIDTH) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special32 GameObject\
<Object.GAME, (252 * STONE_WIDTH - 1 - COCONUT_WIDTH) * Drawing.NORMAL, (4 * STONE_HEIGHT - 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.coconut8 Enemy\
<<<<<Object.GAME, 252 * STONE_WIDTH * Drawing.NORMAL, (4 * STONE_HEIGHT - COCONUT_HEIGHT) * Drawing.NORMAL, COCONUT_WIDTH * Drawing.NORMAL, COCONUT_HEIGHT * Drawing.NORMAL>, GameObject.ROTATEABLE_ENEMY + GameObject.UNTOCHABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.LEFT, Drawing.DOWN, coconutTexture>>,\
<FALSE, 0, 100, 0, coconutFrames>>,\
TRUE, -5, 0, FALSE>,\
1, coconutAnimations, 100

.core7 Bullet\
<<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, CORE_WIDTH * Drawing.LITTLE, CORE_HEIGHT * Drawing.LITTLE>, GameObject.UNBEATABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coreTexture>>,\
<FALSE, 0, 1000, 0, coreFrames>>,\
FALSE, -11, 0, FALSE>,\
TRUE, coreAnimations

.core8 Bullet\
<<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, CORE_WIDTH * Drawing.LITTLE, CORE_HEIGHT * Drawing.LITTLE>, GameObject.UNBEATABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coreTexture>>,\
<FALSE, 0, 1000, 0, coreFrames>>,\
FALSE, -11, 0, FALSE>,\
TRUE, coreAnimations

.core9 Bullet\
<<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, CORE_WIDTH * Drawing.LITTLE, CORE_HEIGHT * Drawing.LITTLE>, GameObject.UNBEATABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coreTexture>>,\
<FALSE, 0, 1000, 0, coreFrames>>,\
FALSE, -11, 0, FALSE>,\
TRUE, coreAnimations

.cores3 dd 3, Level4.core7, Level4.core8, Level4.core9

.cannon3 EnemyWithBullets\
<<<<<<<Object.GAME, 254 * STONE_WIDTH * Drawing.NORMAL, 6 * STONE_HEIGHT * Drawing.NORMAL, CANNON_WIDTH * Drawing.NORMAL, CANNON_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, cannonTexture>>,\
<0, 0, 0, 0, 0>>,\
0, 0, 0, 0>,\
0, 0, 0>,\
0, 1700>,\
Level4.cores3
;===============================================================================
.water9 GameObjectWithAnimation\
<<<Object.GAME, 255 * STONE_WIDTH * Drawing.NORMAL, 0, 3 * WATER_WIDTH * Drawing.NORMAL, WATER_HEIGHT * Drawing.NORMAL>, GameObject.KILL>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, waterTexture>>,\
<FALSE, 0, 100, 0, waterFrames>

.stone34 GameObjectWithDrawing\
<<Object.GAME, 258 * STONE_WIDTH * Drawing.NORMAL, 0, 22 * STONE_WIDTH * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.pineapple11 GameObjectWithDrawing\
<<Object.GAME, 261 * STONE_WIDTH * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL, PINEAPPLE_WIDTH * Drawing.NORMAL, PINEAPPLE_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pineappleTexture>

.pineapple12 GameObjectWithDrawing\
<<Object.GAME, 264 * STONE_WIDTH * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL, PINEAPPLE_WIDTH * Drawing.NORMAL, PINEAPPLE_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pineappleTexture>

.pineapple13 GameObjectWithDrawing\
<<Object.GAME, 271 * STONE_WIDTH * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL, PINEAPPLE_WIDTH * Drawing.NORMAL, PINEAPPLE_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pineappleTexture>

.coin26 Bonus\
<<<<Object.GAME, 267 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin27 Bonus\
<<<<Object.GAME, 268 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin28 Bonus\
<<<<Object.GAME, 269 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin29 Bonus\
<<<<Object.GAME, 268 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.spawn2 GameObjectWithDrawing\
<<Object.GAME, 278 * STONE_WIDTH * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL, 1 * SPAWN_WIDTH * Drawing.NORMAL, 1 * SPAWN_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, spawnTexture>

.stone35 GameObjectWithDrawing\
<<Object.GAME, 280 * STONE_WIDTH * Drawing.NORMAL, 0, 1 * STONE_WIDTH * Drawing.NORMAL, 11 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>          
            
BufferLevel4Length = $ - BufferLevel4