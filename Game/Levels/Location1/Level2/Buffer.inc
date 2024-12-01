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




 
            
BufferLevel2Length = $ - BufferLevel2