LevelsMenu:

.wLEVEL dd Object.MENU, 370, 630, 1, 1, .wLEVEL1, 'L', 'E', 'V', 'E', 'L', 0            
.wLEVEL1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wLEVEL2 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>
.wLEVEL3 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wLEVEL4 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>
.wLEVEL5 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>

.wSELECT dd Object.MENU, 750, 630, 1, 1, .wSELECT1, 'S', 'E', 'L', 'E', 'C', 'T', 0            
.wSELECT1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wSELECT2 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>
.wSELECT3 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wSELECT4 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>
.wSELECT5 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>
.wSELECT6 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>
;-------------------------------------------------------------------------------
.locks dd 5, .lock1, .lock2, .lock3, .lock4, .lock5

.levelButton1 Button\                     
<<<Object.MENU, 150 + 270 * 0, 380, LEVEL_BUTTON_WIDTH * Drawing.BIG, LEVEL_BUTTON_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, levelButtonTexture>>,\
TRUE, Button.GameStart, level1
                                          
.levelDigit1 MenuObjectWithDrawing\
<<Object.MENU, 150 + (LEVEL_BUTTON_WIDTH - ZERO_WIDTH) / 2 * Drawing.BIG, 380 + ((LEVEL_BUTTON_HEIGHT - ZERO_HEIGHT) / 2 + 2) * Drawing.BIG, ZERO_WIDTH * Drawing.BIG, ZERO_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, oneTexture>

.lock1 Lock\
<<<Object.MENU, 36 * Drawing.BIG + 3, 52 * Drawing.BIG, LOCK_WIDTH * 2, LOCK_HEIGHT * 2>>,\ 
<2, Drawing.RIGHT, Drawing.UP, lockTexture>>,\
level1 + Level.levelStatistics.isAvailable

.lock2 Lock\
<<<Object.MENU, 75 * Drawing.BIG, 52 * Drawing.BIG, LOCK_WIDTH * 2, LOCK_HEIGHT * 2>>,\ 
<2, Drawing.RIGHT, Drawing.UP, lockTexture>>,\
level2 + Level.levelStatistics.isAvailable

.lock3 Lock\
<<<Object.MENU, 114 * Drawing.BIG - 3, 52 * Drawing.BIG, LOCK_WIDTH * 2, LOCK_HEIGHT * 2>>,\ 
<2, Drawing.RIGHT, Drawing.UP, lockTexture>>,\
level3 + Level.levelStatistics.isAvailable

.lock4 Lock\
<<<Object.MENU, 153 * Drawing.BIG - 6, 52 * Drawing.BIG, LOCK_WIDTH * 2, LOCK_HEIGHT * 2>>,\ 
<2, Drawing.RIGHT, Drawing.UP, lockTexture>>,\
level4 + Level.levelStatistics.isAvailable

.lock5 Lock\
<<<Object.MENU, 192 * Drawing.BIG - 9, 52 * Drawing.BIG, LOCK_WIDTH * 2, LOCK_HEIGHT * 2>>,\ 
<2, Drawing.RIGHT, Drawing.UP, lockTexture>>,\
level5 + Level.levelStatistics.isAvailable

.levelButton2 Button\
<<<Object.MENU, 150 + 270 * 1, 380, LEVEL_BUTTON_WIDTH * Drawing.BIG, LEVEL_BUTTON_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, levelButtonTexture>>,\
FALSE, Button.GameStart, level2

.levelDigit2 MenuObjectWithDrawing\
<<Object.MENU, 150 + 270 * 1 + (LEVEL_BUTTON_WIDTH - ZERO_WIDTH) / 2 * Drawing.BIG, 380 + ((LEVEL_BUTTON_HEIGHT - ZERO_HEIGHT) / 2 + 2) * Drawing.BIG, ZERO_WIDTH * Drawing.BIG, ZERO_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, twoTexture>

