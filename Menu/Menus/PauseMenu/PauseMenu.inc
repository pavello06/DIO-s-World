PauseMenu:

.wPAUSE dd Object.MENU, 62 * Drawing.BIG, 90 * Drawing.BIG, 4 * (A_WIDTH + 1) * Drawing.HUGE - Drawing.HUGE, A_HEIGHT * Drawing.HUGE, .wPAUSE1, 'P', 'A', 'U', 'S', 'E', 0
.wPAUSE1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.HUGE, A_HEIGHT * Drawing.HUGE>>, <Drawing.HUGE, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wPAUSE2 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.HUGE, A_HEIGHT * Drawing.HUGE>>, <Drawing.HUGE, Drawing.RIGHT, Drawing.UP, voidTexture>
.wPAUSE3 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.HUGE, A_HEIGHT * Drawing.HUGE>>, <Drawing.HUGE, Drawing.RIGHT, Drawing.UP, voidTexture>
.wPAUSE4 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.HUGE, A_HEIGHT * Drawing.HUGE>>, <Drawing.HUGE, Drawing.RIGHT, Drawing.UP, voidTexture>  
.wPAUSE5 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.HUGE, A_HEIGHT * Drawing.HUGE>>, <Drawing.HUGE, Drawing.RIGHT, Drawing.UP, voidTexture>

.background1 MenuObjectWithDrawing\
<<Object.MENU, 40 * Drawing.BIG, 45 * Drawing.BIG, MENU_WIDTH * Drawing.HUGE, MENU_HEIGHT * Drawing.HUGE>>,\
<Drawing.HUGE, Drawing.RIGHT, Drawing.UP, screenButtonTexture>

.menuButton Button\
<<<Object.MENU, 40 * Drawing.BIG, 45 * Drawing.BIG, MENU_WIDTH * Drawing.HUGE, MENU_HEIGHT * Drawing.HUGE>>,\
<Drawing.HUGE, Drawing.RIGHT, Drawing.UP, menuTexture>>,\
TRUE, Button.Menu, levelsMenu

.background2 MenuObjectWithDrawing\
<<Object.MENU, 90 * Drawing.BIG, 45 * Drawing.BIG, MENU_WIDTH * Drawing.HUGE, MENU_HEIGHT * Drawing.HUGE>>,\
<Drawing.HUGE, Drawing.RIGHT, Drawing.UP, screenButtonTexture>
                                   
.restartButton Button\
<<<Object.MENU, 90 * Drawing.BIG, 45 * Drawing.BIG, RESTART_WIDTH * Drawing.HUGE, RESTART_HEIGHT * Drawing.HUGE>>,\
<Drawing.HUGE, Drawing.RIGHT, Drawing.UP, restartTexture>>,\
FALSE, Button.GameRestart, 0

.background3 MenuObjectWithDrawing\
<<Object.MENU, 140 * Drawing.BIG, 45 * Drawing.BIG, MENU_WIDTH * Drawing.HUGE, MENU_HEIGHT * Drawing.HUGE>>,\
<Drawing.HUGE, Drawing.RIGHT, Drawing.UP, screenButtonTexture>

.continueButton Button\
<<<Object.MENU, 140 * Drawing.BIG, 45 * Drawing.BIG, CONTINUE_WIDTH * Drawing.HUGE, CONTINUE_HEIGHT * Drawing.HUGE>>,\
<Drawing.HUGE, Drawing.RIGHT, Drawing.UP, continueTexture>>,\
FALSE, Button.GameContinue, 0
                                   



.menuObjects                    dd .menuObjectsLength / 4 - 1

.menuObjectsLength              = $ - .menuObjects

.menuObjectsWithDrawing         dd .menuObjectsWithDrawingLength / 4 - 1,\
                                   activeButtonElement1, activeButtonElement2, activeButtonElement3, activeButtonElement4,\
                                   .wPAUSE1, .wPAUSE2, .wPAUSE3, .wPAUSE4, .wPAUSE5,\
                                   .background1, .menuButton, .background2, .restartButton, .background3, .continueButton
.menuObjectsWithDrawingLength   = $ - .menuObjectsWithDrawing

.menuObjectsWithAnimation       dd .menuObjectsWithAnimationLength / 4 - 1,\
                                   activeButtonElement1, activeButtonElement2, activeButtonElement3, activeButtonElement4
.menuObjectsWithAnimationLength = $ - .menuObjectsWithAnimation

.buttons			                  dd .buttonsLength / 4 - 3,\
                                   0, .menuButton, .restartButton, .continueButton, 0
.buttonsLength			            = $ - .buttons

.stars                          dd .starsLength / 4 - 1
 
.starsLength                    = $ - .stars

.strings                        dd .stringsLength / 4 - 1,\
                                   .wPAUSE
.stringsLength                  = $ - .strings
                                                                                                                                                                                       
pauseMenu Menu <80, 187, 255>, <PauseMenu.menuObjects, PauseMenu.menuObjectsWithDrawing, PauseMenu.menuObjectsWithAnimation, PauseMenu.buttons, PauseMenu.stars, PauseMenu.strings>