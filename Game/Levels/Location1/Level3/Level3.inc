Level3:

.delete GameObject\
<Object.GAME, 0, -1, 100000, 1>, GameObject.DELETE

.border1 GameObject\
<Object.GAME, -1, 0, 1, 100000>, GameObject.BLOCK
;===============================================================================
.dirt1 GameObjectWithDrawing\
<<Object.GAME, 0, 0, 7 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass1 GameObjectWithDrawing\
<<Object.GAME, 0, 2 * DIRT_HEIGHT * Drawing.NORMAL, 7 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

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

.topBlock3 GameObject\
<Object.GAME, 45 * DIRT_WIDTH * Drawing.NORMAL, (10 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, 6 * DIRT_WIDTH * Drawing.NORMAL, 1>, GameObject.TOP_BLOCK

.bush6 GameObjectWithDrawing\
<<Object.GAME, 47 * DIRT_WIDTH * Drawing.NORMAL, (10 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.reverse7 GameObject\
<Object.GAME, 36 * DIRT_WIDTH * Drawing.NORMAL, (10 * DIRT_HEIGHT + 1 * GRASS_HEIGHT + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE

.special3 GameObject\
<Object.GAME, (43 * DIRT_WIDTH + 7) * Drawing.NORMAL, (10 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.special4 GameObject\
<Object.GAME, (45 * DIRT_WIDTH - 8) * Drawing.NORMAL, (10 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.SPECIAL

.reverse8 GameObject\
<Object.GAME, 51 * DIRT_WIDTH * Drawing.NORMAL, (10 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE
 
.honey2 EnemyWithStopTimer\
<<<<<<<Object.GAME, 37 * DIRT_WIDTH * Drawing.NORMAL, (10 * DIRT_WIDTH + 1 * GRASS_WIDTH + 1) * Drawing.NORMAL, HONEY_WIDTH * Drawing.NORMAL, HONEY_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY + GameObject.JUMPABLE_ENEMY>,\
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







 

           

.gameObjects                    dd .gameObjectsLength / 4 - 1,\
                                   .delete, .border1,\
                                   .dirt1, .grass1, .spawn1,\
                                   .dirt2, .grass2, .reverse1, .reverse2, .owl1, .coin1, .luck1, .brick1, .brick2, .brick3, .coin2, .luck2, .coin3, .luck3, .brick4, .brick5, .brick6, .reverse3, .specia1, .specia2, .reverse4, .honey1, .coin4, .coin5, .coin6,\
                                   .dirt5, .grass5, .topBlock2, .bigBlock1, .dirt3, .grass3, .dirt4, .grass4, .topBlock1, .reverse5, .reverse6, .owl2, .coin10, .coin11, .coin12, .coin13, .coin7, .coin8, .coin9,\
                                   .dirt6, .grass6, .topBlock3, .reverse7, .special3, .special4, .reverse8, .honey2,\
                                   .dirt7, .grass7, .brick7, .coin14, .luck4, .reverse9, .reverse10, .owl3,\
                                   .dirt8, .grass8, .reverse11, .reverse12, .bee1, .bigBlock2, .star1,\
                                   .dirt9, .grass9, .reverse13, .reverse14, .owl4 ,\
                                   player
.gameObjectsLength              = $ - .gameObjects

.gameObjectsWithDrawing         dd .gameObjectsWithDrawingLength / 4 - 1,\
                                   .dirt1, .grass1, .spawn1, .palm1, .bush1,\
                                   .dirt2, .grass2, .palm2, .bush2, .flower1, .owl1, .coin1, .luck1, .brick1, .brick2, .brick3, .coin2, .luck2, .coin3, .luck3, .brick4, .brick5, .brick6, .honey1, .coin4, .coin5, .coin6,\
                                   .dirt5, .grass5, .bigBlock1, .bush5, .palm5, .dirt3, .grass3, .shadow1, .palm3, .bush3, .palm4, .dirt4, .grass4, .shadow2, .bush4, .owl2, .coin10, .coin11, .coin12, .coin13, .coin7, .coin8, .coin9,\
                                   .dirt6, .grass6, .bush6, .honey2,\
                                   .dirt7, .grass7, .shadow3, .brick7, .coin14, .luck4, .bush7, .flower2, .bush8, .palm6, .bush9, .owl3,\
                                   .dirt8, .grass8, .bush10, .bush11, .palm7, .bee1, .bigBlock2, .star1,\
                                   .dirt9, .grass9, .bush12, .owl4,\
                                   Statistic.wSCORE1, Statistic.wSCORE2, Statistic.wSCORE3, Statistic.wSCORE4, Statistic.wSCORE5, Statistic.nSCORE1, Statistic.nSCORE2, Statistic.nSCORE3, Statistic.nSCORE4, Statistic.nSCORE5, Statistic.border, Statistic.bonus, Statistic.stars,\
                                   playerBullet1, playerBullet2, playerBullet3, player
.gameObjectsWithDrawingLength   = $ - .gameObjectsWithDrawing

.gameObjectsWithAnimation       dd .gameObjectsWithAnimationLength / 4 - 1,\
                                   .owl1, .coin1, .luck1, .coin2, .luck2, .coin3, .luck3, .honey1, .coin4, .coin5, .coin6,\
                                   .owl2, .coin10, .coin11, .coin12, .coin13, .coin7, .coin8, .coin9,\
                                   .honey2,\
                                   .coin14, .luck4, .owl3,\
                                   .bee1,\
                                   .owl4,\
                                   Statistic.bonus,\
                                   playerBullet1, playerBullet2, playerBullet3, player
.gameObjectsWithAnimationLength = $ - .gameObjectsWithAnimation

.entities                       dd .entitiesLength / 4 - 1,\
                                   player, playerBullet1, playerBullet2, playerBullet3,\
                                   .owl1, .honey1,\
                                   .owl2,\
                                   .honey2,\
                                   .owl3,\
                                   .bee1,\
                                   .owl4
.entitiesLength                 = $ - .entities

.bricksWithBreakTimer           dd .bricksWithBreakTimerLength / 4 - 1
                                  
.bricksWithBreakTimerLength     = $ - .bricksWithBreakTimer

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
                                   Statistic.wSCORE
.wordsLength                    = $ - .words

.numbers                        dd .numbersLength / 4 - 1,\
                                   Statistic.nSCORE 
.numbersLength                  = $ - .numbers

level3 Level <FALSE, 0, 0, 0, 0>, 0, 0, 78475, 1300, <80, 187, 255>, <Level3.gameObjects, Level3.gameObjectsWithDrawing, Level3.gameObjectsWithAnimation, Level3.entities, Level3.bricksWithBreakTimer, Level3.enemiesWithBullets, Level3.enemiesWithReverseTimer, Level3.enemiesWithStopTimer, Level3.bullets, Level3.words, Level3.numbers>, Level3, BufferLevel3