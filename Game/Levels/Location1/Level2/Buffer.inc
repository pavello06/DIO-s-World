BufferLevel2:
dd BufferLevel2Length / 4 - 1             

.delete GameObject\
<Object.GAME, 0, -1, 100000, 1>, GameObject.DELETE

.border1 GameObject\
<Object.GAME, -1, 0, 1, 100000>, GameObject.BLOCK
;===============================================================================
.dirt1 GameObjectWithDrawing\
<<Object.GAME, 0, 0, 11 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass1 GameObjectWithDrawing\
<<Object.GAME, 0, 2 * DIRT_HEIGHT * Drawing.NORMAL, 11 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.spawn1 GameObjectWithDrawing\
<<Object.GAME, 1 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, 1 * SPAWN_WIDTH * Drawing.NORMAL, 1 * SPAWN_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, spawnTexture>

.palm1 GameObjectWithDrawing\
<<Object.GAME, 5 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.bush1 GameObjectWithDrawing\
<<Object.GAME, 7 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.brick1 GameObjectWithDrawing\
<<Object.GAME, 8 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 2 * BLOCK_HEIGHT) * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.arrow1 Bonus\
<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, ARROW_WIDTH * Drawing.SMALL, ARROW_HEIGHT * Drawing.SMALL>, GameObject.BONUS_FOR_PLAYER>,\
<Drawing.SMALL, Drawing.RIGHT, Drawing.UP, arrowTexture>>,\
<FALSE, 0, 100, 0, arrowFrames>>,\
Bonus.ARROW

.luck1 Luck\
<<<<Object.GAME, (8 * DIRT_WIDTH + 1 * BLOCK_WIDTH) * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 2 * BLOCK_HEIGHT) * Drawing.NORMAL, LUCK_WIDTH * Drawing.NORMAL, LUCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
<FALSE, 0, 150, 0, luckFrames>>,\
Level2.arrow1

.blueBlock1 GameObjectWithDrawing\
<<Object.GAME, (8 * DIRT_WIDTH + 2 * BLOCK_WIDTH) * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 0 * BLOCK_HEIGHT) * Drawing.NORMAL, BLOCK_WIDTH * Drawing.NORMAL, BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, blueBlockTexture>

.yellowBlock1 GameObjectWithDrawing\
<<Object.GAME, (8 * DIRT_WIDTH + 2 * BLOCK_WIDTH) * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 1 * BLOCK_HEIGHT) * Drawing.NORMAL, BLOCK_WIDTH * Drawing.NORMAL, BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, yellowBlockTexture>

.blueBlock2 GameObjectWithDrawing\
<<Object.GAME, (8 * DIRT_WIDTH + 2 * BLOCK_WIDTH) * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 2 * BLOCK_HEIGHT) * Drawing.NORMAL, BLOCK_WIDTH * Drawing.NORMAL, BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, blueBlockTexture>
;===============================================================================
.dirt2 GameObjectWithDrawing\
<<Object.GAME, 11 * DIRT_WIDTH * Drawing.NORMAL, 0, 3 * DIRT_WIDTH * Drawing.NORMAL, 4 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass2 GameObjectWithDrawing\
<<Object.GAME, 11 * DIRT_WIDTH * Drawing.NORMAL, 4 * DIRT_HEIGHT * Drawing.NORMAL, 3 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.dirt3 GameObjectWithDrawing\
<<Object.GAME, 14 * DIRT_WIDTH * Drawing.NORMAL, 0, 3 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass3 GameObjectWithDrawing\
<<Object.GAME, 14 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL, 3 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.spike1 Enemy\
<<<<<Object.GAME, 14 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, 6 * SPIKE_WIDTH * Drawing.NORMAL, SPIKE_HEIGHT * Drawing.NORMAL>, GameObject.UNBEATABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, spikeTexture>>,\
<0, 0, 0, 0, 0>>,\
FALSE, 0, 0, FALSE>,\
0, 0, 0

