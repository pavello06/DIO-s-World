Level5:

.delete GameObject\
<Object.GAME, 0, -1, 100000, 1>, GameObject.DELETE
           
.stone1 GameObjectWithDrawing\
<<Object.GAME, STONE_WIDTH * Drawing.NORMAL / 2, 0, 31 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone2 GameObjectWithDrawing\
<<Object.GAME, -STONE_WIDTH * Drawing.NORMAL / 2, 0, 1 * STONE_WIDTH * Drawing.NORMAL, 11 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone3 GameObjectWithDrawing\
<<Object.GAME, STONE_WIDTH * Drawing.NORMAL / 2, 10 * STONE_HEIGHT * Drawing.NORMAL, 19 * STONE_WIDTH * Drawing.NORMAL, 3 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.brick1 GameObjectWithDrawing\
<<Object.GAME, 3 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.brick2 GameObjectWithDrawing\
<<Object.GAME, 4 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.brick3 GameObjectWithDrawing\
<<Object.GAME, 5 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.arrow1 Bonus\
<<<<Object.GAME, 4 * STONE_WIDTH * Drawing.NORMAL, (5 * STONE_HEIGHT + 5) * Drawing.NORMAL, ARROW_WIDTH * Drawing.SMALL, ARROW_HEIGHT * Drawing.SMALL>, GameObject.BONUS_FOR_PLAYER>,\
<Drawing.SMALL, Drawing.RIGHT, Drawing.UP, arrowTexture>>,\
<FALSE, 0, 100, 0, arrowFrames>>,\
Bonus.ARROW

.pineapple1 GameObjectWithDrawing\
<<Object.GAME, 7 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL, PINEAPPLE_WIDTH * Drawing.NORMAL, PINEAPPLE_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pineappleTexture>

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

.cores1 dd 2, Level5.core1, Level5.core2

.cannon1 EnemyWithBullets\
<<<<<<<Object.GAME, 14 * STONE_WIDTH * Drawing.NORMAL, 6 * STONE_HEIGHT * Drawing.NORMAL, CANNON_WIDTH * Drawing.NORMAL, CANNON_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<0, 0, 0, 0>>,\
<0, 0, 0, 0, 0>>,\
0, 0, 0, 0>,\
0, 0, 0>,\
2500, 2800>,\
Level5.cores1

.core3 Bullet\
<<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, CORE_WIDTH * Drawing.LITTLE, CORE_HEIGHT * Drawing.LITTLE>, GameObject.UNBEATABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coreTexture>>,\
<FALSE, 0, 1000, 0, coreFrames>>,\
FALSE, -11, 0, FALSE>,\
TRUE, coreAnimations

.core4 Bullet\
<<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, CORE_WIDTH * Drawing.LITTLE, CORE_HEIGHT * Drawing.LITTLE>, GameObject.UNBEATABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coreTexture>>,\
<FALSE, 0, 1000, 0, coreFrames>>,\
FALSE, -11, 0, FALSE>,\
TRUE, coreAnimations

.cores2 dd 2, Level5.core3, Level5.core4

.cannon2 EnemyWithBullets\
<<<<<<<Object.GAME, 14 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT / 2 * Drawing.NORMAL, CANNON_WIDTH * Drawing.NORMAL, CANNON_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<0, 0, 0, 0>>,\
<0, 0, 0, 0, 0>>,\
0, 0, 0, 0>,\
0, 0, 0>,\
5000, 3200>,\
Level5.cores2

.core5 Bullet\
<<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, 40 * Drawing.LITTLE, 5 * Drawing.LITTLE>, GameObject.UNBEATABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, laserTexture>>,\
<0, 0, 0, 0, 0>>,\
FALSE, -10, 0, FALSE>,\
TRUE, laserAnimations

.cores3 dd 1, Level5.core5

.cannon3 EnemyWithBullets\
<<<<<<<Object.GAME, 14 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, CANNON_WIDTH * Drawing.NORMAL, CANNON_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<0, 0, 0, 0>>,\
<0, 0, 0, 0, 0>>,\
0, 0, 0, 0>,\
0, 0, 0>,\
0, 7000>,\
Level5.cores3

.henchmen1 dd 3, Level5.cannon1, Level5.cannon2, Level5.cannon3