.levelButton3 Button\
<<<Object.MENU, 150 + 270 * 2, 380, LEVEL_BUTTON_WIDTH * Drawing.BIG, LEVEL_BUTTON_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, levelButtonTexture>>,\
FALSE, Button.GameStart, level3

.levelDigit3 MenuObjectWithDrawing\
<<Object.MENU, 150 + 270 * 2 + (LEVEL_BUTTON_WIDTH - ZERO_WIDTH) / 2 * Drawing.BIG, 380 + ((LEVEL_BUTTON_HEIGHT - ZERO_HEIGHT) / 2 + 2) * Drawing.BIG, ZERO_WIDTH * Drawing.BIG, ZERO_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, treeTexture>

.levelButton4 Button\
<<<Object.MENU, 150 + 270 * 3, 380, LEVEL_BUTTON_WIDTH * Drawing.BIG, LEVEL_BUTTON_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, levelButtonTexture>>,\
FALSE, Button.GameStart, level4

.levelDigit4 MenuObjectWithDrawing\
<<Object.MENU, 150 + 270 * 3 + (LEVEL_BUTTON_WIDTH - ZERO_WIDTH) / 2 * Drawing.BIG, 380 + ((LEVEL_BUTTON_HEIGHT - ZERO_HEIGHT) / 2 + 2) * Drawing.BIG, ZERO_WIDTH * Drawing.BIG, ZERO_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, fourTexture>

.levelButton5 Button\
<<<Object.MENU, 150 + 270 * 4, 380, LEVEL_BUTTON_WIDTH * Drawing.BIG, LEVEL_BUTTON_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, levelButtonTexture>>,\
FALSE, Button.GameStart, level5

.levelDigit5 MenuObjectWithDrawing\
<<Object.MENU, 150 + 270 * 4 + (LEVEL_BUTTON_WIDTH - ZERO_WIDTH) / 2 * Drawing.BIG, 380 + ((LEVEL_BUTTON_HEIGHT - ZERO_HEIGHT) / 2 + 2) * Drawing.BIG, ZERO_WIDTH * Drawing.BIG, ZERO_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, fiveTexture>
;-------------------------------------------------------------------------------
.levelStar11 Star\
<<<Object.MENU, 150 + 270 * 0 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (3 * STAR_WIDTH / 2 + 1) * Drawing.SMALL, 315, STAR_WIDTH * Drawing.SMALL, STAR_HEIGHT * Drawing.SMALL>>,\ 
<Drawing.SMALL, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
1, level1.levelStatistics.bestStars
.levelStar12 Star\
<<<Object.MENU, 150 + 270 * 0 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (STAR_WIDTH / 2) * Drawing.SMALL, 315, STAR_WIDTH * Drawing.SMALL, STAR_HEIGHT * Drawing.SMALL>>,\ 
<Drawing.SMALL, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
2, level1.levelStatistics.bestStars
.levelStar13 Star\
<<<Object.MENU, 150 + 270 * 0 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG + (STAR_WIDTH / 2 + 2) * Drawing.SMALL, 315, STAR_WIDTH * Drawing.SMALL, STAR_HEIGHT * Drawing.SMALL>>,\ 
<Drawing.SMALL, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
3, level1.levelStatistics.bestStars

.levelStar21 Star\
<<<Object.MENU, 150 + 270 * 1 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (3 * STAR_WIDTH / 2 + 1) * Drawing.SMALL, 315, STAR_WIDTH * Drawing.SMALL, STAR_HEIGHT * Drawing.SMALL>>,\ 
<Drawing.SMALL, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
1, level2.levelStatistics.bestStars
.levelStar22 Star\
<<<Object.MENU, 150 + 270 * 1 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (STAR_WIDTH / 2) * Drawing.SMALL, 315, STAR_WIDTH * Drawing.SMALL, STAR_HEIGHT * Drawing.SMALL>>,\ 
<Drawing.SMALL, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
2, level2.levelStatistics.bestStars
.levelStar23 Star\
<<<Object.MENU, 150 + 270 * 1 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG + (STAR_WIDTH / 2 + 2) * Drawing.SMALL, 315, STAR_WIDTH * Drawing.SMALL, STAR_HEIGHT * Drawing.SMALL>>,\ 
<Drawing.SMALL, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
3, level2.levelStatistics.bestStars

