StartMenu:

.wDIOS String <Object.MENU, 30 * Drawing.BIG, 80 * Drawing.BIG, 4 * (A_WIDTH + 1) * Drawing.BIG - Drawing.BIG, A_HEIGHT * Drawing.BIG>, <'D', 'I', 'O', 'S', 0, 0, 0, 0, 0, 0>, .wDIOS1
.wDIOS1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wDIOS2 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>
.wDIOS3 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>
.wDIOS4 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>  

.wWORLD String <Object.MENU, 79 * Drawing.BIG, 80 * Drawing.BIG, 4 * (A_WIDTH + 1) * Drawing.BIG - Drawing.BIG, A_HEIGHT * Drawing.BIG>, <'W', 'O', 'R', 'L', 'D', 0, 0, 0, 0, 0>, .wWORLD1
.wWORLD1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wWORLD2 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wWORLD3 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wWORLD4 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wWORLD5 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>

.playButton Button\
<<<Object.MENU, 70 * Drawing.BIG, 60 * Drawing.BIG, 4 * (A_WIDTH + 1) * Drawing.BIG - Drawing.BIG, A_HEIGHT * Drawing.BIG>>,\
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>>,\
TRUE, Button.Menu, levelsMenu
                                   
.wPLAY String <Object.MENU, 70 * Drawing.BIG, 60 * Drawing.BIG, 4 * (A_WIDTH + 1) * Drawing.BIG - Drawing.BIG, A_HEIGHT * Drawing.BIG>, <'P', 'L', 'A', 'Y', 0, 0, 0, 0, 0, 0>, .wPLAY1           
.wPLAY1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wPLAY2 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>
.wPLAY3 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wPLAY4 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>

.exitButton Button\
<<<Object.MENU, 70 * Drawing.BIG, 40 * Drawing.BIG, 4 * (A_WIDTH + 1) * Drawing.BIG - Drawing.BIG, A_HEIGHT * Drawing.BIG>>,\
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>>,\
TRUE, Button.Exit, 0
                                   
.wEXIT String <Object.MENU, 70 * Drawing.BIG, 40 * Drawing.BIG, 4 * (A_WIDTH + 1) * Drawing.BIG - Drawing.BIG, A_HEIGHT * Drawing.BIG>, <'E', 'X', 'I', 'T', 0, 0, 0, 0, 0, 0>, .wEXIT1           
.wEXIT1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wEXIT2 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>
.wEXIT3 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wEXIT4 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture> 




.menuObjects                    dd .menuObjectsLength / 4 - 1

.menuObjectsLength              = $ - .menuObjects

.menuObjectsWithDrawing         dd .menuObjectsWithDrawingLength / 4 - 1,\
                                   activeButtonElement1, activeButtonElement2, activeButtonElement3, activeButtonElement4,\
                                   .wDIOS1, .wDIOS2, .wDIOS3, .wDIOS4, .wWORLD1, .wWORLD2, .wWORLD3, .wWORLD4, .wWORLD5,\
                                   .wPLAY1, .wPLAY2, .wPLAY3, .wPLAY4, .wEXIT1, .wEXIT2, .wEXIT3, .wEXIT4
.menuObjectsWithDrawingLength   = $ - .menuObjectsWithDrawing

.menuObjectsWithAnimation       dd .menuObjectsWithAnimationLength / 4 - 1,\
                                   activeButtonElement1, activeButtonElement2, activeButtonElement3, activeButtonElement4
.menuObjectsWithAnimationLength = $ - .menuObjectsWithAnimation

.buttons			                  dd .buttonsLength / 4 - 3,\
                                   0, .playButton, .exitButton, 0
.buttonsLength			            = $ - .buttons

.stars                          dd .starsLength / 4 - 1
 
.starsLength                    = $ - .stars

.words                          dd .wordsLength / 4 - 1,\
                                   .wDIOS, .wWORLD, .wPLAY, .wEXIT
.wordsLength                    = $ - .words

.numbers                        dd .numbersLength / 4 - 1
                                    
.numbersLength                  = $ - .numbers

startMenu Menu <StartMenu.menuObjects, StartMenu.menuObjectsWithDrawing, StartMenu.menuObjectsWithAnimation, StartMenu.buttons, StartMenu.stars, StartMenu.words, StartMenu.numbers>