.beeTexture GameObjectWithAnimation\
<<<Object.GAME, 12 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT / 2 * Drawing.NORMAL, BEE_WIDTH * Drawing.LARGE, BEE_HEIGHT * Drawing.LARGE>, GameObject.DECORATION>,\
<Drawing.LARGE, Drawing.LEFT, Drawing.UP, beeTexture>>,\
<FALSE, 0, 100, 0, beeFrames>

.bee1 Boss\
<<<<<<Object.GAME, 14 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT / 2 * Drawing.NORMAL, BEE_WIDTH * Drawing.LARGE, BEE_HEIGHT * Drawing.LARGE>, GameObject.BOSS>,\
<0, 0, 0, 0>>,\
<0, 0, 0, 0, 0>>,\
TRUE, 0, 0, FALSE>,\
100, beeAnimations, 98799>,\
.henchmen1

.reverse1 GameObject\
<Object.GAME, STONE_WIDTH / 2 * Drawing.NORMAL, 700 * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse2 GameObject\
<Object.GAME, STONE_WIDTH / 2 * Drawing.NORMAL, -700 * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse3 GameObject\
<Object.GAME, (STONE_WIDTH / 2 + 15 * SPIKE_WIDTH) * Drawing.NORMAL, (700 - SPIKE_HEIGHT) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse4 GameObject\
<Object.GAME, (STONE_WIDTH / 2 + 1) * Drawing.NORMAL, (-700 - SPIKE_HEIGHT) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.spike1 Entity\
<<<<Object.GAME, STONE_WIDTH / 2 * Drawing.NORMAL, 490 * Drawing.NORMAL, 15 * SPIKE_WIDTH * Drawing.NORMAL, SPIKE_HEIGHT * Drawing.NORMAL>, GameObject.REVERSEABLE_ENEMY + GameObject.UNBEATABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, spikeTexture>>,\
<0, 0, 0, 0, 0>>,\
TRUE, 0, -6, FALSE

.spike2 Entity\
<<<<Object.GAME, (STONE_WIDTH / 2 + 1) * Drawing.NORMAL, 490 * Drawing.NORMAL - SPIKE_HEIGHT * Drawing.NORMAL, 15 * SPIKE_WIDTH * Drawing.NORMAL, SPIKE_HEIGHT * Drawing.NORMAL>, GameObject.REVERSEABLE_ENEMY + GameObject.UNBEATABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.DOWN, spikeTexture>>,\
<0, 0, 0, 0, 0>>,\
TRUE, 0, -6, FALSE

.star1 Bonus\
<<<<Object.GAME, 26 * STONE_WIDTH * Drawing.NORMAL, (2 * STONE_HEIGHT + 5) * Drawing.NORMAL, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, starTexture>>,\
<TRUE, 0, 10, 0, starFrames>>,\
Bonus.STAR

.star2 Bonus\
<<<<Object.GAME, 27 * STONE_WIDTH * Drawing.NORMAL, (2 * STONE_HEIGHT + 5) * Drawing.NORMAL, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, starTexture>>,\
<TRUE, 0, 10, 0, starFrames>>,\
Bonus.STAR

.star3 Bonus\
<<<<Object.GAME, 28 * STONE_WIDTH * Drawing.NORMAL, (2 * STONE_HEIGHT + 5) * Drawing.NORMAL, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, starTexture>>,\
<TRUE, 0, 10, 0, starFrames>>,\
Bonus.STAR 

.spawn1 GameObjectWithDrawing\
<<Object.GAME, 29 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL, 1 * SPAWN_WIDTH * Drawing.NORMAL, 1 * SPAWN_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, spawnTexture>