.levelStar31 Star\
<<<Object.MENU, 150 + 270 * 2 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (3 * STAR_WIDTH / 2 + 1) * Drawing.SMALL, 315, STAR_WIDTH * Drawing.SMALL, STAR_HEIGHT * Drawing.SMALL>>,\ 
<Drawing.SMALL, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
1, level3.levelStatistics.bestStars
.levelStar32 Star\
<<<Object.MENU, 150 + 270 * 2 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (STAR_WIDTH / 2) * Drawing.SMALL, 315, STAR_WIDTH * Drawing.SMALL, STAR_HEIGHT * Drawing.SMALL>>,\ 
<Drawing.SMALL, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
2, level3.levelStatistics.bestStars
.levelStar33 Star\
<<<Object.MENU, 150 + 270 * 2 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG + (STAR_WIDTH / 2 + 2) * Drawing.SMALL, 315, STAR_WIDTH * Drawing.SMALL, STAR_HEIGHT * Drawing.SMALL>>,\ 
<Drawing.SMALL, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
3, level3.levelStatistics.bestStars

.levelStar41 Star\
<<<Object.MENU, 150 + 270 * 3 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (3 * STAR_WIDTH / 2 + 1) * Drawing.SMALL, 315, STAR_WIDTH * Drawing.SMALL, STAR_HEIGHT * Drawing.SMALL>>,\ 
<Drawing.SMALL, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
1, level4.levelStatistics.bestStars
.levelStar42 Star\
<<<Object.MENU, 150 + 270 * 3 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (STAR_WIDTH / 2) * Drawing.SMALL, 315, STAR_WIDTH * Drawing.SMALL, STAR_HEIGHT * Drawing.SMALL>>,\ 
<Drawing.SMALL, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
2, level4.levelStatistics.bestStars
.levelStar43 Star\
<<<Object.MENU, 150 + 270 * 3 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG + (STAR_WIDTH / 2 + 2) * Drawing.SMALL, 315, STAR_WIDTH * Drawing.SMALL, STAR_HEIGHT * Drawing.SMALL>>,\ 
<Drawing.SMALL, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
3, level4.levelStatistics.bestStars

.levelStar51 Star\
<<<Object.MENU, 150 + 270 * 4 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (3 * STAR_WIDTH / 2 + 1) * Drawing.SMALL, 315, STAR_WIDTH * Drawing.SMALL, STAR_HEIGHT * Drawing.SMALL>>,\ 
<Drawing.SMALL, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
1, level5.levelStatistics.bestStars
.levelStar52 Star\
<<<Object.MENU, 150 + 270 * 4 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (STAR_WIDTH / 2) * Drawing.SMALL, 315, STAR_WIDTH * Drawing.SMALL, STAR_HEIGHT * Drawing.SMALL>>,\ 
<Drawing.SMALL, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
2, level5.levelStatistics.bestStars
.levelStar53 Star\
<<<Object.MENU, 150 + 270 * 4 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG + (STAR_WIDTH / 2 + 2) * Drawing.SMALL, 315, STAR_WIDTH * Drawing.SMALL, STAR_HEIGHT * Drawing.SMALL>>,\ 
<Drawing.SMALL, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
3, level5.levelStatistics.bestStars
;-------------------------------------------------------------------------------                                   
.backButton Button\
<<<Object.MENU, 625, 200, 4 * (A_WIDTH + 1) * Drawing.BIG - Drawing.BIG, A_HEIGHT * Drawing.BIG>>,\
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>>,\
FALSE, Button.Menu, startMenu

