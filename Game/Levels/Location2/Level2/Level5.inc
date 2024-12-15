Level5:

.delete GameObject\
<Object.GAME, 0, -1, 100000, 1>, GameObject.DELETE
           
.stone1 GameObjectWithDrawing\
<<Object.GAME, STONE_WIDTH * Drawing.NORMAL / 2, 0, 9 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone1_1 GameObjectWithDrawing\
<<Object.GAME, (29 * STONE_WIDTH - 20) * Drawing.NORMAL / 2, 0, 31 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.water1 GameObjectWithAnimation\
<<<Object.GAME, 19 * STONE_WIDTH / 2 * Drawing.NORMAL, 0, 5 * WATER_WIDTH * Drawing.NORMAL, WATER_HEIGHT * Drawing.NORMAL>, GameObject.KILL>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, waterTexture>>,\
<FALSE, 0, 100, 0, waterFrames>

.stone2 GameObjectWithDrawing\
<<Object.GAME, -STONE_WIDTH * Drawing.NORMAL / 2, 0, 1 * STONE_WIDTH * Drawing.NORMAL, 20 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
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
<<<<Object.GAME, (4 * STONE_WIDTH + 3) * Drawing.NORMAL, (5 * STONE_HEIGHT + 5) * Drawing.NORMAL, ARROW_WIDTH * Drawing.SMALL, ARROW_HEIGHT * Drawing.SMALL>, GameObject.BONUS_FOR_PLAYER>,\
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
<<<<<<<Object.GAME, 14 * STONE_WIDTH * Drawing.NORMAL, 6 * STONE_HEIGHT * Drawing.NORMAL, CANNON_WIDTH * Drawing.NORMAL, CANNON_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
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
<<<<<<<Object.GAME, 14 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT / 2 * Drawing.NORMAL - 13, CANNON_WIDTH * Drawing.NORMAL, CANNON_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<0, 0, 0, 0>>,\
<0, 0, 0, 0, 0>>,\
0, 0, 0, 0>,\
0, 0, 0>,\
5000, 3200>,\
Level5.cores2

.core5 Bullet\
<<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, 40 * Drawing.LITTLE, 5 * Drawing.LITTLE>, GameObject.KILL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, laserTexture>>,\
<0, 0, 0, 0, 0>>,\
FALSE, -10, 0, FALSE>,\
TRUE, laserAnimations

.cores3 dd 1, Level5.core5

.cannon3 EnemyWithBullets\
<<<<<<<Object.GAME, 14 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL, CANNON_WIDTH * Drawing.NORMAL, CANNON_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<0, 0, 0, 0>>,\
<0, 0, 0, 0, 0>>,\
0, 0, 0, 0>,\
0, 0, 0>,\
0, 7000>,\
Level5.cores3

.henchmen1 dd 4, Level5.cannon1, Level5.cannon2, Level5.cannon3, Level5.beeTexture 

.beeTexture Enemy\
<<<<<Object.GAME, 12 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT / 2 * Drawing.NORMAL, BEE_WIDTH * Drawing.LARGE, BEE_HEIGHT * Drawing.LARGE>, GameObject.DECORATION>,\
<Drawing.LARGE, Drawing.LEFT, Drawing.UP, beeTexture>>,\
<FALSE, 0, 100, 0, beeFrames>>,\
TRUE, 0, 0, FALSE>,\
1, beeAnimations, 0

.bee1 Boss\
<<<<<<Object.GAME, 14 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT / 2 * Drawing.NORMAL, BEE_WIDTH * Drawing.LARGE, BEE_HEIGHT * Drawing.LARGE>, GameObject.BOSS>,\
<0, 0, 0, 0>>,\
<0, 0, 0, 0, 0>>,\
TRUE, 0, 0, FALSE>,\
1, 0, 98799>,\
.henchmen1

.reverse1 GameObject\
<Object.GAME, 3 * STONE_WIDTH / 2 * Drawing.NORMAL, 500 * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse2 GameObject\
<Object.GAME, 3 * STONE_WIDTH / 2 * Drawing.NORMAL, -530 * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse3 GameObject\
<Object.GAME, (3 * STONE_WIDTH / 2 + 15 * SPIKE_WIDTH) * Drawing.NORMAL, (500 - SPIKE_HEIGHT) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse4 GameObject\
<Object.GAME, (3 * STONE_WIDTH / 2 + 15 * SPIKE_WIDTH - 1) * Drawing.NORMAL, (-530 - SPIKE_HEIGHT) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.spike1 Entity\
<<<<Object.GAME, 3 * STONE_WIDTH / 2 * Drawing.NORMAL, 480 * Drawing.NORMAL, (15 * SPIKE_WIDTH) * Drawing.NORMAL, SPIKE_HEIGHT * Drawing.NORMAL>, GameObject.REVERSEABLE_ENEMY + GameObject.UNBEATABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, spikeTexture>>,\
<0, 0, 0, 0, 0>>,\
TRUE, 0, -6, FALSE