.dirt4 GameObjectWithDrawing\
<<Object.GAME, 17 * DIRT_WIDTH * Drawing.NORMAL, 0, 7 * DIRT_WIDTH * Drawing.NORMAL, 4 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass4 GameObjectWithDrawing\
<<Object.GAME, 17 * DIRT_WIDTH * Drawing.NORMAL, 4 * DIRT_HEIGHT * Drawing.NORMAL, 7 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.reverse1 GameObject\
<Object.GAME, 11 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.special1 GameObject\
<Object.GAME, (14 * DIRT_WIDTH + 7) * Drawing.NORMAL, (4 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special2 GameObject\
<Object.GAME, (17 * DIRT_WIDTH - 8) * Drawing.NORMAL, (4 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.reverse2 GameObject\
<Object.GAME, 24 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.honey1 EnemyWithStopTimer\
<<<<<<<Object.GAME, 12 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_WIDTH + 1 * GRASS_WIDTH) * Drawing.NORMAL, HONEY_WIDTH * Drawing.NORMAL, HONEY_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY + GameObject.JUMPABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, honeyTexture>>,\
<FALSE, 0, 100, 0, honeyFrames>>,\
TRUE, 8, 0, TRUE>,\
1, honeyAnimations, 100>,\
-1, 2000>
;===============================================================================
.dirt5 GameObjectWithDrawing\
<<Object.GAME, 24 * DIRT_WIDTH * Drawing.NORMAL, 0, 28 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass5 GameObjectWithDrawing\
<<Object.GAME, 24 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL, 21 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.grass51 GameObjectWithDrawing\
<<Object.GAME, 45 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL, 1 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.grass52 GameObjectWithDrawing\
<<Object.GAME, 46 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL, 6 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.bigBlock1 GameObjectWithDrawing\
<<Object.GAME, 24 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, 1 * BIG_BLOCK_WIDTH * Drawing.NORMAL, BIG_BLOCK_HEIGHT / 2 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture>

.bush2 GameObjectWithDrawing\
<<Object.GAME, (26 * DIRT_WIDTH + 2) * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.palm2 GameObjectWithDrawing\
<<Object.GAME, 27 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.flower1 GameObjectWithDrawing\
<<Object.GAME, 30 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, FLOWER_WIDTH * Drawing.NORMAL, FLOWER_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>

.coin1 Bonus\
<<<<Object.GAME, 31 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 5) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin2 Bonus\
<<<<Object.GAME, (31 + 1) * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 5) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin3 Bonus\
<<<<Object.GAME, (31 + 2) * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 5) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin4 Bonus\
<<<<Object.GAME, (31 + 3) * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 5) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin5 Bonus\
<<<<Object.GAME, (31 + 1) * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 21) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin6 Bonus\
<<<<Object.GAME, (31 + 2) * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 21) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.bush3 GameObjectWithDrawing\
<<Object.GAME, 37 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.reverse1_1 GameObject\
<Object.GAME, 26 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse2_1 GameObject\
<Object.GAME, (39 * DIRT_WIDTH - 1) * Drawing.NORMAL, (2 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.owl1_1 EnemyWithStopTimer\
<<<<<<<Object.GAME, 27 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_WIDTH + 1 * GRASS_WIDTH) * Drawing.NORMAL, OWL_WIDTH * Drawing.NORMAL, OWL_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, owlTexture>>,\
<FALSE, 0, 100, 0, owlFrames>>,\
TRUE, 8, 0, TRUE>,\
1, owlAnimations, 100>,\
-1, 2000>

.bigBlock2 GameObjectWithDrawing\
<<Object.GAME, 39 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, 5 * BIG_BLOCK_WIDTH / 2 * Drawing.NORMAL, 3 * BIG_BLOCK_HEIGHT / 2 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture>

.star1 Bonus\
<<<<Object.GAME, 45 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_HEIGHT) * Drawing.NORMAL, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, starTexture>>,\
<TRUE, 0, 10, 0, starFrames>>,\
Bonus.STAR

.bigBlock3 GameObjectWithDrawing\
<<Object.GAME, 47 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, 2 * BIG_BLOCK_WIDTH * Drawing.NORMAL, 3 * BIG_BLOCK_HEIGHT / 2 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture>