.wBACK dd Object.MENU, 625, 200, 4 * (A_WIDTH + 1) * Drawing.BIG - Drawing.BIG, A_HEIGHT * Drawing.BIG, .wBACK1, 'B', 'A', 'C', 'K', 0          
.wBACK1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wBACK2 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>
.wBACK3 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wBACK4 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture> 

.menuObjects                    dd .menuObjectsLength / 4 - 1,\
                                   .wLEVEL1, .wLEVEL2, .wLEVEL3, .wLEVEL4, .wLEVEL5,\
                                   .wSELECT1, .wSELECT2, .wSELECT3, .wSELECT4, .wSELECT5, .wSELECT6,\ 
                                   activeButtonElement1, activeButtonElement2, activeButtonElement3, activeButtonElement4,\
                                   .levelButton1, .levelDigit1, .levelButton2, .levelDigit2, .levelButton3, .levelDigit3, .levelButton4, .levelDigit4, .levelButton5, .levelDigit5,\
                                   .levelStar11, .levelStar12, .levelStar13, .levelStar21, .levelStar22, .levelStar23, .levelStar31, .levelStar32, .levelStar33, .levelStar41, .levelStar42, .levelStar43, .levelStar51, .levelStar52, .levelStar53,\
                                   .wBACK1, .wBACK2, .wBACK3, .wBACK4
.menuObjectsLength              = $ - .menuObjects

.menuObjectsWithDrawing         dd .menuObjectsWithDrawingLength / 4 - 1,\
                                   .wLEVEL1, .wLEVEL2, .wLEVEL3, .wLEVEL4, .wLEVEL5,\
                                   .wSELECT1, .wSELECT2, .wSELECT3, .wSELECT4, .wSELECT5, .wSELECT6,\
                                   activeButtonElement1, activeButtonElement2, activeButtonElement3, activeButtonElement4,\
                                   .levelButton1, .levelDigit1, .levelButton2, .levelDigit2, .levelButton3, .levelDigit3, .levelButton4, .levelDigit4, .levelButton5, .levelDigit5,\
                                   .levelStar11, .levelStar12, .levelStar13, .levelStar21, .levelStar22, .levelStar23, .levelStar31, .levelStar32, .levelStar33, .levelStar41, .levelStar42, .levelStar43, .levelStar51, .levelStar52, .levelStar53,\
                                   .wBACK1, .wBACK2, .wBACK3, .wBACK4, .lock1, .lock2, .lock3, .lock4, .lock5
.menuObjectsWithDrawingLength   = $ - .menuObjectsWithDrawing

.menuObjectsWithAnimation       dd .menuObjectsWithAnimationLength / 4 - 1,\
                                   activeButtonElement1, activeButtonElement2, activeButtonElement3, activeButtonElement4
.menuObjectsWithAnimationLength = $ - .menuObjectsWithAnimation

.buttons			                  dd .buttonsLength / 4 - 3,\
                                   0, .levelButton1, .levelButton2, .levelButton3, .levelButton4, .levelButton5,\
                                   .backButton, 0
.buttonsLength			            = $ - .buttons

.stars                          dd .starsLength / 4 - 1,\
                                   .levelStar11, .levelStar12, .levelStar13, .levelStar21, .levelStar22, .levelStar23, .levelStar31, .levelStar32, .levelStar33, .levelStar41, .levelStar42, .levelStar43, .levelStar51, .levelStar52, .levelStar53
.starsLength                    = $ - .stars

.strings                        dd .stringsLength / 4 - 1,\
                                   .wLEVEL, .wSELECT, .wBACK 
.stringsLength                  = $ - .strings

levelsMenu Menu <80, 187, 255>, <LevelsMenu.menuObjects, LevelsMenu.menuObjectsWithDrawing, LevelsMenu.menuObjectsWithAnimation, LevelsMenu.buttons, LevelsMenu.stars, LevelsMenu.strings>