.spike2 Entity\
<<<<Object.GAME, (3 * STONE_WIDTH / 2 + 1) * Drawing.NORMAL, 480 * Drawing.NORMAL - SPIKE_HEIGHT * Drawing.NORMAL, (15 * SPIKE_WIDTH) * Drawing.NORMAL, SPIKE_HEIGHT * Drawing.NORMAL>, GameObject.REVERSEABLE_ENEMY + GameObject.UNBEATABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.DOWN, spikeTexture>>,\
<0, 0, 0, 0, 0>>,\
TRUE, 0, -6, FALSE

.star1 Bonus\
<<<<Object.GAME, 26 * STONE_WIDTH * Drawing.NORMAL, (2 * STONE_HEIGHT + 5) * Drawing.NORMAL, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, starTexture>>,\
<TRUE, 0, 10, 0, starFrames>>,\
Bonus.STAR

.star2 Bonus\
<<<<Object.GAME, 17 * STONE_WIDTH * Drawing.NORMAL, (13 * STONE_HEIGHT + 5) * Drawing.NORMAL, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, starTexture>>,\
<TRUE, 0, 10, 0, starFrames>>,\
Bonus.STAR

.star3 Bonus\
<<<<Object.GAME, 1 * STONE_WIDTH * Drawing.NORMAL, (13 * STONE_HEIGHT + 5) * Drawing.NORMAL, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, starTexture>>,\
<TRUE, 0, 10, 0, starFrames>>,\
Bonus.STAR 

.spawn1 GameObjectWithDrawing\
<<Object.GAME, 29 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL, 1 * SPAWN_WIDTH * Drawing.NORMAL, 1 * SPAWN_HEIGHT * Drawing.NORMAL>, GameObject.TOP_BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, spawnTexture>

