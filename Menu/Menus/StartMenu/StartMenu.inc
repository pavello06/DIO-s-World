StartMenu:

.wDIOS dd Object.MENU, 62 * Drawing.BIG, 90 * Drawing.BIG, 4 * (A_WIDTH + 1) * Drawing.HUGE - Drawing.HUGE, A_HEIGHT * Drawing.HUGE, .wDIOS1, 'D', 'I', 'O', '''', 'S', 0 
.wDIOS1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.HUGE, A_HEIGHT * Drawing.HUGE>>, <Drawing.HUGE, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wDIOS2 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.HUGE, A_HEIGHT * Drawing.HUGE>>, <Drawing.HUGE, Drawing.RIGHT, Drawing.UP, voidTexture>
.wDIOS3 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.HUGE, A_HEIGHT * Drawing.HUGE>>, <Drawing.HUGE, Drawing.RIGHT, Drawing.UP, voidTexture>
.wDIOS4 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.HUGE, A_HEIGHT * Drawing.HUGE>>, <Drawing.HUGE, Drawing.RIGHT, Drawing.UP, voidTexture>  
.wDIOS5 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.HUGE, A_HEIGHT * Drawing.HUGE>>, <Drawing.HUGE, Drawing.RIGHT, Drawing.UP, voidTexture>

.wWORLD dd Object.MENU, 62 * Drawing.BIG, 70 * Drawing.BIG, 4 * (A_WIDTH + 1) * Drawing.HUGE - Drawing.HUGE, A_HEIGHT * Drawing.HUGE, .wWORLD1, 'W', 'O', 'R', 'L', 'D', 0
.wWORLD1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.HUGE, A_HEIGHT * Drawing.HUGE>>, <Drawing.HUGE, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wWORLD2 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.HUGE, A_HEIGHT * Drawing.HUGE>>, <Drawing.HUGE, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wWORLD3 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.HUGE, A_HEIGHT * Drawing.HUGE>>, <Drawing.HUGE, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wWORLD4 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.HUGE, A_HEIGHT * Drawing.HUGE>>, <Drawing.HUGE, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wWORLD5 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.HUGE, A_HEIGHT * Drawing.HUGE>>, <Drawing.HUGE, Drawing.RIGHT, Drawing.UP, voidTexture>

.playButton Button\
<<<Object.MENU, 88 * Drawing.BIG, 50 * Drawing.BIG, 4 * (A_WIDTH + 1) * Drawing.BIG - Drawing.BIG, A_HEIGHT * Drawing.BIG>>,\
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>>,\
TRUE, Button.Menu, levelsMenu
                                   
.wPLAY dd Object.MENU, 88 * Drawing.BIG, 50 * Drawing.BIG, 4 * (A_WIDTH + 1) * Drawing.BIG - Drawing.BIG, A_HEIGHT * Drawing.BIG, .wPLAY1, 'P', 'L', 'A', 'Y', 0           
.wPLAY1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wPLAY2 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>
.wPLAY3 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wPLAY4 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>

.optionsButton Button\
<<<Object.MENU, (88- 15)* Drawing.BIG, 35 * Drawing.BIG, 7 * (A_WIDTH + 1) * Drawing.BIG - Drawing.BIG, A_HEIGHT * Drawing.BIG>>,\
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>>,\
TRUE, Button.Menu, optionsMenu
                                   
.wOPTIONS dd Object.MENU, (88- 15) * Drawing.BIG, (35 ) * Drawing.BIG, 7 * (A_WIDTH + 1) * Drawing.BIG - Drawing.BIG, A_HEIGHT * Drawing.BIG, .wOPTIONS1, 'O', 'P', 'T', 'I', 'O', 'N', 'S', 0           
.wOPTIONS1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wOPTIONS2 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>
.wOPTIONS3 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wOPTIONS4 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>
.wOPTIONS5 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>
.wOPTIONS6 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wOPTIONS7 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>

.exitButton Button\
<<<Object.MENU, 88 * Drawing.BIG, 20 * Drawing.BIG, 4 * (A_WIDTH + 1) * Drawing.BIG - Drawing.BIG, A_HEIGHT * Drawing.BIG>>,\
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>>,\
FALSE, Button.Exit, 0
                                   
.wEXIT dd Object.MENU, 88 * Drawing.BIG, 20 * Drawing.BIG, 4 * (A_WIDTH + 1) * Drawing.BIG - Drawing.BIG, A_HEIGHT * Drawing.BIG, .wEXIT1, 'E', 'X', 'I', 'T', 0            
.wEXIT1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wEXIT2 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>
.wEXIT3 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wEXIT4 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture> 

.dirt1 MenuObjectWithDrawing\
<<Object.MENU, 0, 0, 6 * DIRT_WIDTH * Drawing.NORMAL, 1 * DIRT_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>

.grass1 MenuObjectWithDrawing\
<<Object.MENU, 0, 1 * DIRT_HEIGHT * Drawing.NORMAL, 6 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.bush1 MenuObjectWithDrawing\
<<Object.MENU, 65 * Drawing.NORMAL, 1 * (DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL, 1 * BUSH_WIDTH * Drawing.NORMAL, 1 * BUSH_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.dandelion1 MenuObjectWithAnimation\
<<<Object.MENU, 80 * Drawing.NORMAL, 1 * (DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL, 1 * DANDELION_WIDTH * Drawing.NORMAL, 1 * DANDELION_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dandelionTexture>>,\
<FALSE, 0, 200, 0, dandelionFrames>

.shadow1 MenuObjectWithDrawing\
<<Object.MENU, 6 * DIRT_WIDTH * Drawing.NORMAL, 0, 1 * SHADOW_WIDTH * Drawing.NORMAL, 1 * (DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.dirt2 MenuObjectWithDrawing\
<<Object.MENU, 0, 1 * (DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL, 4 * DIRT_WIDTH * Drawing.NORMAL, 1 * DIRT_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>

.grass2 MenuObjectWithDrawing\
<<Object.MENU, 0, 1 * (2 * DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL, 4 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.flower1 MenuObjectWithDrawing\
<<Object.MENU, 20 * Drawing.NORMAL, 2 * (DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL, 1 * FLOWER_WIDTH * Drawing.NORMAL, 1 * FLOWER_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>

.palm1 MenuObjectWithDrawing\
<<Object.MENU, 30 * Drawing.NORMAL, 2 * (DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL, 1 * PALM_WIDTH * Drawing.NORMAL, 1 * PALM_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.toothless1 MenuObjectWithAnimation\
<<<Object.MENU, 50 * Drawing.NORMAL, 2 * (DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL, 1 * TOOTHLESS_WIDTH * Drawing.NORMAL, 1 * TOOTHLESS_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, toothlessTexture>>,\
<FALSE, 0, 400, 0, toothlessFrames>

.shadow2 MenuObjectWithDrawing\
<<Object.MENU, 4 * DIRT_WIDTH * Drawing.NORMAL, 1 * (DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL, 1 * SHADOW_WIDTH * Drawing.NORMAL, 1 * (DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.dirt3 MenuObjectWithDrawing\
<<Object.MENU, 1057, 0, 6 * DIRT_WIDTH * Drawing.NORMAL, 1 * DIRT_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>

.grass3 MenuObjectWithDrawing\
<<Object.MENU, 1057, 1 * DIRT_HEIGHT * Drawing.NORMAL, 6 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.bush2 MenuObjectWithDrawing\
<<Object.MENU, 1480, 1 * (DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL, 1 * BUSH_WIDTH * Drawing.NORMAL, 1 * BUSH_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.dandelion2 MenuObjectWithAnimation\
<<<Object.MENU, 1060, 1 * (DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL, 1 * DANDELION_WIDTH * Drawing.NORMAL, 1 * DANDELION_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dandelionTexture>>,\
<FALSE, 0, 200, 3, dandelionFrames>

.shadow3 MenuObjectWithDrawing\
<<Object.MENU, 1057, 0, 1 * SHADOW_WIDTH * Drawing.NORMAL, 1 * (DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.dirt4 MenuObjectWithDrawing\
<<Object.MENU, 1157, 1 * (DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL, 4 * DIRT_WIDTH * Drawing.NORMAL, 3 * DIRT_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>

.grass4 MenuObjectWithDrawing\
<<Object.MENU, 1157, 1 * (4 * DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL, 4 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.flower2 MenuObjectWithDrawing\
<<Object.MENU, 1407, 2 * (2 * DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL, 1 * FLOWER_WIDTH * Drawing.NORMAL, 1 * FLOWER_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>

.palm2 MenuObjectWithDrawing\
<<Object.MENU, 1307, 2 * (2 * DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL, 1 * PALM_WIDTH * Drawing.NORMAL, 1 * PALM_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.shadow4 MenuObjectWithDrawing\
<<Object.MENU, 1157, 1 * (DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL, 1 * SHADOW_WIDTH * Drawing.NORMAL, 1 * (3 * DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.shadow5 MenuObjectWithDrawing\
<<Object.MENU, 1477, 1 * (DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL, 1 * SHADOW_WIDTH * Drawing.NORMAL, 1 * (3 * DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>



.menuObjects                    dd .menuObjectsLength / 4 - 1

.menuObjectsLength              = $ - .menuObjects

.menuObjectsWithDrawing         dd .menuObjectsWithDrawingLength / 4 - 1,\
                                   activeButtonElement1, activeButtonElement2, activeButtonElement3, activeButtonElement4,\
                                   .wDIOS1, .wDIOS2, .wDIOS3, .wDIOS4, .wDIOS5, .wWORLD1, .wWORLD2, .wWORLD3, .wWORLD4, .wWORLD5,\
                                   .wPLAY1, .wPLAY2, .wPLAY3, .wPLAY4, .wOPTIONS1, .wOPTIONS2, .wOPTIONS3, .wOPTIONS4, .wOPTIONS5, .wOPTIONS6, .wOPTIONS7, .wEXIT1, .wEXIT2, .wEXIT3, .wEXIT4,\
                                   .dirt1, .grass1, .bush1, .dandelion1, .shadow1, .dirt2, .grass2, .flower1, .palm1, .toothless1, .shadow2, .dirt3, .grass3, .bush2, .dandelion2, .shadow3, .dirt4, .grass4, .flower2, .palm2, .shadow4, .shadow5
.menuObjectsWithDrawingLength   = $ - .menuObjectsWithDrawing

.menuObjectsWithAnimation       dd .menuObjectsWithAnimationLength / 4 - 1,\
                                   activeButtonElement1, activeButtonElement2, activeButtonElement3, activeButtonElement4,\
                                   .dandelion1, .toothless1, .dandelion2
.menuObjectsWithAnimationLength = $ - .menuObjectsWithAnimation

.buttons			                  dd .buttonsLength / 4 - 3,\
                                   0, .playButton, .optionsButton, .exitButton, 0
.buttonsLength			            = $ - .buttons

.stars                          dd .starsLength / 4 - 1
 
.starsLength                    = $ - .stars

.strings                        dd .stringsLength / 4 - 1,\
                                   .wDIOS, .wWORLD, .wPLAY, .wOPTIONS, .wEXIT
.stringsLength                  = $ - .strings

startMenu Menu <80, 187, 255>, <StartMenu.menuObjects, StartMenu.menuObjectsWithDrawing, StartMenu.menuObjectsWithAnimation, StartMenu.buttons, StartMenu.stars, StartMenu.strings>