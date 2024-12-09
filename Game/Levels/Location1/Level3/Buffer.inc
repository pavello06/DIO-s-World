BufferLevel3:
dd BufferLevel3Length / 4 - 1             

.delete GameObject\
<Object.GAME, 0, -1, 100000, 1>, GameObject.DELETE

.kill GameObject\
<Object.GAME, 0, 0, 100000, 1>, GameObject.KILL

.border1 GameObject\
<Object.GAME, -1, 0, 1, 100000>, GameObject.BLOCK
;===============================================================================
.dirt1 GameObjectWithDrawing\
<<Object.GAME, 0, 0, 7 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass1 GameObjectWithDrawing\
<<Object.GAME, 0, 2 * DIRT_HEIGHT * Drawing.NORMAL, 7 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.shadow1_1 GameObjectWithDrawing\
<<Object.GAME, (7 * DIRT_WIDTH - 1) * Drawing.NORMAL, (1 * DIRT_HEIGHT + 8) * Drawing.NORMAL, Drawing.NORMAL, 24 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.spawn1 GameObjectWithDrawing\
<<Object.GAME, 1 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, 1 * SPAWN_WIDTH * Drawing.NORMAL, 1 * SPAWN_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, spawnTexture>

.palm1 GameObjectWithDrawing\
<<Object.GAME, 4 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.bush1 GameObjectWithDrawing\
<<Object.GAME, 6 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>
;===============================================================================
.dirt2 GameObjectWithDrawing\
<<Object.GAME, 7 * DIRT_WIDTH * Drawing.NORMAL, 0, 16 * DIRT_WIDTH * Drawing.NORMAL, 1 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass2 GameObjectWithDrawing\
<<Object.GAME, 7 * DIRT_WIDTH * Drawing.NORMAL, 1 * DIRT_HEIGHT * Drawing.NORMAL,  16 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.palm2 GameObjectWithDrawing\
<<Object.GAME, (15 * DIRT_WIDTH - 5) * Drawing.NORMAL, (1 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.bush2 GameObjectWithDrawing\
<<Object.GAME, (16 * DIRT_WIDTH + 5) * Drawing.NORMAL, (1 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.flower1 GameObjectWithDrawing\
<<Object.GAME, 22 * DIRT_WIDTH * Drawing.NORMAL, (1 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, FLOWER_WIDTH * Drawing.NORMAL, FLOWER_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>

.reverse1 GameObject\
<Object.GAME, 7 * DIRT_WIDTH * Drawing.NORMAL, (1 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse2 GameObject\
<Object.GAME, (23 * DIRT_WIDTH - 1) * Drawing.NORMAL, (1 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.owl1 EnemyWithStopTimer\
<<<<<<<Object.GAME, 8 * DIRT_WIDTH * Drawing.NORMAL, (1 * DIRT_WIDTH + 1 * GRASS_WIDTH) * Drawing.NORMAL, OWL_WIDTH * Drawing.NORMAL, OWL_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, owlTexture>>,\
<FALSE, 0, 100, 0, owlFrames>>,\
TRUE, 6, 0, TRUE>,\
1, owlAnimations, 100>,\
-1, 2000>

.coin1 Bonus\
<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
                              
.luck1 Luck\
<<<<Object.GAME, 9 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, LUCK_WIDTH * Drawing.NORMAL, LUCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
<FALSE, 0, 150, 0, luckFrames>>,\
Level3.coin1

.brick1 GameObjectWithDrawing\
<<Object.GAME, 10 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.brick2 GameObjectWithDrawing\
<<Object.GAME, 11 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.brick3 GameObjectWithDrawing\
<<Object.GAME, 12 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.coin2 Bonus\
<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
                              
.luck2 Luck\
<<<<Object.GAME, 13 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, LUCK_WIDTH * Drawing.NORMAL, LUCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
<FALSE, 0, 150, 0, luckFrames>>,\
Level3.coin2

.coin3 Bonus\
<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
                              
.luck3 Luck\
<<<<Object.GAME, 17 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, LUCK_WIDTH * Drawing.NORMAL, LUCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
<FALSE, 0, 150, 0, luckFrames>>,\
Level3.coin3

.brick4 GameObjectWithDrawing\
<<Object.GAME, 18 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.brick5 GameObjectWithDrawing\
<<Object.GAME, 19 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.brick6 GameObjectWithDrawing\
<<Object.GAME, 20 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.reverse3 GameObject\
<Object.GAME, 9 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.specia1 GameObject\
<Object.GAME, (14 * DIRT_WIDTH + 7) * Drawing.NORMAL, (4 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.specia2 GameObject\
<Object.GAME, (17 * DIRT_WIDTH - 8) * Drawing.NORMAL, (4 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.reverse4 GameObject\
<Object.GAME, 21 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE
 
.honey1 EnemyWithStopTimer\
<<<<<<<Object.GAME, 10 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_WIDTH + 1 * GRASS_WIDTH) * Drawing.NORMAL, HONEY_WIDTH * Drawing.NORMAL, HONEY_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY + GameObject.JUMPABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, honeyTexture>>,\
<FALSE, 0, 100, 0, honeyFrames>>,\
TRUE, 8, 0, TRUE>,\
1, honeyAnimations, 100>,\
-1, 2000>

.coin4 Bonus\
<<<<Object.GAME, (14 * DIRT_WIDTH + 3) * Drawing.NORMAL, (5 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin5 Bonus\
<<<<Object.GAME, (15 * DIRT_WIDTH + 3) * Drawing.NORMAL, (6 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin6 Bonus\
<<<<Object.GAME, (16 * DIRT_WIDTH + 3) * Drawing.NORMAL, (5 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
;===============================================================================
.dirt3 GameObjectWithDrawing\
<<Object.GAME, 23 * DIRT_WIDTH * Drawing.NORMAL, 0, 18 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass3 GameObjectWithDrawing\
<<Object.GAME, 23 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL,  18 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.shadow3_1 GameObjectWithDrawing\
<<Object.GAME, (23 * DIRT_WIDTH - 0) * Drawing.NORMAL, (1 * DIRT_HEIGHT + 8) * Drawing.NORMAL, Drawing.NORMAL, 24 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.shadow1 GameObjectWithDrawing\
<<Object.GAME, (41 * DIRT_WIDTH - 1) * Drawing.NORMAL, 0 * DIRT_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.palm3 GameObjectWithDrawing\
<<Object.GAME, 25 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.bush3 GameObjectWithDrawing\
<<Object.GAME, 28 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.dirt5 GameObjectWithDrawing\
<<Object.GAME, 36 * DIRT_WIDTH * Drawing.NORMAL, 0, 7 * DIRT_WIDTH * Drawing.NORMAL, 10 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                  
.grass5 GameObjectWithDrawing\
<<Object.GAME, 36 * DIRT_WIDTH * Drawing.NORMAL, 10 * DIRT_HEIGHT * Drawing.NORMAL,  7 * GRASS_WIDTH * Drawing.NORMAL, (1 * GRASS_HEIGHT) * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.shadow5_1 GameObjectWithDrawing\
<<Object.GAME, (36 * DIRT_WIDTH - 0) * Drawing.NORMAL, 0, Drawing.NORMAL, (10 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.shadow5_2 GameObjectWithDrawing\
<<Object.GAME, (43 * DIRT_WIDTH - 1) * Drawing.NORMAL, 0, Drawing.NORMAL, (10 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.topBlock2 GameObject\
<Object.GAME, 36 * DIRT_WIDTH * Drawing.NORMAL, (10 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, 7 * DIRT_WIDTH * Drawing.NORMAL, 1>, GameObject.TOP_BLOCK

.bigBlock1 GameObjectWithDrawing\
<<Object.GAME, 39 * DIRT_WIDTH * Drawing.NORMAL, 8 * DIRT_HEIGHT * Drawing.NORMAL, 3 *  BIG_BLOCK_WIDTH / 2 * Drawing.NORMAL, 1 * BIG_BLOCK_HEIGHT / 2 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture>

.bush5 GameObjectWithDrawing\
<<Object.GAME, 40 * DIRT_WIDTH * Drawing.NORMAL, (10 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.palm5 GameObjectWithDrawing\
<<Object.GAME, 41 * DIRT_WIDTH * Drawing.NORMAL, (10 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.dirt4 GameObjectWithDrawing\
<<Object.GAME, 31 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, 7 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                  
.grass4 GameObjectWithDrawing\
<<Object.GAME, 31 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL,  7 * GRASS_WIDTH * Drawing.NORMAL, (1 * GRASS_HEIGHT - 1) * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.shadow4_1 GameObjectWithDrawing\
<<Object.GAME, (31 * DIRT_WIDTH - 0) * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT - 1) * Drawing.NORMAL, Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.shadow2 GameObjectWithDrawing\
<<Object.GAME, (38 * DIRT_WIDTH - 1) * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT - 1) * Drawing.NORMAL, Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.topBlock1 GameObject\
<Object.GAME, 31 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_HEIGHT + 2 * GRASS_HEIGHT - 1) * Drawing.NORMAL, 7 * DIRT_WIDTH * Drawing.NORMAL, 1>, GameObject.TOP_BLOCK

.bush4 GameObjectWithDrawing\
<<Object.GAME, 34 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_HEIGHT + 2 * GRASS_HEIGHT - 1) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>
 
.reverse5 GameObject\
<Object.GAME, 31 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_WIDTH + 2 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse6 GameObject\
<Object.GAME, (38 * DIRT_WIDTH - 1) * Drawing.NORMAL, (4 * DIRT_WIDTH + 2 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.owl2 EnemyWithStopTimer\
<<<<<<<Object.GAME, 32 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_WIDTH + 2 * GRASS_WIDTH + 1) * Drawing.NORMAL, OWL_WIDTH * Drawing.NORMAL, OWL_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, owlTexture>>,\
<FALSE, 0, 100, 0, owlFrames>>,\
TRUE, 6, 0, TRUE>,\
1, owlAnimations, 100>,\
-1, 2000>

.coin10 Bonus\
<<<<Object.GAME, (32 * DIRT_WIDTH + 3) * Drawing.NORMAL, (6 * DIRT_HEIGHT + 2 * GRASS_HEIGHT + 5) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin11 Bonus\
<<<<Object.GAME, (33 * DIRT_WIDTH + 3) * Drawing.NORMAL, (6 * DIRT_HEIGHT + 2 * GRASS_HEIGHT + 5) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin12 Bonus\
<<<<Object.GAME, (32 * DIRT_WIDTH + 3) * Drawing.NORMAL, (7 * DIRT_HEIGHT + 2 * GRASS_HEIGHT + 5) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin13 Bonus\
<<<<Object.GAME, (33 * DIRT_WIDTH + 3) * Drawing.NORMAL, (7 * DIRT_HEIGHT + 2 * GRASS_HEIGHT + 5) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin7 Bonus\
<<<<Object.GAME, (37 * DIRT_WIDTH + 3) * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 5) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin8 Bonus\
<<<<Object.GAME, (38 * DIRT_WIDTH + 3) * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 5) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin9 Bonus\
<<<<Object.GAME, (39 * DIRT_WIDTH + 3) * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 5) * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.palm4 GameObjectWithDrawing\
<<Object.GAME, (40 * DIRT_WIDTH - 8) * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>
;===============================================================================
.dirt6 GameObjectWithDrawing\
<<Object.GAME, 45 * DIRT_WIDTH * Drawing.NORMAL, 0, 6 * DIRT_WIDTH * Drawing.NORMAL, 10 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                
.grass6 GameObjectWithDrawing\
<<Object.GAME, 45 * DIRT_WIDTH * Drawing.NORMAL, 10 * DIRT_HEIGHT * Drawing.NORMAL,  6 * GRASS_WIDTH * Drawing.NORMAL, (1 * GRASS_HEIGHT) * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.shadow6_1 GameObjectWithDrawing\
<<Object.GAME, (45 * DIRT_WIDTH - 0) * Drawing.NORMAL, 0, Drawing.NORMAL, (10 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.shadow6_2 GameObjectWithDrawing\
<<Object.GAME, (51 * DIRT_WIDTH - 1) * Drawing.NORMAL, 0, Drawing.NORMAL, (10 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.topBlock3 GameObject\
<Object.GAME, 45 * DIRT_WIDTH * Drawing.NORMAL, (10 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, 6 * DIRT_WIDTH * Drawing.NORMAL, 1>, GameObject.TOP_BLOCK

.bush6 GameObjectWithDrawing\
<<Object.GAME, 47 * DIRT_WIDTH * Drawing.NORMAL, (10 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.reverse7 GameObject\
<Object.GAME, 40 * DIRT_WIDTH * Drawing.NORMAL, (10 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.special3 GameObject\
<Object.GAME, (43 * DIRT_WIDTH + 7) * Drawing.NORMAL, (10 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special4 GameObject\
<Object.GAME, (45 * DIRT_WIDTH - 8) * Drawing.NORMAL, (10 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.reverse8 GameObject\
<Object.GAME, 51 * DIRT_WIDTH * Drawing.NORMAL, (10 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE
 
.honey2 EnemyWithStopTimer\
<<<<<<<Object.GAME, 41 * DIRT_WIDTH * Drawing.NORMAL, (10 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, HONEY_WIDTH * Drawing.NORMAL, HONEY_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY + GameObject.JUMPABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, honeyTexture>>,\
<FALSE, 0, 100, 0, honeyFrames>>,\
TRUE, 8, 0, TRUE>,\
1, honeyAnimations, 100>,\
-1, 2000>
;===============================================================================
.dirt7 GameObjectWithDrawing\
<<Object.GAME, 48 * DIRT_WIDTH * Drawing.NORMAL, 0, 15 * DIRT_WIDTH * Drawing.NORMAL, 5 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                  
.grass7 GameObjectWithDrawing\
<<Object.GAME, 48 * DIRT_WIDTH * Drawing.NORMAL, 5 * DIRT_HEIGHT * Drawing.NORMAL, 15 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.shadow3 GameObjectWithDrawing\
<<Object.GAME, (48 * DIRT_WIDTH - 0) * Drawing.NORMAL, 0, Drawing.NORMAL, (5 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.shadow7_2 GameObjectWithDrawing\
<<Object.GAME, (63 * DIRT_WIDTH - 1) * Drawing.NORMAL, (3 * DIRT_HEIGHT  + 1 * GRASS_HEIGHT - 8) * Drawing.NORMAL, Drawing.NORMAL, (40) * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.bush7 GameObjectWithDrawing\
<<Object.GAME, 51 * DIRT_WIDTH * Drawing.NORMAL, (5 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.flower2 GameObjectWithDrawing\
<<Object.GAME, 53 * DIRT_WIDTH * Drawing.NORMAL, (5 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, FLOWER_WIDTH * Drawing.NORMAL, FLOWER_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>

.bush8 GameObjectWithDrawing\
<<Object.GAME, 55 * DIRT_WIDTH * Drawing.NORMAL, (5 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.palm6 GameObjectWithDrawing\
<<Object.GAME, 56 * DIRT_WIDTH * Drawing.NORMAL, (5 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>
 
.bush9 GameObjectWithDrawing\
<<Object.GAME, 61 * DIRT_WIDTH * Drawing.NORMAL, (5 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.reverse9 GameObject\
<Object.GAME, 48 * DIRT_WIDTH * Drawing.NORMAL, (5 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse10 GameObject\
<Object.GAME, (63 * DIRT_WIDTH - 1) * Drawing.NORMAL, (5 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.owl3 EnemyWithStopTimer\
<<<<<<<Object.GAME, 49 * DIRT_WIDTH * Drawing.NORMAL, (5 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, OWL_WIDTH * Drawing.NORMAL, OWL_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, owlTexture>>,\
<FALSE, 0, 100, 0, owlFrames>>,\
TRUE, 6, 0, TRUE>,\
1, owlAnimations, 100>,\
-1, 2000>

.brick7 GameObjectWithDrawing\
<<Object.GAME, 49 * DIRT_WIDTH * Drawing.NORMAL, (7 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.coin14 Bonus\
<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
                              
.luck4 Luck\
<<<<Object.GAME, 48 * DIRT_WIDTH * Drawing.NORMAL, (7 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, LUCK_WIDTH * Drawing.NORMAL, LUCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
<FALSE, 0, 150, 0, luckFrames>>,\
Level3.coin14
;===============================================================================
.dirt8 GameObjectWithDrawing\
<<Object.GAME, 63 * DIRT_WIDTH * Drawing.NORMAL, 0, 9 * DIRT_WIDTH * Drawing.NORMAL, 3 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                  
.grass8 GameObjectWithDrawing\
<<Object.GAME, 63 * DIRT_WIDTH * Drawing.NORMAL, 3 * DIRT_HEIGHT * Drawing.NORMAL, 9 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.shadow8_2 GameObjectWithDrawing\
<<Object.GAME, (72 * DIRT_WIDTH - 1) * Drawing.NORMAL, (2 * DIRT_HEIGHT  + 1 * GRASS_HEIGHT - 8) * Drawing.NORMAL, Drawing.NORMAL, (23) * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.bush10 GameObjectWithDrawing\
<<Object.GAME, 64 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.bush11 GameObjectWithDrawing\
<<Object.GAME, 69 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.palm7 GameObjectWithDrawing\
<<Object.GAME, 70 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.reverse11 GameObject\
<Object.GAME, 64 * DIRT_WIDTH * Drawing.NORMAL, (5 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse12 GameObject\
<Object.GAME, 64 * DIRT_WIDTH * Drawing.NORMAL, (7 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.bee1 Enemy\
<<<<<Object.GAME, 64 * DIRT_WIDTH * Drawing.NORMAL, (6 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, BEE_WIDTH * Drawing.NORMAL, BEE_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.LEFT, Drawing.UP, beeTexture>>,\
<FALSE, 0, 100, 0, beeFrames>>,\
TRUE, 0, 3, FALSE>,\
1, beeAnimations, 100

.bigBlock2 GameObjectWithDrawing\
<<Object.GAME, 67 * DIRT_WIDTH * Drawing.NORMAL, 8 * DIRT_HEIGHT * Drawing.NORMAL, 3 *  BIG_BLOCK_WIDTH / 2 * Drawing.NORMAL, 1 * BIG_BLOCK_HEIGHT / 2 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture>

.star1 Bonus\
<<<<Object.GAME, (68 * DIRT_WIDTH + 1) * Drawing.NORMAL, (9 * DIRT_HEIGHT + 5) * Drawing.NORMAL, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, starTexture>>,\
<TRUE, 0, 10, 0, starFrames>>,\
Bonus.STAR
;===============================================================================
.dirt9 GameObjectWithDrawing\
<<Object.GAME, 72 * DIRT_WIDTH * Drawing.NORMAL, 0, 7 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                
.grass9 GameObjectWithDrawing\
<<Object.GAME, 72 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL, 7 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.bush12 GameObjectWithDrawing\
<<Object.GAME, 75 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.reverse13 GameObject\
<Object.GAME, 72 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse14 GameObject\
<Object.GAME, (79 * DIRT_WIDTH - 1) * Drawing.NORMAL, (2 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.owl4 EnemyWithStopTimer\
<<<<<<<Object.GAME, 73 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, OWL_WIDTH * Drawing.NORMAL, OWL_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, owlTexture>>,\
<FALSE, 0, 100, 0, owlFrames>>,\
TRUE, 6, 0, TRUE>,\
1, owlAnimations, 100>,\
-1, 2000>
;===============================================================================
.dirt10 GameObjectWithDrawing\
<<Object.GAME, 79 * DIRT_WIDTH * Drawing.NORMAL, 0, 5 * DIRT_WIDTH * Drawing.NORMAL, 3 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                  
.grass10 GameObjectWithDrawing\
<<Object.GAME, 79 * DIRT_WIDTH * Drawing.NORMAL, 3 * DIRT_HEIGHT * Drawing.NORMAL, 5 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.shadow10_1 GameObjectWithDrawing\
<<Object.GAME, (79 * DIRT_WIDTH - 0) * Drawing.NORMAL, (2 * DIRT_HEIGHT  + 1 * GRASS_HEIGHT - 8) * Drawing.NORMAL, Drawing.NORMAL, (23) * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.brick8 GameObjectWithDrawing\
<<Object.GAME, 80 * DIRT_WIDTH * Drawing.NORMAL, (5 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.coin15 Bonus\
<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
                              
.luck5 Luck\
<<<<Object.GAME, 81 * DIRT_WIDTH * Drawing.NORMAL, (5 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, LUCK_WIDTH * Drawing.NORMAL, LUCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
<FALSE, 0, 150, 0, luckFrames>>,\
Level3.coin15

.brick9 GameObjectWithDrawing\
<<Object.GAME, 82 * DIRT_WIDTH * Drawing.NORMAL, (5 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.bottomPipe1 GameObjectWithDrawing\
<<Object.GAME, 86 * DIRT_WIDTH * Drawing.NORMAL, 0, 1 * BOTTOM_PIPE_WIDTH * Drawing.LITTLE, 100 * BOTTOM_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, bottomPipeTexture>                               
                              
.topPipe1 GameObjectWithDrawing\
<<Object.GAME, 86 * DIRT_WIDTH * Drawing.NORMAL - 12, (70) * Drawing.NORMAL, TOP_PIPE_WIDTH * Drawing.LITTLE, TOP_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, topPipeTexture>

.reverse15 GameObject\
<Object.GAME, (86 * DIRT_WIDTH + 6) * Drawing.NORMAL, (55) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE + GameObject.SPECIAL

.reverse16 GameObject\
<Object.GAME, (86 * DIRT_WIDTH + 6) * Drawing.NORMAL, (104) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE + GameObject.SPECIAL

.venusFlycatcher1 EnemyWithStopTimer\
<<<<<<<Object.GAME, (86 * DIRT_WIDTH + 2) * Drawing.NORMAL, (65) * Drawing.NORMAL, VENUS_FLYCATCHER_WIDTH * Drawing.LITTLE, VENUS_FLYCATCHER_HEIGHT * Drawing.LITTLE>, GameObject.UNTOCHABLE_ENEMY + GameObject.REVERSEABLE_ENEMY + GameObject.STOPABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, venusFlycatcherTexture>>,\
<FALSE, 0, 300, 0, venusFlycatcherFrames>>,\
TRUE, 0, 2, FALSE>,\
1, venusFlycatcherAnimations, 200>,\
-1, 2000>
;===============================================================================
.dirt11 GameObjectWithDrawing\
<<Object.GAME, 89 * DIRT_WIDTH * Drawing.NORMAL, 0, 9 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                  
.grass11 GameObjectWithDrawing\
<<Object.GAME, 89 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL, 9 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.shadow11_1 GameObjectWithDrawing\
<<Object.GAME, (89 * DIRT_WIDTH - 0) * Drawing.NORMAL, 0, Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.flower3 GameObjectWithDrawing\
<<Object.GAME, 90 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, FLOWER_WIDTH * Drawing.NORMAL, FLOWER_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>

.palm9 GameObjectWithDrawing\
<<Object.GAME, 91 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.bush13 GameObjectWithDrawing\
<<Object.GAME, 96 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.reverse17 GameObject\
<Object.GAME, 89 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.reverse18 GameObject\
<Object.GAME, (98 * DIRT_WIDTH - 1) * Drawing.NORMAL, (2 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE
 
.honey4 EnemyWithStopTimer\
<<<<<<<Object.GAME, 90 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_WIDTH + 1 * GRASS_WIDTH) * Drawing.NORMAL, HONEY_WIDTH * Drawing.NORMAL, HONEY_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY + GameObject.JUMPABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, honeyTexture>>,\
<FALSE, 0, 100, 0, honeyFrames>>,\
TRUE, 8, 0, TRUE>,\
1, honeyAnimations, 100>,\
-1, 2000>

.owl5 EnemyWithStopTimer\
<<<<<<<Object.GAME, 95 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, OWL_WIDTH * Drawing.NORMAL, OWL_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, owlTexture>>,\
<FALSE, 0, 100, 0, owlFrames>>,\
TRUE, 6, 0, TRUE>,\
1, owlAnimations, 100>,\
-1, 2000>
;===============================================================================
.dirt12 GameObjectWithDrawing\
<<Object.GAME, 98 * DIRT_WIDTH * Drawing.NORMAL, 0, 6 * DIRT_WIDTH * Drawing.NORMAL, 3 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                 
.grass12 GameObjectWithDrawing\
<<Object.GAME, 98 * DIRT_WIDTH * Drawing.NORMAL, 3 * DIRT_HEIGHT * Drawing.NORMAL, 6 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.shadow12_1 GameObjectWithDrawing\
<<Object.GAME, (98 * DIRT_WIDTH - 0) * Drawing.NORMAL, (2 * DIRT_HEIGHT  + 1 * GRASS_HEIGHT - 8) * Drawing.NORMAL, Drawing.NORMAL, (23) * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.flower4 GameObjectWithDrawing\
<<Object.GAME, 99 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, FLOWER_WIDTH * Drawing.NORMAL, FLOWER_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>

.palm10 GameObjectWithDrawing\
<<Object.GAME, 102 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>
;===============================================================================
.dirt13 GameObjectWithDrawing\
<<Object.GAME, 104 * DIRT_WIDTH * Drawing.NORMAL, 0, 7 * DIRT_WIDTH * Drawing.NORMAL, 4 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                  
.grass13 GameObjectWithDrawing\
<<Object.GAME, 104 * DIRT_WIDTH * Drawing.NORMAL, 4 * DIRT_HEIGHT * Drawing.NORMAL, 7 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.shadow13_1 GameObjectWithDrawing\
<<Object.GAME, (104 * DIRT_WIDTH - 0) * Drawing.NORMAL, (3 * DIRT_HEIGHT  + 1 * GRASS_HEIGHT - 8) * Drawing.NORMAL, Drawing.NORMAL, (23) * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.shadow13_2 GameObjectWithDrawing\
<<Object.GAME, (111 * DIRT_WIDTH - 1) * Drawing.NORMAL, (3 * DIRT_HEIGHT  + 1 * GRASS_HEIGHT - 8) * Drawing.NORMAL, Drawing.NORMAL, (23) * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.bush14 GameObjectWithDrawing\
<<Object.GAME, 107 * DIRT_WIDTH * Drawing.NORMAL, (4 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>
;===============================================================================
.dirt14 GameObjectWithDrawing\
<<Object.GAME, 111 * DIRT_WIDTH * Drawing.NORMAL, 0, 5 * DIRT_WIDTH * Drawing.NORMAL, 3 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                
.grass14 GameObjectWithDrawing\
<<Object.GAME, 111 * DIRT_WIDTH * Drawing.NORMAL, 3 * DIRT_HEIGHT * Drawing.NORMAL, 5 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.shadow14_2 GameObjectWithDrawing\
<<Object.GAME, (116 * DIRT_WIDTH - 1) * Drawing.NORMAL, (2 * DIRT_HEIGHT  + 1 * GRASS_HEIGHT - 25) * Drawing.NORMAL, Drawing.NORMAL, (40) * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.bush15 GameObjectWithDrawing\
<<Object.GAME, 112 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.palm11 GameObjectWithDrawing\
<<Object.GAME, 113 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>
;===============================================================================
.dirt15 GameObjectWithDrawing\
<<Object.GAME, 116 * DIRT_WIDTH * Drawing.NORMAL, 0, 10 * DIRT_WIDTH * Drawing.NORMAL, 1 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                               
.grass15 GameObjectWithDrawing\
<<Object.GAME, 116 * DIRT_WIDTH * Drawing.NORMAL, 1 * DIRT_HEIGHT * Drawing.NORMAL, 10 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.shadow15_2 GameObjectWithDrawing\
<<Object.GAME, (126 * DIRT_WIDTH - 1) * Drawing.NORMAL, 0, Drawing.NORMAL, (1 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.bottomPipe2 GameObjectWithDrawing\
<<Object.GAME, 118 * DIRT_WIDTH * Drawing.NORMAL, (1 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, 1 * BOTTOM_PIPE_WIDTH * Drawing.LITTLE, 10 * BOTTOM_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.DECORATION>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, bottomPipeTexture>                               
                              
.topPipe2 GameObjectWithDrawing\
<<Object.GAME, 118 * DIRT_WIDTH * Drawing.NORMAL - 12, (1 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 7) * Drawing.NORMAL, TOP_PIPE_WIDTH * Drawing.LITTLE, TOP_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.DECORATION>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, topPipeTexture>

.block1 GameObject\
<Object.GAME, 118 * DIRT_WIDTH * Drawing.NORMAL - 12, (1 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 7) * Drawing.NORMAL, 6 * Drawing.NORMAL, TOP_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK

.block2 GameObject\
<Object.GAME, 118 * DIRT_WIDTH * Drawing.NORMAL - 50 + TOP_PIPE_WIDTH * Drawing.LITTLE, (1 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 7) * Drawing.NORMAL, 5 * Drawing.NORMAL, TOP_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK

.star2 Bonus\
<<<<Object.GAME, (118 * DIRT_WIDTH + 1) * Drawing.NORMAL, (1 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, starTexture>>,\
<TRUE, 0, 10, 0, starFrames>>,\
Bonus.STAR

.bottomPipe3 GameObjectWithDrawing\
<<Object.GAME, 120 * DIRT_WIDTH * Drawing.NORMAL, (1 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, 1 * BOTTOM_PIPE_WIDTH * Drawing.LITTLE, 20 * BOTTOM_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, bottomPipeTexture>                               
                              
.topPipe3 GameObjectWithDrawing\
<<Object.GAME, 120 * DIRT_WIDTH * Drawing.NORMAL - 12, (1 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 16) * Drawing.NORMAL, TOP_PIPE_WIDTH * Drawing.LITTLE, TOP_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, topPipeTexture>

.reverse19 GameObject\
<Object.GAME, (120 * DIRT_WIDTH + 6) * Drawing.NORMAL, (1 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE + GameObject.SPECIAL

.reverse20 GameObject\
<Object.GAME, (120 * DIRT_WIDTH + 6) * Drawing.NORMAL, (1 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 50) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE + GameObject.SPECIAL

.venusFlycatcher2 EnemyWithStopTimer\
<<<<<<<Object.GAME, (120 * DIRT_WIDTH + 2) * Drawing.NORMAL, (1 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 5) * Drawing.NORMAL, VENUS_FLYCATCHER_WIDTH * Drawing.LITTLE, VENUS_FLYCATCHER_HEIGHT * Drawing.LITTLE>, GameObject.UNTOCHABLE_ENEMY + GameObject.REVERSEABLE_ENEMY + GameObject.STOPABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, venusFlycatcherTexture>>,\
<FALSE, 0, 300, 0, venusFlycatcherFrames>>,\
TRUE, 0, 2, FALSE>,\
1, venusFlycatcherAnimations, 200>,\
-1, 2000>

.brick10 GameObjectWithDrawing\
<<Object.GAME, 122 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.world1 Bonus\
<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, WORLD_WIDTH * Drawing.SMALL, WORLD_HEIGHT * Drawing.SMALL>, GameObject.BONUS_FOR_PLAYER>,\
<Drawing.SMALL, Drawing.RIGHT, Drawing.UP, worldTexture>>,\
<TRUE, 0, 100, 0, worldFrames>>,\
Bonus.WORLD
                              
.luck6 Luck\
<<<<Object.GAME, 123 * DIRT_WIDTH * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, LUCK_WIDTH * Drawing.NORMAL, LUCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
<FALSE, 0, 150, 0, luckFrames>>,\
Level3.world1

.spring1 GameObjectWithAnimation\
<<<Object.GAME, 125 * DIRT_WIDTH * Drawing.NORMAL, (1 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, SPRING_WIDTH * Drawing.LITTLE, SPRING_HEIGHT * Drawing.LITTLE>, GameObject.JUMP>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, springTexture>>,\
<TRUE, -1, 50, 0, springFrames>
;===============================================================================
.bigBlock3 GameObjectWithDrawing\
<<Object.GAME, 131 * DIRT_WIDTH * Drawing.NORMAL, Drawing.NORMAL, 7 *  BIG_BLOCK_WIDTH / 1 * Drawing.NORMAL, 2 * BIG_BLOCK_HEIGHT / 1 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture>

.reverse21 GameObject\
<Object.GAME, 131 * DIRT_WIDTH * Drawing.NORMAL, 1 * Drawing.NORMAL, Drawing.NORMAL, 500 * Drawing.NORMAL>, GameObject.REVERSE

.reverse22 GameObject\
<Object.GAME, 145 * DIRT_WIDTH * Drawing.NORMAL, 1 * Drawing.NORMAL, Drawing.NORMAL, 500 * Drawing.NORMAL>, GameObject.REVERSE

.owl6 EnemyWithStopTimer\
<<<<<<<Object.GAME, 132 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, OWL_WIDTH * Drawing.NORMAL, OWL_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, owlTexture>>,\
<FALSE, 0, 100, 0, owlFrames>>,\
TRUE, 6, 0, TRUE>,\
1, owlAnimations, 100>,\
-1, 2000>

.honey5 EnemyWithStopTimer\
<<<<<<<Object.GAME, 132 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, HONEY_WIDTH * Drawing.NORMAL, HONEY_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY + GameObject.JUMPABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, honeyTexture>>,\
<FALSE, 0, 100, 0, honeyFrames>>,\
TRUE, 8, 0, TRUE>,\
1, honeyAnimations, 100>,\
-1, 2000>

.owl7 EnemyWithStopTimer\
<<<<<<<Object.GAME, 134 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, OWL_WIDTH * Drawing.NORMAL, OWL_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, owlTexture>>,\
<FALSE, 0, 100, 0, owlFrames>>,\
TRUE, 6, 0, TRUE>,\
1, owlAnimations, 100>,\
-1, 2000>

.honey6 EnemyWithStopTimer\
<<<<<<<Object.GAME, 134 * DIRT_WIDTH * Drawing.NORMAL, (2 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, HONEY_WIDTH * Drawing.NORMAL, HONEY_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY + GameObject.JUMPABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, honeyTexture>>,\
<FALSE, 0, 100, 0, honeyFrames>>,\
TRUE, 8, 0, TRUE>,\
1, honeyAnimations, 100>,\
-1, 2000>

.bee2 Enemy\
<<<<<Object.GAME, 132 * DIRT_WIDTH * Drawing.NORMAL, (6 * DIRT_WIDTH) * Drawing.NORMAL, BEE_WIDTH * Drawing.NORMAL, BEE_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, beeTexture>>,\
<FALSE, 0, 100, 0, beeFrames>>,\
TRUE, 9, 0, FALSE>,\
1, beeAnimations, 100

.bee3 Enemy\
<<<<<Object.GAME, 134 * DIRT_WIDTH * Drawing.NORMAL, (8 * DIRT_WIDTH) * Drawing.NORMAL, BEE_WIDTH * Drawing.NORMAL, BEE_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, beeTexture>>,\
<FALSE, 0, 100, 0, beeFrames>>,\
TRUE, 9, 0, FALSE>,\
1, beeAnimations, 100

.star3 Bonus\
<<<<Object.GAME, (144 * DIRT_WIDTH + 1) * Drawing.NORMAL, (9 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, starTexture>>,\
<TRUE, 0, 10, 0, starFrames>>,\
Bonus.STAR
;===============================================================================
.bigBlock4 GameObjectWithDrawing\
<<Object.GAME, 147 * DIRT_WIDTH * Drawing.NORMAL, 1 *  BIG_BLOCK_HEIGHT * Drawing.NORMAL, 5 *  BIG_BLOCK_WIDTH / 1 * Drawing.NORMAL, 1 * BIG_BLOCK_HEIGHT / 1 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture>

.bigBlock5 GameObjectWithDrawing\
<<Object.GAME, 147 * DIRT_WIDTH * Drawing.NORMAL, 2 *  BIG_BLOCK_HEIGHT * Drawing.NORMAL, 1 *  BIG_BLOCK_WIDTH / 2 * Drawing.NORMAL, 1 * BIG_BLOCK_HEIGHT / 2 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture>

.bigBlock6 GameObjectWithDrawing\
<<Object.GAME, 156 * DIRT_WIDTH * Drawing.NORMAL, 2 *  BIG_BLOCK_HEIGHT * Drawing.NORMAL, 1 *  BIG_BLOCK_WIDTH / 2 * Drawing.NORMAL, 1 * BIG_BLOCK_HEIGHT / 2 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture>

.reverse23 GameObject\
<Object.GAME, 148 * DIRT_WIDTH * Drawing.NORMAL, 1 * Drawing.NORMAL, Drawing.NORMAL, 500 * Drawing.NORMAL>, GameObject.REVERSE

.reverse24 GameObject\
<Object.GAME, (156 * DIRT_WIDTH - 1) * Drawing.NORMAL, 1 * Drawing.NORMAL, Drawing.NORMAL, 500 * Drawing.NORMAL>, GameObject.REVERSE

.snail1 Snail\
<<<<<<Object.GAME, 148 * DIRT_WIDTH * Drawing.NORMAL, (5 * DIRT_WIDTH) * Drawing.NORMAL, SNAIL_WIDTH * Drawing.LITTLE, SNAIL_HEIGHT * Drawing.LITTLE>, GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY + GameObject.SNAIL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, snailTexture>>,\
<FALSE, 0, 200, 0, snailFrames>>,\
TRUE, 7, 0, TRUE>,\
3, snailAnimations, 300>,\
3

.bigBlock7 GameObjectWithDrawing\
<<Object.GAME, 152 * DIRT_WIDTH * Drawing.NORMAL, 6 *  DIRT_HEIGHT * Drawing.NORMAL, 4 *  BIG_BLOCK_WIDTH / 2 * Drawing.NORMAL, 1 * BIG_BLOCK_HEIGHT / 2 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture>

.reverse25 GameObject\
<Object.GAME, (152 * DIRT_WIDTH) * Drawing.NORMAL, 6 *  DIRT_HEIGHT * Drawing.NORMAL, Drawing.NORMAL, 500 * Drawing.NORMAL>, GameObject.REVERSE

.snail2 Snail\
<<<<<<Object.GAME, 154 * DIRT_WIDTH * Drawing.NORMAL, (6 * DIRT_WIDTH) * Drawing.NORMAL, SNAIL_WIDTH * Drawing.LITTLE, SNAIL_HEIGHT * Drawing.LITTLE>, GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY + GameObject.SNAIL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, snailTexture>>,\
<FALSE, 0, 200, 0, snailFrames>>,\
TRUE, 7, 0, TRUE>,\
3, snailAnimations, 300>,\
4
;===============================================================================
.bigBlock8 GameObjectWithDrawing\
<<Object.GAME, 160 * DIRT_WIDTH * Drawing.NORMAL, 4 *  DIRT_HEIGHT * Drawing.NORMAL, 6 *  BIG_BLOCK_WIDTH / 1 * Drawing.NORMAL, 1 * BIG_BLOCK_HEIGHT / 1 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture>

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

.cores dd 3, Level3.core1, Level3.core2, Level3.core3

.cannon EnemyWithBullets\
<<<<<<<Object.GAME, 171 * DIRT_WIDTH * Drawing.NORMAL, 6 *  DIRT_HEIGHT * Drawing.NORMAL, CANNON_WIDTH * Drawing.NORMAL, CANNON_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, cannonTexture>>,\
<0, 0, 0, 0, 0>>,\
0, 0, 0, 0>,\
0, 0, 0>,\
0, 1500>,\
Level3.cores
;===============================================================================
.bigBlock9 GameObjectWithDrawing\
<<Object.GAME, 173 * DIRT_WIDTH * Drawing.NORMAL, 0, 1 *  BIG_BLOCK_WIDTH / 1 * Drawing.NORMAL, 1 * BIG_BLOCK_HEIGHT / 2 * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bigBlockTexture>

.spawn2 GameObjectWithDrawing\
<<Object.GAME, (173 * DIRT_WIDTH + 4) * Drawing.NORMAL, (1 * DIRT_HEIGHT) * Drawing.NORMAL, 1 * SPAWN_WIDTH * Drawing.NORMAL, 1 * SPAWN_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, spawnTexture>
           
BufferLevel3Length = $ - BufferLevel3