.special1 GameObject\
<Object.GAME, (-10 * STONE_WIDTH - 1) * Drawing.NORMAL, (2 * STONE_HEIGHT + COCONUT_WIDTH) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special2 GameObject\
<Object.GAME, (9 * STONE_WIDTH + COCONUT_WIDTH) * Drawing.NORMAL + STONE_WIDTH * Drawing.NORMAL / 2, (2 * STONE_HEIGHT + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special3 GameObject\
<Object.GAME, (9 * STONE_WIDTH) * Drawing.NORMAL + STONE_WIDTH * Drawing.NORMAL / 2, (-2 * STONE_HEIGHT - COCONUT_WIDTH) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special4 GameObject\
<Object.GAME, (-10 * STONE_WIDTH - 1 - COCONUT_WIDTH) * Drawing.NORMAL, (-2 * STONE_HEIGHT - 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.coconut1 Enemy\
<<<<<Object.GAME, -10 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL, COCONUT_WIDTH * Drawing.NORMAL, COCONUT_HEIGHT * Drawing.NORMAL>, GameObject.ROTATEABLE_ENEMY + GameObject.UNBEATABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, coconutTexture>>,\
<FALSE, 0, 100, 0, coconutFrames>>,\
TRUE, 4, 0, FALSE>,\
1, coconutAnimations, 100

.nHEALTH dd\
Object.GENERAL, 9 * STONE_WIDTH * Drawing.NORMAL, 10 * STONE_WIDTH * Drawing.NORMAL, 5 * (ZERO_WIDTH + 1) * Drawing.NORMAL - Drawing.NORMAL, ZERO_HEIGHT * Drawing.NORMAL,\
Level5.nHEALTH1, '1', '0', '0', 0

.nHEALTH1 dd Object.GENERAL, 0, 0, ZERO_WIDTH * Drawing.BIG, ZERO_HEIGHT * Drawing.BIG, Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture                            
.nHEALTH2 dd Object.GENERAL, 0, 0, ZERO_WIDTH * Drawing.BIG, ZERO_HEIGHT * Drawing.BIG, Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture  
.nHEALTH3 dd Object.GENERAL, 0, 0, ZERO_WIDTH * Drawing.BIG, ZERO_HEIGHT * Drawing.BIG, Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture 

.stone4 GameObjectWithDrawing\
<<Object.GAME, 26 * STONE_WIDTH * Drawing.NORMAL, 2 * STONE_HEIGHT * Drawing.NORMAL, 1 * STONE_WIDTH * Drawing.NORMAL, 1 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone5 GameObjectWithDrawing\
<<Object.GAME, 26 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, 1 * STONE_WIDTH * Drawing.NORMAL, 1 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone6 GameObjectWithDrawing\
<<Object.GAME, 23 * STONE_WIDTH * Drawing.NORMAL, 4 * STONE_HEIGHT * Drawing.NORMAL, 1 * STONE_WIDTH * Drawing.NORMAL, 1 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone7 GameObjectWithDrawing\
<<Object.GAME, 23 * STONE_WIDTH * Drawing.NORMAL, 6 * STONE_HEIGHT * Drawing.NORMAL, 1 * STONE_WIDTH * Drawing.NORMAL, 1 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone8 GameObjectWithDrawing\
<<Object.GAME, 26 * STONE_WIDTH * Drawing.NORMAL, 8 * STONE_HEIGHT * Drawing.NORMAL, 1 * STONE_WIDTH * Drawing.NORMAL, 1 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone9 GameObjectWithDrawing\
<<Object.GAME, 26 * STONE_WIDTH * Drawing.NORMAL, 10 * STONE_HEIGHT * Drawing.NORMAL, 1 * STONE_WIDTH * Drawing.NORMAL, 1 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture> 

.stone10 GameObjectWithDrawing\
<<Object.GAME, 26 * STONE_WIDTH * Drawing.NORMAL, 11 * STONE_HEIGHT * Drawing.NORMAL, 1 * STONE_WIDTH * Drawing.NORMAL, 1 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone11 GameObjectWithDrawing\
<<Object.GAME, 23 * STONE_WIDTH * Drawing.NORMAL, 7 * STONE_HEIGHT * Drawing.NORMAL, 1 * STONE_WIDTH * Drawing.NORMAL, 1 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone12 GameObjectWithDrawing\
<<Object.GAME, 26 * STONE_WIDTH * Drawing.NORMAL, 13 * STONE_HEIGHT * Drawing.NORMAL, 1 * STONE_WIDTH * Drawing.NORMAL, 1 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone13 GameObjectWithDrawing\
<<Object.GAME, 26 * STONE_WIDTH * Drawing.NORMAL, 14 * STONE_HEIGHT * Drawing.NORMAL, 1 * STONE_WIDTH * Drawing.NORMAL, 1 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture> 

.stone14 GameObjectWithDrawing\
<<Object.GAME, 26 * STONE_WIDTH * Drawing.NORMAL, 15 * STONE_HEIGHT * Drawing.NORMAL, 1 * STONE_WIDTH * Drawing.NORMAL, 1 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone15 GameObjectWithDrawing\
<<Object.GAME, 24 * STONE_WIDTH * Drawing.NORMAL, 12 * STONE_HEIGHT * Drawing.NORMAL, 1 * STONE_WIDTH * Drawing.NORMAL, 1 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture> 

.stone16 GameObjectWithDrawing\
<<Object.GAME, 24 * STONE_WIDTH * Drawing.NORMAL, 14 * STONE_HEIGHT * Drawing.NORMAL, 1 * STONE_WIDTH * Drawing.NORMAL, 1 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture> 

.stone17 GameObjectWithDrawing\
<<Object.GAME, 24 * STONE_WIDTH * Drawing.NORMAL, 15 * STONE_HEIGHT * Drawing.NORMAL, 1 * STONE_WIDTH * Drawing.NORMAL, 1 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone18 GameObjectWithDrawing\
<<Object.GAME, 24 * STONE_WIDTH * Drawing.NORMAL, 16 * STONE_HEIGHT * Drawing.NORMAL, 1 * STONE_WIDTH * Drawing.NORMAL, 1 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone19 GameObjectWithDrawing\
<<Object.GAME, 22 * STONE_WIDTH * Drawing.NORMAL, 13 * STONE_HEIGHT * Drawing.NORMAL, 1 * STONE_WIDTH * Drawing.NORMAL, 1 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture> 

.stone20 GameObjectWithDrawing\
<<Object.GAME, 22 * STONE_WIDTH * Drawing.NORMAL, 15 * STONE_HEIGHT * Drawing.NORMAL, 1 * STONE_WIDTH * Drawing.NORMAL, 1 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture> 

.stone21 GameObjectWithDrawing\
<<Object.GAME, 22 * STONE_WIDTH * Drawing.NORMAL, 16 * STONE_HEIGHT * Drawing.NORMAL, 1 * STONE_WIDTH * Drawing.NORMAL, 1 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone22 GameObjectWithDrawing\
<<Object.GAME, 22 * STONE_WIDTH * Drawing.NORMAL, 17 * STONE_HEIGHT * Drawing.NORMAL, 1 * STONE_WIDTH * Drawing.NORMAL, 1 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.core8 Bullet\
<<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, CORE_WIDTH * Drawing.LITTLE, CORE_HEIGHT * Drawing.LITTLE>, GameObject.UNBEATABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.LEFT, Drawing.UP, coreTexture>>,\
<FALSE, 0, 1000, 0, coreFrames>>,\
FALSE, 13, 0, FALSE>,\
TRUE, coreAnimations

.core9 Bullet\
<<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, CORE_WIDTH * Drawing.LITTLE, CORE_HEIGHT * Drawing.LITTLE>, GameObject.UNBEATABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.LEFT, Drawing.UP, coreTexture>>,\
<FALSE, 0, 1000, 0, coreFrames>>,\
FALSE, 13, 0, FALSE>,\
TRUE, coreAnimations

.core10 Bullet\
<<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, CORE_WIDTH * Drawing.LITTLE, CORE_HEIGHT * Drawing.LITTLE>, GameObject.UNBEATABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.LEFT, Drawing.UP, coreTexture>>,\
<FALSE, 0, 1000, 0, coreFrames>>,\
FALSE, 13, 0, FALSE>,\
TRUE, coreAnimations

.core11 Bullet\
<<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, CORE_WIDTH * Drawing.LITTLE, CORE_HEIGHT * Drawing.LITTLE>, GameObject.UNBEATABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.LEFT, Drawing.UP, coreTexture>>,\
<FALSE, 0, 1000, 0, coreFrames>>,\
FALSE, 13, 0, FALSE>,\
TRUE, coreAnimations

.core12 Bullet\
<<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, CORE_WIDTH * Drawing.LITTLE, CORE_HEIGHT * Drawing.LITTLE>, GameObject.UNBEATABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.LEFT, Drawing.UP, coreTexture>>,\
<FALSE, 0, 1000, 0, coreFrames>>,\
FALSE, 13, 0, FALSE>,\
TRUE, coreAnimations
                                              
.cores4 dd 5, Level5.core8, Level5.core9, Level5.core10, Level5.core11, Level5.core12

.cannon4 EnemyWithBullets\
<<<<<<<Object.GAME, 2 * STONE_WIDTH * Drawing.NORMAL, 13 * STONE_HEIGHT * Drawing.NORMAL, CANNON_WIDTH * Drawing.NORMAL, CANNON_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.LEFT, Drawing.UP, cannonTexture>>,\
<0, 0, 0, 0, 0>>,\
0, 0, 0, 0>,\
0, 0, 0>,\
0, 800>,\
Level5.cores4

.stone23 GameObjectWithDrawing\
<<Object.GAME, 16 * STONE_WIDTH * Drawing.NORMAL, 13 * STONE_HEIGHT * Drawing.NORMAL, 1 * STONE_WIDTH * Drawing.NORMAL, 1 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture> 

.stone24 GameObjectWithDrawing\
<<Object.GAME, 16 * STONE_WIDTH * Drawing.NORMAL, 14 * STONE_HEIGHT * Drawing.NORMAL, 1 * STONE_WIDTH * Drawing.NORMAL, 1 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>

.stone25 GameObjectWithDrawing\
<<Object.GAME, 16 * STONE_WIDTH * Drawing.NORMAL, 15 * STONE_HEIGHT * Drawing.NORMAL, 1 * STONE_WIDTH * Drawing.NORMAL, 5 * STONE_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, stoneTexture>
                 
             

.gameObjects                    dd .gameObjectsLength / 4 - 1,\
                                   playerBullet1, playerBullet2, playerBullet3,\
                                   .delete,\
                                   .stone1, .stone1_1, .water1, .stone2, .stone3, .brick1, .brick2, .brick3, .bee1, .arrow1,\
                                   .core1, .core2, .core3, .core4, .core5, .spike1, .reverse1, .reverse2, .spike2, .reverse3, .reverse4,\
                                   .star1, .star2, .star3, .spawn1,\
                                   .special1, .special2, .special3, .special4, .coconut1,\
                                   .stone10, .stone6, .stone7, .stone8, .stone9, .stone11, .stone12, .stone13, .stone14, .stone15, .stone16, .stone17, .stone18,\
                                   .stone19, .stone20, .stone21, .stone22, .core8, .core9, .core10, .core11, .core12, .cannon4, .stone23, .stone24, .stone25,\
                                   player
.gameObjectsLength              = $ - .gameObjects

.gameObjectsWithDrawing         dd .gameObjectsWithDrawingLength / 4 - 1,\
                                   .star1, .star2, .stone1, .water1, .stone1_1, .stone2, .stone3, .star3, .brick1, .brick2, .brick3, .pineapple1, .beeTexture, .arrow1,\
                                   .core1, .core2, .core3, .core4, .core5, .spike1, .spike2,\
                                   .spawn1, .coconut1, .nHEALTH1, .nHEALTH2, .nHEALTH3,\
                                   .stone10, .stone6, .stone7, .stone8, .stone9, .stone11, .stone12, .stone13, .stone14, .stone15, .stone16, .stone17, .stone18,\
                                   .stone19, .stone20, .stone21, .stone22, .core8, .core9, .core10, .core11, .core12, .cannon4, .stone23, .stone24, .stone25,\
                                   Statistic.wSCORE1, Statistic.wSCORE2, Statistic.wSCORE3, Statistic.wSCORE4, Statistic.wSCORE5, Statistic.nSCORE1, Statistic.nSCORE2, Statistic.nSCORE3, Statistic.nSCORE4, Statistic.nSCORE5, Statistic.border, Statistic.bonus, Statistic.stars,\
                                   playerBullet1, playerBullet2, playerBullet3, playerTexture
.gameObjectsWithDrawingLength   = $ - .gameObjectsWithDrawing

.gameObjectsWithAnimation       dd .gameObjectsWithAnimationLength / 4 - 1,\
                                   .beeTexture, .water1,\
                                   .core1, .core2, .core3, .core4, .core5, .core8, .core9, .core10, .core11, .core12, .coconut1,\
                                   playerBullet1, playerBullet2, playerBullet3, playerTexture
.gameObjectsWithAnimationLength = $ - .gameObjectsWithAnimation

.entities                       dd .entitiesLength / 4 - 1,\
                                   player, playerBullet1, playerBullet2, playerBullet3,\
                                   .bee1, .cannon1, .core1, .core2, .core3, .core4, .core5, .core8, .core9, .core10, .core11, .core12, .cannon2, .cannon3, .spike1, .spike2, .coconut1, .beeTexture 
.entitiesLength                 = $ - .entities

.bricksWithBreakTimer           dd .bricksWithBreakTimerLength / 4 - 1
                                  
.bricksWithBreakTimerLength     = $ - .bricksWithBreakTimer

.enemies                        dd .enemiesLength / 4 - 1,\
                                   .bee1, .cannon1, .cannon2, .cannon3, .coconut1
.enemiesLength                  = $ - .enemies

.enemiesWithBullets             dd .enemiesWithBulletsLength / 4 - 1,\
                                   .cannon1, .cannon2, .cannon3, .cannon4
.enemiesWithBulletsLength       = $ - .enemiesWithBullets

.enemiesWithStopTimer           dd .enemiesWithStopTimerLength / 4 - 1

.enemiesWithStopTimerLength     = $ - .enemiesWithStopTimer

.bullets                        dd .bulletsLength / 4 - 1,\
                                   playerBullet1, playerBullet2, playerBullet3,\
                                   .core1, .core2, .core3, .core4, .core5, .core8, .core9, .core10, .core11, .core12
.bulletsLength                   = $ - .bullets

.words                          dd .wordsLength / 4 - 1,\
                                   Statistic.wSCORE, Statistic.nSCORE, .nHEALTH
.wordsLength                    = $ - .words

level5 Level <FALSE, 0, 0, 0, 0>, 0, 0, 31 * STONE_WIDTH * Drawing.NORMAL, 1300, <80, 187, 255>, <Level5.gameObjects, Level5.gameObjectsWithDrawing, Level5.gameObjectsWithAnimation, Level5.entities, Level5.bricksWithBreakTimer, Level5.enemies, Level5.enemiesWithBullets, Level5.enemiesWithStopTimer, Level5.bullets, Level5.words>, Level5, BufferLevel5