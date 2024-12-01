Level2:

.delete GameObject\
<Object.GAME, 0, -1, 100000, 1>, GameObject.DELETE

.dirt1 GameObjectWithDrawing\
<<Object.GAME, 0, 0, 11 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass1 GameObjectWithDrawing\
<<Object.GAME, 0, 2 * DIRT_HEIGHT * Drawing.NORMAL, 11 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

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


           

.gameObjects                    dd .gameObjectsLength / 4 - 1,\
                                   .delete, .grass1, .brick1, .arrow1, .luck1, .blueBlock1, .yellowBlock1, .blueBlock2,\
                                   player
.gameObjectsLength              = $ - .gameObjects

.gameObjectsWithDrawing         dd .gameObjectsWithDrawingLength / 4 - 1,\
                                   .dirt1, .grass1, .palm1, .bush1, .brick1, .arrow1, .luck1, .blueBlock1, .yellowBlock1, .blueBlock2,\
                                   Statistic.wSCORE1, Statistic.wSCORE2, Statistic.wSCORE3, Statistic.wSCORE4, Statistic.wSCORE5, Statistic.nSCORE1, Statistic.nSCORE2, Statistic.nSCORE3, Statistic.nSCORE4, Statistic.nSCORE5, Statistic.border, Statistic.bonus, Statistic.stars,\
                                   playerBullet1, playerBullet2, playerBullet3, player
.gameObjectsWithDrawingLength   = $ - .gameObjectsWithDrawing

.gameObjectsWithAnimation       dd .gameObjectsWithAnimationLength / 4 - 1,\
                                   .arrow1, .luck1,\
                                   Statistic.bonus,\
                                   playerBullet1, playerBullet2, playerBullet3, player
.gameObjectsWithAnimationLength = $ - .gameObjectsWithAnimation

.entities                       dd .entitiesLength / 4 - 1,\
                                   player, playerBullet1, playerBullet2, playerBullet3
.entitiesLength                 = $ - .entities

.bricksWithBreakTimer           dd .bricksWithBreakTimerLength / 4 - 1
                                  
.bricksWithBreakTimerLength     = $ - .bricksWithBreakTimer

.enemiesWithBullets             dd .enemiesWithBulletsLength / 4 - 1
                                   
.enemiesWithBulletsLength       = $ - .enemiesWithBullets

.enemiesWithReverseTimer        dd .enemiesWithReverseTimerLength / 4 - 1
                                   
.enemiesWithReverseTimerLength  = $ - .enemiesWithReverseTimer

.enemiesWithStopTimer           dd .enemiesWithStopTimerLength / 4 - 1

.enemiesWithStopTimerLength     = $ - .enemiesWithStopTimer

.bullets                         dd .bulletsLength / 4 - 1,\
                                   playerBullet1, playerBullet2, playerBullet3
.bulletsLength                   = $ - .bullets

.words                          dd .wordsLength / 4 - 1,\
                                   Statistic.wSCORE
.wordsLength                    = $ - .words

.numbers                        dd .numbersLength / 4 - 1,\
                                   Statistic.nSCORE 
.numbersLength                  = $ - .numbers

level2 Level <TRUE, 0, 0, 0, 0>, 0, 0, 5475, 1300, <80, 187, 255>, <Level2.gameObjects, Level2.gameObjectsWithDrawing, Level2.gameObjectsWithAnimation, Level2.entities, Level2.bricksWithBreakTimer, Level2.enemiesWithBullets, Level2.enemiesWithReverseTimer, Level2.enemiesWithStopTimer, Level2.bullets, Level2.words, Level2.numbers>, Level2, BufferLevel2