.reverse3 GameObject\
<Object.GAME, 39 * DIRT_WIDTH * Drawing.NORMAL, (5 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.special3 GameObject\
<Object.GAME, (44 * DIRT_WIDTH + 7) * Drawing.NORMAL, (5 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special4 GameObject\
<Object.GAME, (47 * DIRT_WIDTH - 8) * Drawing.NORMAL, (5 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.reverse4 GameObject\
<Object.GAME, 51 * DIRT_WIDTH * Drawing.NORMAL, (5 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.honey2 EnemyWithStopTimer\
<<<<<<<Object.GAME, 40 * DIRT_WIDTH * Drawing.NORMAL, (5 * DIRT_WIDTH + 1 * GRASS_WIDTH) * Drawing.NORMAL, HONEY_WIDTH * Drawing.NORMAL, HONEY_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY + GameObject.JUMPABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, honeyTexture>>,\
<FALSE, 0, 100, 0, honeyFrames>>,\
TRUE, 8, 0, TRUE>,\
1, honeyAnimations, 100>,\
-1, 2000>

.honey3 EnemyWithStopTimer\
<<<<<<<Object.GAME, 48 * DIRT_WIDTH * Drawing.NORMAL, (5 * DIRT_WIDTH + 1 * GRASS_WIDTH) * Drawing.NORMAL, HONEY_WIDTH * Drawing.NORMAL, HONEY_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY + GameObject.JUMPABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, honeyTexture>>,\
<FALSE, 0, 100, 0, honeyFrames>>,\
TRUE, 8, 0, TRUE>,\
1, honeyAnimations, 100>,\
-1, 2000>
;===============================================================================
.dirt6 GameObjectWithDrawing\
<<Object.GAME, 52 * DIRT_WIDTH * Drawing.NORMAL, 0, 22 * DIRT_WIDTH * Drawing.NORMAL, 1 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass6 GameObjectWithDrawing\
<<Object.GAME, 52 * DIRT_WIDTH * Drawing.NORMAL, 1 * DIRT_HEIGHT * Drawing.NORMAL, 22 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.palm3 GameObjectWithDrawing\
<<Object.GAME, 53 * DIRT_WIDTH * Drawing.NORMAL, (1 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.brick2 GameObjectWithDrawing\
<<Object.GAME, 56 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.brick3 GameObjectWithDrawing\
<<Object.GAME, 57 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>
 
.coin7 Bonus\
<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
                              
.luck2 Luck\
<<<<Object.GAME, 58 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, LUCK_WIDTH * Drawing.NORMAL, LUCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
<FALSE, 0, 150, 0, luckFrames>>,\
Level2.coin7

.spring1 GameObjectWithAnimation\
<<<Object.GAME, 61 * DIRT_WIDTH * Drawing.NORMAL, (1 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, SPRING_WIDTH * Drawing.LITTLE, SPRING_HEIGHT * Drawing.LITTLE>, GameObject.JUMP>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, springTexture>>,\
<TRUE, -1, 50, 0, springFrames>

.bottomPipe1 GameObjectWithDrawing\
<<Object.GAME, 65 * DIRT_WIDTH * Drawing.NORMAL, (1 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, 1 * BOTTOM_PIPE_WIDTH * Drawing.LITTLE, 100 * BOTTOM_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, bottomPipeTexture>                               
                              
.topPipe1 GameObjectWithDrawing\
<<Object.GAME, 65 * DIRT_WIDTH * Drawing.NORMAL - 12, (1 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 80) * Drawing.NORMAL, TOP_PIPE_WIDTH * Drawing.LITTLE, TOP_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, topPipeTexture>

.palm4 GameObjectWithDrawing\
<<Object.GAME, 67 * DIRT_WIDTH * Drawing.NORMAL, (1 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.bush4 GameObjectWithDrawing\
<<Object.GAME, 69 * DIRT_WIDTH * Drawing.NORMAL, (1 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.flower2 GameObjectWithDrawing\
<<Object.GAME, 70 * DIRT_WIDTH * Drawing.NORMAL, (1 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, FLOWER_WIDTH * Drawing.NORMAL, FLOWER_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>

.bigBlock4 GameObjectWithDrawing\
<<Object.GAME, 72 * DIRT_WIDTH * Drawing.NORMAL, (1 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, 1 *  BIG_BLOCK_WIDTH / 1 * Drawing.NORMAL, 1 * BIG_BLOCK_HEIGHT / 1 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture>

.reverse5 GameObject\
<Object.GAME, 66 * DIRT_WIDTH * Drawing.NORMAL + 20, (4 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse6 GameObject\
<Object.GAME, 74 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.bee1 Enemy\
<<<<<Object.GAME, 69 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, BEE_WIDTH * Drawing.NORMAL, BEE_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.LEFT, Drawing.UP, beeTexture>>,\
<FALSE, 0, 100, 0, beeFrames>>,\
TRUE, 4, 0, FALSE>,\
1, beeAnimations, 100
;===============================================================================
.dirt7 GameObjectWithDrawing\
<<Object.GAME, 74 * DIRT_WIDTH * Drawing.NORMAL, 0, 16 * DIRT_WIDTH * Drawing.NORMAL, 3 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                   
.grass7 GameObjectWithDrawing\
<<Object.GAME, 74 * DIRT_WIDTH * Drawing.NORMAL, 3 * DIRT_HEIGHT * Drawing.NORMAL, 16 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.bottomPipe2 GameObjectWithDrawing\
<<Object.GAME, 74 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, 1 * BOTTOM_PIPE_WIDTH * Drawing.LITTLE, 10 * BOTTOM_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, bottomPipeTexture>                               
                              
.topPipe2 GameObjectWithDrawing\
<<Object.GAME, 74 * DIRT_WIDTH * Drawing.NORMAL - 12, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 8) * Drawing.NORMAL, TOP_PIPE_WIDTH * Drawing.LITTLE, TOP_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, topPipeTexture>

.reverse7 GameObject\
<Object.GAME, (74 * DIRT_WIDTH + 6) * Drawing.NORMAL, (3 * DIRT_WIDTH + 1 * GRASS_WIDTH) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE + GameObject.SPECIAL

.reverse8 GameObject\
<Object.GAME, (74 * DIRT_WIDTH + 6) * Drawing.NORMAL, (3 * DIRT_WIDTH + 1 * GRASS_WIDTH + 43) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE + GameObject.SPECIAL

.venusFlycatcher1 EnemyWithStopTimer\
<<<<<<<Object.GAME, (74 * DIRT_WIDTH + 2) * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 1) * Drawing.NORMAL, VENUS_FLYCATCHER_WIDTH * Drawing.LITTLE, VENUS_FLYCATCHER_HEIGHT * Drawing.LITTLE>, GameObject.UNTOCHABLE_ENEMY + GameObject.REVERSEABLE_ENEMY + GameObject.STOPABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, venusFlycatcherTexture>>,\
<FALSE, 0, 300, 0, venusFlycatcherFrames>>,\
TRUE, 0, 2, FALSE>,\
1, venusFlycatcherAnimations, 200>,\
-1, 2000>

.bush5 GameObjectWithDrawing\
<<Object.GAME, 78 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.palm5 GameObjectWithDrawing\
<<Object.GAME, 79 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.flower3 GameObjectWithDrawing\
<<Object.GAME, 83 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, FLOWER_WIDTH * Drawing.NORMAL, FLOWER_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>

.palm6 GameObjectWithDrawing\
<<Object.GAME, 87 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.bush6 GameObjectWithDrawing\
<<Object.GAME, 89 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.coin8 Bonus\
<<<<Object.GAME, 83 * DIRT_WIDTH * Drawing.NORMAL, (5 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin9 Bonus\
<<<<Object.GAME, 84 * DIRT_WIDTH * Drawing.NORMAL, (5 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin10 Bonus\
<<<<Object.GAME, 83 * DIRT_WIDTH * Drawing.NORMAL, (6 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin11 Bonus\
<<<<Object.GAME, 84 * DIRT_WIDTH * Drawing.NORMAL, (6 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
;===============================================================================
.bigBlock5 GameObjectWithDrawing\
<<Object.GAME, 90 * DIRT_WIDTH * Drawing.NORMAL, Drawing.NORMAL, 1 *  BIG_BLOCK_WIDTH / 1 * Drawing.NORMAL, 3 * BIG_BLOCK_HEIGHT / 2 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture>

.bigBlock51 GameObjectWithDrawing\
<<Object.GAME, 90 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_WIDTH + 1) * Drawing.NORMAL, 1 *  BIG_BLOCK_WIDTH / 1 * Drawing.NORMAL, 2 * BIG_BLOCK_HEIGHT / 2 * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture>

.bigBlock52 GameObjectWithDrawing\
<<Object.GAME, 90 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_WIDTH + 1) * Drawing.NORMAL, 1 *  BIG_BLOCK_WIDTH / 1 * Drawing.NORMAL, 3 * BIG_BLOCK_HEIGHT / 2 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture>

.star2 Bonus\
<<<<Object.GAME, 91 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 3) * Drawing.NORMAL, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, starTexture>>,\
<TRUE, 0, 10, 0, starFrames>>,\
Bonus.STAR

.bigBlock6 GameObjectWithDrawing\
<<Object.GAME, 92 * DIRT_WIDTH * Drawing.NORMAL, Drawing.NORMAL, 7 *  BIG_BLOCK_WIDTH / 2 * Drawing.NORMAL, 1 * BIG_BLOCK_HEIGHT / 1 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture>

.brick4 GameObjectWithDrawing\
<<Object.GAME, 92 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.coin12 Bonus\
<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
                              
.luck3 Luck\
<<<<Object.GAME, 93 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, LUCK_WIDTH * Drawing.NORMAL, LUCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
<FALSE, 0, 150, 0, luckFrames>>,\
Level2.coin12

.brick5 GameObjectWithDrawing\
<<Object.GAME, 94 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.brick6 GameObjectWithDrawing\
<<Object.GAME, 95 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.coin13 Bonus\
<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
                              
.luck4 Luck\
<<<<Object.GAME, 96 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, LUCK_WIDTH * Drawing.NORMAL, LUCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
<FALSE, 0, 150, 0, luckFrames>>,\
Level2.coin13

.bigBlock7 GameObjectWithDrawing\
<<Object.GAME, 99 * DIRT_WIDTH * Drawing.NORMAL, Drawing.NORMAL, 1 *  BIG_BLOCK_WIDTH / 1 * Drawing.NORMAL, 2 * BIG_BLOCK_HEIGHT / 1 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture>

.reverse9 GameObject\
<Object.GAME, 97 * DIRT_WIDTH * Drawing.NORMAL + 20, (1 * DIRT_WIDTH + 1 * GRASS_WIDTH + 10) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse10 GameObject\
<Object.GAME, 97 * DIRT_WIDTH * Drawing.NORMAL + 20, (5 * DIRT_WIDTH + 1 * GRASS_WIDTH + 10) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.bee2 Enemy\
<<<<<Object.GAME, 97 * DIRT_WIDTH * Drawing.NORMAL + 20, (2 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, BEE_WIDTH * Drawing.NORMAL, BEE_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.LEFT, Drawing.UP, beeTexture>>,\
<FALSE, 0, 100, 0, beeFrames>>,\
TRUE, 0, 2, FALSE>,\
1, beeAnimations, 100
;===============================================================================
.dirt8 GameObjectWithDrawing\
<<Object.GAME, 101 * DIRT_WIDTH * Drawing.NORMAL, 0, 22 * DIRT_WIDTH * Drawing.NORMAL, 3 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                   
.grass8 GameObjectWithDrawing\
<<Object.GAME, 101 * DIRT_WIDTH * Drawing.NORMAL, 3 * DIRT_HEIGHT * Drawing.NORMAL,22 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.flower4 GameObjectWithDrawing\
<<Object.GAME, 103 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, FLOWER_WIDTH * Drawing.NORMAL, FLOWER_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>

.palm7 GameObjectWithDrawing\
<<Object.GAME, 106 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.bush7 GameObjectWithDrawing\
<<Object.GAME, 108 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.bush8 GameObjectWithDrawing\
<<Object.GAME, 111 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.coin14 Bonus\
<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
                              
.luck5 Luck\
<<<<Object.GAME, 113 * DIRT_WIDTH * Drawing.NORMAL, (5 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, LUCK_WIDTH * Drawing.NORMAL, LUCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
<FALSE, 0, 150, 0, luckFrames>>,\
Level2.coin14

.block1 GameObjectWithDrawing\
<<Object.GAME, 114 * DIRT_WIDTH * Drawing.NORMAL, (5 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, blockTexture>

.brick7 GameObjectWithDrawing\
<<Object.GAME, 115 * DIRT_WIDTH * Drawing.NORMAL, (5 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.brick8 GameObjectWithDrawing\
<<Object.GAME, 116 * DIRT_WIDTH * Drawing.NORMAL, (5 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.coin15 Bonus\
<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
                              
.luck6 Luck\
<<<<Object.GAME, 117 * DIRT_WIDTH * Drawing.NORMAL, (5 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, LUCK_WIDTH * Drawing.NORMAL, LUCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
<FALSE, 0, 150, 0, luckFrames>>,\
Level2.coin15

.reverse11 GameObject\
<Object.GAME, 113 * DIRT_WIDTH * Drawing.NORMAL, (6 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse12 GameObject\
<Object.GAME, 119 * DIRT_WIDTH * Drawing.NORMAL, (6 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE
 
.owl1 Enemy\
<<<<<Object.GAME, 114 * DIRT_WIDTH * Drawing.NORMAL, (6 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, OWL_WIDTH * Drawing.NORMAL, OWL_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, owlTexture>>,\
<FALSE, 0, 100, 0, owlFrames>>,\
TRUE, 6, 0, TRUE>,\
1, owlAnimations, 100

.coin16 Bonus\
<<<<Object.GAME, 108 * DIRT_WIDTH * Drawing.NORMAL, (7 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin17 Bonus\
<<<<Object.GAME, 109 * DIRT_WIDTH * Drawing.NORMAL, (7 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin18 Bonus\
<<<<Object.GAME, 110 * DIRT_WIDTH * Drawing.NORMAL, (7 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin19 Bonus\
<<<<Object.GAME, 109 * DIRT_WIDTH * Drawing.NORMAL, (8 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.bigBlock8 GameObjectWithDrawing\
<<Object.GAME, 118 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, 1 *  BIG_BLOCK_WIDTH / 2 * Drawing.NORMAL, 3 * BIG_BLOCK_HEIGHT / 2 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture>

.bigBlock9 GameObjectWithDrawing\
<<Object.GAME, 119 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, 2 *  BIG_BLOCK_WIDTH / 1 * Drawing.NORMAL, 1 * BIG_BLOCK_HEIGHT / 2 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture>
;===============================================================================
.bigBlock10 GameObjectWithDrawing\
<<Object.GAME, 125 * DIRT_WIDTH * Drawing.NORMAL, Drawing.NORMAL, 7 *  BIG_BLOCK_WIDTH / 2 * Drawing.NORMAL, 3 * BIG_BLOCK_HEIGHT / 1 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture>
 
.reverse13 GameObject\
<Object.GAME, 119 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.special5 GameObject\
<Object.GAME, (123 * DIRT_WIDTH + 7) * Drawing.NORMAL, (4 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special6 GameObject\
<Object.GAME, (125 * DIRT_WIDTH - 8) * Drawing.NORMAL, (5 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.reverse14 GameObject\
<Object.GAME, 132 * DIRT_WIDTH * Drawing.NORMAL, (5 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE
 
.honey4 EnemyWithStopTimer\
<<<<<<<Object.GAME, 120 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_WIDTH + 1 * GRASS_WIDTH) * Drawing.NORMAL, HONEY_WIDTH * Drawing.NORMAL, HONEY_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY + GameObject.JUMPABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, honeyTexture>>,\
<FALSE, 0, 100, 0, honeyFrames>>,\
TRUE, 8, 0, TRUE>,\
1, honeyAnimations, 100>,\
-1, 2000>

.reverse15 GameObject\
<Object.GAME, 133 * DIRT_WIDTH * Drawing.NORMAL + 20, (2 * DIRT_WIDTH + 1 * GRASS_WIDTH + 10) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse16 GameObject\
<Object.GAME, 133 * DIRT_WIDTH * Drawing.NORMAL + 20, (2 * DIRT_WIDTH + 1 * GRASS_WIDTH + 60) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.bee3 Enemy\
<<<<<Object.GAME, 133 * DIRT_WIDTH * Drawing.NORMAL + 20, (3 * DIRT_WIDTH + 1 * GRASS_WIDTH + 10) * Drawing.NORMAL, BEE_WIDTH * Drawing.NORMAL, BEE_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.LEFT, Drawing.UP, beeTexture>>,\
<FALSE, 0, 100, 0, beeFrames>>,\
TRUE, 0, 4, FALSE>,\
1, beeAnimations, 100
;===============================================================================
.dirt9 GameObjectWithDrawing\
<<Object.GAME, 135 * DIRT_WIDTH * Drawing.NORMAL, 0, 20 * DIRT_WIDTH * Drawing.NORMAL, 3 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                   
.grass9 GameObjectWithDrawing\
<<Object.GAME, 135 * DIRT_WIDTH * Drawing.NORMAL, 3 * DIRT_HEIGHT * Drawing.NORMAL, 20 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.bigBlock11 GameObjectWithDrawing\
<<Object.GAME, 135 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_WIDTH + 1 * GRASS_WIDTH) * Drawing.NORMAL, 2 *  BIG_BLOCK_WIDTH / 1 * Drawing.NORMAL, 1 * BIG_BLOCK_HEIGHT / 2 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture>

.bigBlock12 GameObjectWithDrawing\
<<Object.GAME, 139 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_WIDTH + 1 * GRASS_WIDTH) * Drawing.NORMAL, 1 *  BIG_BLOCK_WIDTH / 1 * Drawing.NORMAL, 1 * BIG_BLOCK_HEIGHT / 1 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture> 

.coin20 Bonus\
<<<<Object.GAME, (135 * DIRT_WIDTH + 5) * Drawing.NORMAL, (4 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 5) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin21 Bonus\
<<<<Object.GAME, (136 * DIRT_WIDTH + 5) * Drawing.NORMAL, (4 * DIRT_HEIGHT + 1 * GRASS_HEIGHT+ 5) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin22 Bonus\
<<<<Object.GAME, (137 * DIRT_WIDTH + 5) * Drawing.NORMAL, (4 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 5) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin23 Bonus\
<<<<Object.GAME, (138 * DIRT_WIDTH + 5) * Drawing.NORMAL, (4 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 5) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.flower5 GameObjectWithDrawing\
<<Object.GAME, 142 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, FLOWER_WIDTH * Drawing.NORMAL, FLOWER_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>

.palm8 GameObjectWithDrawing\
<<Object.GAME, 146 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.bush9 GameObjectWithDrawing\
<<Object.GAME, 148 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.bottomPipe3 GameObjectWithDrawing\
<<Object.GAME, 152 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, 1 * BOTTOM_PIPE_WIDTH * Drawing.LITTLE, 10 * BOTTOM_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, bottomPipeTexture>                               
                              
.topPipe3 GameObjectWithDrawing\
<<Object.GAME, 152 * DIRT_WIDTH * Drawing.NORMAL - 12, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 8) * Drawing.NORMAL, TOP_PIPE_WIDTH * Drawing.LITTLE, TOP_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, topPipeTexture>

.reverse17 GameObject\
<Object.GAME, (152 * DIRT_WIDTH + 6) * Drawing.NORMAL, (3 * DIRT_WIDTH + 1 * GRASS_WIDTH) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE + GameObject.SPECIAL

.reverse18 GameObject\
<Object.GAME, (152 * DIRT_WIDTH + 6) * Drawing.NORMAL, (3 * DIRT_WIDTH + 1 * GRASS_WIDTH + 43) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE + GameObject.SPECIAL

.venusFlycatcher2 EnemyWithStopTimer\
<<<<<<<Object.GAME, (152 * DIRT_WIDTH + 2) * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 1) * Drawing.NORMAL, VENUS_FLYCATCHER_WIDTH * Drawing.LITTLE, VENUS_FLYCATCHER_HEIGHT * Drawing.LITTLE>, GameObject.UNTOCHABLE_ENEMY + GameObject.REVERSEABLE_ENEMY + GameObject.STOPABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, venusFlycatcherTexture>>,\
<FALSE, 0, 300, 0, venusFlycatcherFrames>>,\
TRUE, 0, 2, FALSE>,\
1, venusFlycatcherAnimations, 200>,\
-1, 2000>
;===============================================================================
.dirt10 GameObjectWithDrawing\
<<Object.GAME, 155 * DIRT_WIDTH * Drawing.NORMAL, 0, 6 * DIRT_WIDTH * Drawing.NORMAL, 1 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                   
.grass10 GameObjectWithDrawing\
<<Object.GAME, 155 * DIRT_WIDTH * Drawing.NORMAL, 1 * DIRT_HEIGHT * Drawing.NORMAL, 6 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.spring2 GameObjectWithAnimation\
<<<Object.GAME, 158 * DIRT_WIDTH * Drawing.NORMAL, (1 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, SPRING_WIDTH * Drawing.LITTLE, SPRING_HEIGHT * Drawing.LITTLE>, GameObject.JUMP>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, springTexture>>,\
<TRUE, -1, 50, 0, springFrames>

.palm9 GameObjectWithDrawing\
<<Object.GAME, 159 * DIRT_WIDTH * Drawing.NORMAL, (1 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.coin24 Bonus\
<<<<Object.GAME, (157 * DIRT_WIDTH + 5) * Drawing.NORMAL, (5 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 5) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin25 Bonus\
<<<<Object.GAME, (158 * DIRT_WIDTH + 5) * Drawing.NORMAL, (5 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 5) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin26 Bonus\
<<<<Object.GAME, (159 * DIRT_WIDTH + 5) * Drawing.NORMAL, (5 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 5) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin27 Bonus\
<<<<Object.GAME, (157 * DIRT_WIDTH + 5) * Drawing.NORMAL, (6 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 5) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin28 Bonus\
<<<<Object.GAME, (158 * DIRT_WIDTH + 5) * Drawing.NORMAL, (6 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 5) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin29 Bonus\
<<<<Object.GAME, (159 * DIRT_WIDTH + 5) * Drawing.NORMAL, (6 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 5) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin30 Bonus\
<<<<Object.GAME, (157 * DIRT_WIDTH + 5) * Drawing.NORMAL, (7 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 5) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin31 Bonus\
<<<<Object.GAME, (158 * DIRT_WIDTH + 5) * Drawing.NORMAL, (7 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 5) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin32 Bonus\
<<<<Object.GAME, (159 * DIRT_WIDTH + 5) * Drawing.NORMAL, (7 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 5) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
;===============================================================================
.dirt11 GameObjectWithDrawing\
<<Object.GAME, 161 * DIRT_WIDTH * Drawing.NORMAL, 0, 18 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                   
.grass11 GameObjectWithDrawing\
<<Object.GAME, 161 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL, 18 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.dirt12 GameObjectWithDrawing\
<<Object.GAME, 165 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, 12 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                   
.grass12 GameObjectWithDrawing\
<<Object.GAME, 165 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, 12 * GRASS_WIDTH * Drawing.NORMAL, (1 * GRASS_HEIGHT - 1) * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.topBlock1 GameObject\
<Object.GAME, 165 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_HEIGHT + 2 * GRASS_HEIGHT - 1) * Drawing.NORMAL, 12 * GRASS_WIDTH * Drawing.NORMAL, 1>, GameObject.TOP_BLOCK

.bush10 GameObjectWithDrawing\
<<Object.GAME, 165 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_HEIGHT + 2 * GRASS_HEIGHT - 1) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.palm10 GameObjectWithDrawing\
<<Object.GAME, 166 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_HEIGHT + 2 * GRASS_HEIGHT - 1) * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.bush11 GameObjectWithDrawing\
<<Object.GAME, 171 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_HEIGHT + 2 * GRASS_HEIGHT - 1) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.flower6 GameObjectWithDrawing\
<<Object.GAME, 172 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_HEIGHT + 2 * GRASS_HEIGHT - 1) * Drawing.NORMAL, FLOWER_WIDTH * Drawing.NORMAL, FLOWER_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>

.palm11 GameObjectWithDrawing\
<<Object.GAME, 174 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_HEIGHT + 2 * GRASS_HEIGHT - 1) * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.coin33 Bonus\
<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
                              
.luck7 Luck\
<<<<Object.GAME, 171 * DIRT_WIDTH * Drawing.NORMAL, (6 * DIRT_HEIGHT + 2 * GRASS_HEIGHT - 1) * Drawing.NORMAL, LUCK_WIDTH * Drawing.NORMAL, LUCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
<FALSE, 0, 150, 0, luckFrames>>,\
Level2.coin33

.star3 Bonus\
<<<<Object.GAME, 171 * DIRT_WIDTH * Drawing.NORMAL, (9 * DIRT_HEIGHT + 2 * GRASS_HEIGHT - 1) * Drawing.NORMAL, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, starTexture>>,\
<TRUE, 0, 10, 0, starFrames>>,\
Bonus.STAR

.bigBlock13 GameObjectWithDrawing\
<<Object.GAME, 179 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_WIDTH + 0 * GRASS_WIDTH + 1) * Drawing.NORMAL, 5 *  BIG_BLOCK_WIDTH / 2 * Drawing.NORMAL, 1 * BIG_BLOCK_HEIGHT / 2 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture>

.reverse19 GameObject\
<Object.GAME, 161 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse20 GameObject\
<Object.GAME, 184 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE
 
.owl2 Enemy\
<<<<<Object.GAME, 162 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, OWL_WIDTH * Drawing.NORMAL, OWL_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, owlTexture>>,\
<FALSE, 0, 100, 0, owlFrames>>,\
TRUE, 6, 0, TRUE>,\
1, owlAnimations, 100

.reverse21 GameObject\
<Object.GAME, 165 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_HEIGHT + 2 * GRASS_HEIGHT + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse22 GameObject\
<Object.GAME, 177 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_WIDTH + 2 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE
 
.owl3 Enemy\
<<<<<Object.GAME, 166 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_WIDTH + 2 * GRASS_WIDTH + 1) * Drawing.NORMAL, OWL_WIDTH * Drawing.NORMAL, OWL_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, owlTexture>>,\
<FALSE, 0, 100, 0, owlFrames>>,\
TRUE, 6, 0, TRUE>,\
1, owlAnimations, 100

.owl4 Enemy\
<<<<<Object.GAME, 176 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_WIDTH + 2 * GRASS_WIDTH + 1) * Drawing.NORMAL, OWL_WIDTH * Drawing.NORMAL, OWL_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, owlTexture>>,\
<FALSE, 0, 100, 0, owlFrames>>,\
TRUE, 6, 0, TRUE>,\
1, owlAnimations, 100
;===============================================================================
.bigBlock14 GameObjectWithDrawing\
<<Object.GAME, 186 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_WIDTH + 0 * GRASS_WIDTH + 1) * Drawing.NORMAL, 5 *  BIG_BLOCK_WIDTH / 2 * Drawing.NORMAL, 1 * BIG_BLOCK_HEIGHT / 2 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture>

.bigBlock15 GameObjectWithDrawing\
<<Object.GAME, 193 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_WIDTH + 0 * GRASS_WIDTH + 1) * Drawing.NORMAL, 6 *  BIG_BLOCK_WIDTH / 2 * Drawing.NORMAL, 1 * BIG_BLOCK_HEIGHT / 2 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture>

.bigBlock16 GameObjectWithDrawing\
<<Object.GAME, 201 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_WIDTH + 0 * GRASS_WIDTH + 1) * Drawing.NORMAL, 7 *  BIG_BLOCK_WIDTH / 2 * Drawing.NORMAL, 2 * BIG_BLOCK_HEIGHT / 2 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture>

.bigBlock17 GameObjectWithDrawing\
<<Object.GAME, 210 * DIRT_WIDTH * Drawing.NORMAL, Drawing.NORMAL, 3 *  BIG_BLOCK_WIDTH / 1 * Drawing.NORMAL, 2 * BIG_BLOCK_HEIGHT / 1 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture>

.reverse23 GameObject\
<Object.GAME, 201 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_HEIGHT + 0 * GRASS_HEIGHT + 2) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.special7 GameObject\
<Object.GAME, (208 * DIRT_WIDTH + 7) * Drawing.NORMAL, (4 * DIRT_WIDTH + 0 * GRASS_WIDTH + 2) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special8 GameObject\
<Object.GAME, (210 * DIRT_WIDTH - 8) * Drawing.NORMAL, (4 * DIRT_WIDTH + 0 * GRASS_WIDTH + 2) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.reverse24 GameObject\
<Object.GAME, 216 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_WIDTH + 0 * GRASS_WIDTH + 2) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE
 
.honey5 EnemyWithStopTimer\
<<<<<<<Object.GAME, 202 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_WIDTH + 0 * GRASS_WIDTH) * Drawing.NORMAL, HONEY_WIDTH * Drawing.NORMAL, HONEY_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY + GameObject.JUMPABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, honeyTexture>>,\
<FALSE, 0, 100, 0, honeyFrames>>,\
TRUE, 8, 0, TRUE>,\
1, honeyAnimations, 100>,\
-1, 2000>
;===============================================================================
.dirt13 GameObjectWithDrawing\
<<Object.GAME, 216 * DIRT_WIDTH * Drawing.NORMAL, 0, 12 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                   
.grass13 GameObjectWithDrawing\
<<Object.GAME, 216 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL, 12 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.flower7 GameObjectWithDrawing\
<<Object.GAME, 218 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, FLOWER_WIDTH * Drawing.NORMAL, FLOWER_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>

.palm12 GameObjectWithDrawing\
<<Object.GAME, 220 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.bush12 GameObjectWithDrawing\
<<Object.GAME, 222 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.bush13 GameObjectWithDrawing\
<<Object.GAME, 223 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.bush14 GameObjectWithDrawing\
<<Object.GAME, 227 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.spawn2 GameObjectWithDrawing\
<<Object.GAME, 225 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, 1 * SPAWN_WIDTH * Drawing.NORMAL, 1 * SPAWN_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, spawnTexture>
            
BufferLevel2Length = $ - BufferLevel2