Level4:

.delete GameObject\
<Object.GAME, 0, -1, 100000, 1>, GameObject.DELETE

.kill GameObject\
<Object.GAME, 0, 0, 100000, 1>, GameObject.KILL

.border1 GameObject\
<Object.GAME, -1, 0, 1, 100000>, GameObject.BLOCK
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
<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
                              
.luck2 Luck\
<<<<Object.GAME, 38 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, LUCK_WIDTH * Drawing.NORMAL, LUCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
<FALSE, 0, 150, 0, luckFrames>>,\
Level4.coin6
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
<<Object.GAME, 52 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL, 4 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>



           

.gameObjects                    dd .gameObjectsLength / 4 - 1,\
                                   .delete, .kill, .border1,\
                                   .stone1, .stone2, .stone3, .spawn1,\
                                   .bottomPipe1, .topPipe1, .coin1, .coin2, .bottomPipe2, .topPipe2, .coin3, .coin4, .water1,\
                                   .stone4, .reverse1, .reverse2, .web1, .spider1, .stone5, .pineapple2, .brick1, .brick2, .coin5, .luck1,\
                                   .stone6, .reverse3, .reverse4, .sigma1, .sigma2, .snail1, .pineapple3, .coin6, .luck2,\
                                   .stone7, .stone8, .spike1, .stone9,\
                                   player
.gameObjectsLength              = $ - .gameObjects

.gameObjectsWithDrawing         dd .gameObjectsWithDrawingLength / 4 - 1,\
                                   .stone1, .stone2, .stone3, .spawn1, .pineapple1,\
                                   .bottomPipe1, .topPipe1, .coin1, .coin2, .bottomPipe2, .topPipe2, .coin3, .coin4, .water1,\
                                   .stone4, .web1, .spider1, .stone5, .pineapple2, .brick1, .brick2, .coin5, .luck1,\
                                   .stone6, .sigma1, .sigma2, .snail1, .pineapple3, .coin6, .luck2,\
                                   .stone7, .stone8, .spike1, .stone9,\
                                   Statistic.wSCORE1, Statistic.wSCORE2, Statistic.wSCORE3, Statistic.wSCORE4, Statistic.wSCORE5, Statistic.nSCORE1, Statistic.nSCORE2, Statistic.nSCORE3, Statistic.nSCORE4, Statistic.nSCORE5, Statistic.border, Statistic.bonus, Statistic.stars,\
                                   playerBullet1, playerBullet2, playerBullet3, player
.gameObjectsWithDrawingLength   = $ - .gameObjectsWithDrawing

.gameObjectsWithAnimation       dd .gameObjectsWithAnimationLength / 4 - 1,\
                                   .coin1, .coin2, .coin3, .coin4, .water1,\
                                   .spider1, .coin5, .luck1,\
                                   .sigma1, .sigma2, .snail1, .coin6, .luck2,\
                                   playerBullet1, playerBullet2, playerBullet3, player
.gameObjectsWithAnimationLength = $ - .gameObjectsWithAnimation

.entities                       dd .entitiesLength / 4 - 1,\
                                   player, playerBullet1, playerBullet2, playerBullet3,\
                                   .spider1,\
                                   .sigma1, .sigma2, .snail1
.entitiesLength                 = $ - .entities

.bricksWithBreakTimer           dd .bricksWithBreakTimerLength / 4 - 1
                                  
.bricksWithBreakTimerLength     = $ - .bricksWithBreakTimer

.enemies                        dd .enemiesLength / 4 - 1,\
                                   .spider1,\
                                   .sigma1, .sigma2, .snail1
.enemiesLength                  = $ - .enemies

.enemiesWithBullets             dd .enemiesWithBulletsLength / 4 - 1
                                   
.enemiesWithBulletsLength       = $ - .enemiesWithBullets

.enemiesWithReverseTimer        dd .enemiesWithReverseTimerLength / 4 - 1
                                   
.enemiesWithReverseTimerLength  = $ - .enemiesWithReverseTimer

.enemiesWithStopTimer           dd .enemiesWithStopTimerLength / 4 - 1

.enemiesWithStopTimerLength     = $ - .enemiesWithStopTimer

.bullets                        dd .bulletsLength / 4 - 1,\
                                   playerBullet1, playerBullet2, playerBullet3
.bulletsLength                   = $ - .bullets

.words                          dd .wordsLength / 4 - 1,\
                                   Statistic.wSCORE, Statistic.nSCORE
.wordsLength                    = $ - .words

level4 Level <TRUE, 0, 0, 0, 0>, 0, 0, 5475, 1300, <228, 228, 156>, <Level4.gameObjects, Level4.gameObjectsWithDrawing, Level4.gameObjectsWithAnimation, Level4.entities, Level4.bricksWithBreakTimer, Level4.enemies, Level4.enemiesWithBullets, Level4.enemiesWithStopTimer, Level4.bullets, Level4.words>, Level4, BufferLevel4