.special1 GameObject\
<Object.GAME, (-10 * STONE_WIDTH - 1) * Drawing.NORMAL, (2 * STONE_HEIGHT + COCONUT_WIDTH) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special2 GameObject\
<Object.GAME, (20 * STONE_WIDTH + COCONUT_WIDTH) * Drawing.NORMAL, (2 * STONE_HEIGHT + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special3 GameObject\
<Object.GAME, (20 * STONE_WIDTH) * Drawing.NORMAL, (-2 * STONE_HEIGHT - COCONUT_WIDTH) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special4 GameObject\
<Object.GAME, (-10 * STONE_WIDTH - 1 - COCONUT_WIDTH) * Drawing.NORMAL, (-2 * STONE_HEIGHT - 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.coconut1 Enemy\
<<<<<Object.GAME, -10 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL, COCONUT_WIDTH * Drawing.NORMAL, COCONUT_HEIGHT * Drawing.NORMAL>, GameObject.ROTATEABLE_ENEMY + GameObject.UNBEATABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, coconutTexture>>,\
<FALSE, 0, 100, 0, coconutFrames>>,\
TRUE, 4, 0, FALSE>,\
1, coconutAnimations, 100          

.gameObjects                    dd .gameObjectsLength / 4 - 1,\
                                   .delete,\
                                   .stone1, .stone2, .stone3, .brick1, .brick2, .brick3, .bee1, .arrow1,\
                                   .core1, .core2, .core3, .core4, .core5, .spike1, .reverse1, .reverse2, .spike2, .reverse3, .reverse4,\
                                   .star1, .star2, .star3, .spawn1,\
                                   .special1, .special2, .special3, .special4, .coconut1,\
                                   player
.gameObjectsLength              = $ - .gameObjects

.gameObjectsWithDrawing         dd .gameObjectsWithDrawingLength / 4 - 1,\
                                   .stone1, .stone2, .stone3, .brick1, .brick2, .brick3, .pineapple1, .beeTexture, .arrow1,\
                                   .core1, .core2, .core3, .core4, .core5, .spike1, .spike2,\
                                   .star1, .star2, .star3, .spawn1, .coconut1,\
                                   Statistic.wSCORE1, Statistic.wSCORE2, Statistic.wSCORE3, Statistic.wSCORE4, Statistic.wSCORE5, Statistic.nSCORE1, Statistic.nSCORE2, Statistic.nSCORE3, Statistic.nSCORE4, Statistic.nSCORE5, Statistic.border, Statistic.bonus, Statistic.stars,\
                                   playerBullet1, playerBullet2, playerBullet3, player
.gameObjectsWithDrawingLength   = $ - .gameObjectsWithDrawing

.gameObjectsWithAnimation       dd .gameObjectsWithAnimationLength / 4 - 1,\
                                   .beeTexture,\
                                   .core1, .core2, .core3, .core4, .core5, .coconut1,\
                                   playerBullet1, playerBullet2, playerBullet3, player
.gameObjectsWithAnimationLength = $ - .gameObjectsWithAnimation

.entities                       dd .entitiesLength / 4 - 1,\
                                   player, playerBullet1, playerBullet2, playerBullet3,\
                                   .bee1, .cannon1, .core1, .core2, .core3, .core4, .core5, .cannon2, .cannon3, .spike1, .spike2, .coconut1
.entitiesLength                 = $ - .entities

.bricksWithBreakTimer           dd .bricksWithBreakTimerLength / 4 - 1
                                  
.bricksWithBreakTimerLength     = $ - .bricksWithBreakTimer

.enemies                        dd .enemiesLength / 4 - 1,\
                                   .bee1, .cannon1, .cannon2, .cannon3, .coconut1
.enemiesLength                  = $ - .enemies

.enemiesWithBullets             dd .enemiesWithBulletsLength / 4 - 1,\
                                   .cannon1, .cannon2, .cannon3
.enemiesWithBulletsLength       = $ - .enemiesWithBullets

.enemiesWithStopTimer           dd .enemiesWithStopTimerLength / 4 - 1

.enemiesWithStopTimerLength     = $ - .enemiesWithStopTimer

.bullets                        dd .bulletsLength / 4 - 1,\
                                   playerBullet1, playerBullet2, playerBullet3,\
                                   .core1, .core2, .core3, .core4, .core5
.bulletsLength                   = $ - .bullets

.words                          dd .wordsLength / 4 - 1,\
                                   Statistic.wSCORE, Statistic.nSCORE
.wordsLength                    = $ - .words

level5 Level <FALSE, 0, 0, 0, 0>, 0, 0, 31 * STONE_WIDTH * Drawing.NORMAL, 1300, <80, 187, 255>, <Level5.gameObjects, Level5.gameObjectsWithDrawing, Level5.gameObjectsWithAnimation, Level5.entities, Level5.bricksWithBreakTimer, Level5.enemies, Level5.enemiesWithBullets, Level5.enemiesWithStopTimer, Level5.bullets, Level5.words>, Level5, BufferLevel5