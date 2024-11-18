LevelsMenu:

.wLEVEL String <Object.MENU, 370, 770, 1, 1>, <'L', 'E', 'V', 'E', 'L', 0, 0, 0, 0, 0>, .wLEVEL1            
.wLEVEL1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wLEVEL2 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>
.wLEVEL3 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wLEVEL4 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>
.wLEVEL5 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>

.wSELECT String <Object.MENU, 750, 770, 1, 1>, <'S', 'E', 'L', 'E', 'C', 'T', 0, 0, 0, 0>, .wSELECT1            
.wSELECT1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wSELECT2 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>
.wSELECT3 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wSELECT4 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>
.wSELECT5 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>
.wSELECT6 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>
;-------------------------------------------------------------------------------
.levelButton1 Button\                     
<<<Object.MENU, 150 + 270 * 0, 600, LEVEL_BUTTON_WIDTH * Drawing.BIG, LEVEL_BUTTON_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, levelButtonTexture>>,\
TRUE, Button.Game, level1

.levelDigit1 MenuObjectWithDrawing\
<<Object.MENU, 150 + (LEVEL_BUTTON_WIDTH - ONE_WIDTH) / 2 * Drawing.BIG, 600 + ((LEVEL_BUTTON_HEIGHT - ONE_HEIGHT) / 2 + 2) * Drawing.BIG, ONE_WIDTH * Drawing.BIG, ONE_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, oneTexture>

.levelButton2 Button\
<<<Object.MENU, 150 + 270 * 1, 600, LEVEL_BUTTON_WIDTH * Drawing.BIG, LEVEL_BUTTON_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, levelButtonTexture>>,\
TRUE, Button.Game, level1

.levelDigit2 MenuObjectWithDrawing\
<<Object.MENU, 150 + 270 * 1 + (LEVEL_BUTTON_WIDTH - ONE_WIDTH) / 2 * Drawing.BIG, 600 + ((LEVEL_BUTTON_HEIGHT - ONE_HEIGHT) / 2 + 2) * Drawing.BIG, ONE_WIDTH * Drawing.BIG, ONE_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, twoTexture>

.levelButton3 Button\
<<<Object.MENU, 150 + 270 * 2, 600, LEVEL_BUTTON_WIDTH * Drawing.BIG, LEVEL_BUTTON_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, levelButtonTexture>>,\
TRUE, Button.Game, level1

.levelDigit3 MenuObjectWithDrawing\
<<Object.MENU, 150 + 270 * 2 + (LEVEL_BUTTON_WIDTH - ONE_WIDTH) / 2 * Drawing.BIG, 600 + ((LEVEL_BUTTON_HEIGHT - ONE_HEIGHT) / 2 + 2) * Drawing.BIG, ONE_WIDTH * Drawing.BIG, ONE_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, treeTexture>

.levelButton4 Button\
<<<Object.MENU, 150 + 270 * 3, 600, LEVEL_BUTTON_WIDTH * Drawing.BIG, LEVEL_BUTTON_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, levelButtonTexture>>,\
TRUE, Button.Game, level1

.levelDigit4 MenuObjectWithDrawing\
<<Object.MENU, 150 + 270 * 3 + (LEVEL_BUTTON_WIDTH - ONE_WIDTH) / 2 * Drawing.BIG, 600 + ((LEVEL_BUTTON_HEIGHT - ONE_HEIGHT) / 2 + 2) * Drawing.BIG, ONE_WIDTH * Drawing.BIG, ONE_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, fourTexture>

.levelButton5 Button\
<<<Object.MENU, 150 + 270 * 4, 600, LEVEL_BUTTON_WIDTH * Drawing.BIG, LEVEL_BUTTON_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, levelButtonTexture>>,\
TRUE, Button.Game, level1

.levelDigit5 MenuObjectWithDrawing\
<<Object.MENU, 150 + 270 * 4 + (LEVEL_BUTTON_WIDTH - ONE_WIDTH) / 2 * Drawing.BIG, 600 + ((LEVEL_BUTTON_HEIGHT - ONE_HEIGHT) / 2 + 2) * Drawing.BIG, ONE_WIDTH * Drawing.BIG, ONE_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, fiveTexture>
;-------------------------------------------------------------------------------
.levelButton6 Button\
<<<Object.MENU, 150  + 270 * 0, 380, LEVEL_BUTTON_WIDTH * Drawing.BIG, LEVEL_BUTTON_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, levelButtonTexture>>,\
TRUE, Button.Game, level1

.levelDigit6 MenuObjectWithDrawing\
<<Object.MENU, 150 + (LEVEL_BUTTON_WIDTH - ONE_WIDTH) / 2 * Drawing.BIG, 380 + ((LEVEL_BUTTON_HEIGHT - ONE_HEIGHT) / 2 + 2) * Drawing.BIG, ONE_WIDTH * Drawing.BIG, ONE_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, sixTexture>

.levelButton7 Button\
<<<Object.MENU, 150 + 270 * 1, 380, LEVEL_BUTTON_WIDTH * Drawing.BIG, LEVEL_BUTTON_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, levelButtonTexture>>,\
TRUE, Button.Game, level1

.levelDigit7 MenuObjectWithDrawing\
<<Object.MENU, 150 + 270 * 1 + (LEVEL_BUTTON_WIDTH - ONE_WIDTH) / 2 * Drawing.BIG, 380 + ((LEVEL_BUTTON_HEIGHT - ONE_HEIGHT) / 2 + 2) * Drawing.BIG, ONE_WIDTH * Drawing.BIG, ONE_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, sevenTexture>

.levelButton8 Button\
<<<Object.MENU, 150 + 270 * 2, 380, LEVEL_BUTTON_WIDTH * Drawing.BIG, LEVEL_BUTTON_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, levelButtonTexture>>,\
TRUE, Button.Game, level1

.levelDigit8 MenuObjectWithDrawing\
<<Object.MENU, 150 + 270 * 2 + (LEVEL_BUTTON_WIDTH - ONE_WIDTH) / 2 * Drawing.BIG, 380 + ((LEVEL_BUTTON_HEIGHT - ONE_HEIGHT) / 2 + 2) * Drawing.BIG, ONE_WIDTH * Drawing.BIG, ONE_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, eightTexture>

.levelButton9 Button\
<<<Object.MENU, 150 + 270 * 3, 380, LEVEL_BUTTON_WIDTH * Drawing.BIG, LEVEL_BUTTON_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, levelButtonTexture>>,\
TRUE, Button.Game, level1

.levelDigit9 MenuObjectWithDrawing\
<<Object.MENU, 150 + 270 * 3 + (LEVEL_BUTTON_WIDTH - ONE_WIDTH) / 2 * Drawing.BIG, 380 + ((LEVEL_BUTTON_HEIGHT - ONE_HEIGHT) / 2 + 2) * Drawing.BIG, ONE_WIDTH * Drawing.BIG, ONE_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, nineTexture>

.levelButton10 Button\
<<<Object.MENU, 150 + 270 * 4, 380, LEVEL_BUTTON_WIDTH * Drawing.BIG, LEVEL_BUTTON_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, levelButtonTexture>>,\
TRUE, Button.Game, level1

.levelDigit101 MenuObjectWithDrawing\
<<Object.MENU, 150 + 270 * 4 + (LEVEL_BUTTON_WIDTH - 2 * ONE_WIDTH) / 2 * Drawing.BIG, 380 + ((LEVEL_BUTTON_HEIGHT - ONE_HEIGHT) / 2 + 2) * Drawing.BIG, ONE_WIDTH * Drawing.BIG, ONE_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, oneTexture>
.levelDigit102 MenuObjectWithDrawing\
<<Object.MENU, 150 + 270 * 4 + ((LEVEL_BUTTON_WIDTH - 2 * ONE_WIDTH) / 2 + ONE_WIDTH) * Drawing.BIG, 380 + ((LEVEL_BUTTON_HEIGHT - ONE_HEIGHT) / 2 + 2) * Drawing.BIG, ONE_WIDTH * Drawing.BIG, ONE_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, zeroTexture>
;-------------------------------------------------------------------------------
.levelButton11 Button\
<<<Object.MENU, 150  + 270 * 0, 160, LEVEL_BUTTON_WIDTH * Drawing.BIG, LEVEL_BUTTON_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, levelButtonTexture>>,\
TRUE, Button.Game, level1

.levelDigit111 MenuObjectWithDrawing\
<<Object.MENU, 150 + 270 * 0 + (LEVEL_BUTTON_WIDTH - 2 * ONE_WIDTH) / 2 * Drawing.BIG, 160 + ((LEVEL_BUTTON_HEIGHT - ONE_HEIGHT) / 2 + 2) * Drawing.BIG, ONE_WIDTH * Drawing.BIG, ONE_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, oneTexture>
.levelDigit112 MenuObjectWithDrawing\
<<Object.MENU, 150 + 270 * 0 + ((LEVEL_BUTTON_WIDTH - 2 * ONE_WIDTH) / 2 + ONE_WIDTH) * Drawing.BIG, 160 + ((LEVEL_BUTTON_HEIGHT - ONE_HEIGHT) / 2 + 2) * Drawing.BIG, ONE_WIDTH * Drawing.BIG, ONE_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, oneTexture>

.levelButton12 Button\
<<<Object.MENU, 150 + 270 * 1, 160, LEVEL_BUTTON_WIDTH * Drawing.BIG, LEVEL_BUTTON_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, levelButtonTexture>>,\
TRUE, Button.Game, level1

.levelDigit121 MenuObjectWithDrawing\
<<Object.MENU, 150 + 270 * 1 + (LEVEL_BUTTON_WIDTH - 2 * ONE_WIDTH) / 2 * Drawing.BIG, 160 + ((LEVEL_BUTTON_HEIGHT - ONE_HEIGHT) / 2 + 2) * Drawing.BIG, ONE_WIDTH * Drawing.BIG, ONE_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, oneTexture>
.levelDigit122 MenuObjectWithDrawing\
<<Object.MENU, 150 + 270 * 1 + ((LEVEL_BUTTON_WIDTH - 2 * ONE_WIDTH) / 2 + ONE_WIDTH) * Drawing.BIG, 160 + ((LEVEL_BUTTON_HEIGHT - ONE_HEIGHT) / 2 + 2) * Drawing.BIG, ONE_WIDTH * Drawing.BIG, ONE_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP,twoTexture>

.levelButton13 Button\
<<<Object.MENU, 150 + 270 * 2, 160, LEVEL_BUTTON_WIDTH * Drawing.BIG, LEVEL_BUTTON_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, levelButtonTexture>>,\
TRUE, Button.Game, level1

.levelDigit131 MenuObjectWithDrawing\
<<Object.MENU, 150 + 270 * 2 + (LEVEL_BUTTON_WIDTH - 2 * ONE_WIDTH) / 2 * Drawing.BIG, 160 + ((LEVEL_BUTTON_HEIGHT - ONE_HEIGHT) / 2 + 2) * Drawing.BIG, ONE_WIDTH * Drawing.BIG, ONE_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, oneTexture>
.levelDigit132 MenuObjectWithDrawing\
<<Object.MENU, 150 + 270 * 2 + ((LEVEL_BUTTON_WIDTH - 2 * ONE_WIDTH) / 2 + ONE_WIDTH) * Drawing.BIG, 160 + ((LEVEL_BUTTON_HEIGHT - ONE_HEIGHT) / 2 + 2) * Drawing.BIG, ONE_WIDTH * Drawing.BIG, ONE_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, treeTexture>

.levelButton14 Button\
<<<Object.MENU, 150 + 270 * 3, 160, LEVEL_BUTTON_WIDTH * Drawing.BIG, LEVEL_BUTTON_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, levelButtonTexture>>,\
TRUE, Button.Game, level1

.levelDigit141 MenuObjectWithDrawing\
<<Object.MENU, 150 + 270 * 3 + (LEVEL_BUTTON_WIDTH - 2 * ONE_WIDTH) / 2 * Drawing.BIG, 160 + ((LEVEL_BUTTON_HEIGHT - ONE_HEIGHT) / 2 + 2) * Drawing.BIG, ONE_WIDTH * Drawing.BIG, ONE_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, oneTexture>
.levelDigit142 MenuObjectWithDrawing\
<<Object.MENU, 150 + 270 * 3 + ((LEVEL_BUTTON_WIDTH - 2 * ONE_WIDTH) / 2 + ONE_WIDTH) * Drawing.BIG, 160 + ((LEVEL_BUTTON_HEIGHT - ONE_HEIGHT) / 2 + 2) * Drawing.BIG, ONE_WIDTH * Drawing.BIG, ONE_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, fourTexture>

.levelButton15 Button\
<<<Object.MENU, 150 + 270 * 4, 160, LEVEL_BUTTON_WIDTH * Drawing.BIG, LEVEL_BUTTON_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, levelButtonTexture>>,\
TRUE, Button.Game, level1

.levelDigit151 MenuObjectWithDrawing\
<<Object.MENU, 150 + 270 * 4 + (LEVEL_BUTTON_WIDTH - 2 * ONE_WIDTH) / 2 * Drawing.BIG, 160 + ((LEVEL_BUTTON_HEIGHT - ONE_HEIGHT) / 2 + 2) * Drawing.BIG, ONE_WIDTH * Drawing.BIG, ONE_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, oneTexture>
.levelDigit152 MenuObjectWithDrawing\
<<Object.MENU, 150 + 270 * 4 + ((LEVEL_BUTTON_WIDTH - 2 * ONE_WIDTH) / 2 + ONE_WIDTH) * Drawing.BIG, 160 + ((LEVEL_BUTTON_HEIGHT - ONE_HEIGHT) / 2 + 2) * Drawing.BIG, ONE_WIDTH * Drawing.BIG, ONE_HEIGHT * Drawing.BIG>>,\ 
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, fiveTexture>
;-------------------------------------------------------------------------------
.levelStar11 Star\
<<<Object.MENU, 150 + 270 * 0 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (3 * STAR_WIDTH / 2 + 1) * Drawing.LITTLE, 550, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
1, level1
.levelStar12 Star\
<<<Object.MENU, 150 + 270 * 0 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (STAR_WIDTH / 2) * Drawing.LITTLE, 550, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
2, level1
.levelStar13 Star\
<<<Object.MENU, 150 + 270 * 0 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG + (STAR_WIDTH / 2 + 2) * Drawing.LITTLE, 550, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
3, level1

.levelStar21 Star\
<<<Object.MENU, 150 + 270 * 1 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (3 * STAR_WIDTH / 2 + 1) * Drawing.LITTLE, 550, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
1, level1
.levelStar22 Star\
<<<Object.MENU, 150 + 270 * 1 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (STAR_WIDTH / 2) * Drawing.LITTLE, 550, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
2, level1
.levelStar23 Star\
<<<Object.MENU, 150 + 270 * 1 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG + (STAR_WIDTH / 2 + 2) * Drawing.LITTLE, 550, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
3, level1

.levelStar31 Star\
<<<Object.MENU, 150 + 270 * 2 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (3 * STAR_WIDTH / 2 + 1) * Drawing.LITTLE, 550, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
1, level1
.levelStar32 Star\
<<<Object.MENU, 150 + 270 * 2 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (STAR_WIDTH / 2) * Drawing.LITTLE, 550, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
2, level1
.levelStar33 Star\
<<<Object.MENU, 150 + 270 * 2 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG + (STAR_WIDTH / 2 + 2) * Drawing.LITTLE, 550, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
3, level1

.levelStar41 Star\
<<<Object.MENU, 150 + 270 * 3 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (3 * STAR_WIDTH / 2 + 1) * Drawing.LITTLE, 550, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
1, level1
.levelStar42 Star\
<<<Object.MENU, 150 + 270 * 3 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (STAR_WIDTH / 2) * Drawing.LITTLE, 550, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
2, level1
.levelStar43 Star\
<<<Object.MENU, 150 + 270 * 3 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG + (STAR_WIDTH / 2 + 2) * Drawing.LITTLE, 550, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
3, level1

.levelStar51 Star\
<<<Object.MENU, 150 + 270 * 4 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (3 * STAR_WIDTH / 2 + 1) * Drawing.LITTLE, 550, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
1, level1
.levelStar52 Star\
<<<Object.MENU, 150 + 270 * 4 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (STAR_WIDTH / 2) * Drawing.LITTLE, 550, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
2, level1
.levelStar53 Star\
<<<Object.MENU, 150 + 270 * 4 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG + (STAR_WIDTH / 2 + 2) * Drawing.LITTLE, 550, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
3, level1

.levelStar61 Star\
<<<Object.MENU, 150 + 270 * 0 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (3 * STAR_WIDTH / 2 + 1) * Drawing.LITTLE, 330, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
1, level1
.levelStar62 Star\
<<<Object.MENU, 150 + 270 * 0 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (STAR_WIDTH / 2) * Drawing.LITTLE, 330, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
2, level1
.levelStar63 Star\
<<<Object.MENU, 150 + 270 * 0 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG + (STAR_WIDTH / 2 + 2) * Drawing.LITTLE, 330, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
3, level1

.levelStar71 Star\
<<<Object.MENU, 150 + 270 * 1 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (3 * STAR_WIDTH / 2 + 1) * Drawing.LITTLE, 330, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
1, level1
.levelStar72 Star\
<<<Object.MENU, 150 + 270 * 1 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (STAR_WIDTH / 2) * Drawing.LITTLE, 330, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
2, level1
.levelStar73 Star\
<<<Object.MENU, 150 + 270 * 1 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG + (STAR_WIDTH / 2 + 2) * Drawing.LITTLE, 330, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
3, level1

.levelStar81 Star\
<<<Object.MENU, 150 + 270 * 2 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (3 * STAR_WIDTH / 2 + 1) * Drawing.LITTLE, 330, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
1, level1
.levelStar82 Star\
<<<Object.MENU, 150 + 270 * 2 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (STAR_WIDTH / 2) * Drawing.LITTLE, 330, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
2, level1
.levelStar83 Star\
<<<Object.MENU, 150 + 270 * 2 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG + (STAR_WIDTH / 2 + 2) * Drawing.LITTLE, 330, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
3, level1

.levelStar91 Star\
<<<Object.MENU, 150 + 270 * 3 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (3 * STAR_WIDTH / 2 + 1) * Drawing.LITTLE, 330, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
1, level1
.levelStar92 Star\
<<<Object.MENU, 150 + 270 * 3 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (STAR_WIDTH / 2) * Drawing.LITTLE, 330, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
2, level1
.levelStar93 Star\
<<<Object.MENU, 150 + 270 * 3 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG + (STAR_WIDTH / 2 + 2) * Drawing.LITTLE, 330, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
3, level1

.levelStar101 Star\
<<<Object.MENU, 150 + 270 * 4 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (3 * STAR_WIDTH / 2 + 1) * Drawing.LITTLE, 330, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
1, level1
.levelStar102 Star\
<<<Object.MENU, 150 + 270 * 4 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (STAR_WIDTH / 2) * Drawing.LITTLE, 330, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
2, level1
.levelStar103 Star\
<<<Object.MENU, 150 + 270 * 4 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG + (STAR_WIDTH / 2 + 2) * Drawing.LITTLE, 330, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
3, level1

.levelStar111 Star\
<<<Object.MENU, 150 + 270 * 0 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (3 * STAR_WIDTH / 2 + 1) * Drawing.LITTLE, 110, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
1, level1
.levelStar112 Star\
<<<Object.MENU, 150 + 270 * 0 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (STAR_WIDTH / 2) * Drawing.LITTLE, 110, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
2, level1
.levelStar113 Star\
<<<Object.MENU, 150 + 270 * 0 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG + (STAR_WIDTH / 2 + 2) * Drawing.LITTLE, 110, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
3, level1

.levelStar121 Star\
<<<Object.MENU, 150 + 270 * 1 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (3 * STAR_WIDTH / 2 + 1) * Drawing.LITTLE, 110, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
1, level1
.levelStar122 Star\
<<<Object.MENU, 150 + 270 * 1 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (STAR_WIDTH / 2) * Drawing.LITTLE, 110, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
2, level1
.levelStar123 Star\
<<<Object.MENU, 150 + 270 * 1 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG + (STAR_WIDTH / 2 + 2) * Drawing.LITTLE, 110, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
3, level1

.levelStar131 Star\
<<<Object.MENU, 150 + 270 * 2 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (3 * STAR_WIDTH / 2 + 1) * Drawing.LITTLE, 110, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
1, level1
.levelStar132 Star\
<<<Object.MENU, 150 + 270 * 2 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (STAR_WIDTH / 2) * Drawing.LITTLE, 110, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
2, level1
.levelStar133 Star\
<<<Object.MENU, 150 + 270 * 2 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG + (STAR_WIDTH / 2 + 2) * Drawing.LITTLE, 110, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
3, level1

.levelStar141 Star\
<<<Object.MENU, 150 + 270 * 3 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (3 * STAR_WIDTH / 2 + 1) * Drawing.LITTLE, 110, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
1, level1
.levelStar142 Star\
<<<Object.MENU, 150 + 270 * 3 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (STAR_WIDTH / 2) * Drawing.LITTLE, 110, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
2, level1
.levelStar143 Star\
<<<Object.MENU, 150 + 270 * 3 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG + (STAR_WIDTH / 2 + 2) * Drawing.LITTLE, 110, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
3, level1

.levelStar151 Star\
<<<Object.MENU, 150 + 270 * 4 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (3 * STAR_WIDTH / 2 + 1) * Drawing.LITTLE, 110, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
1, level1
.levelStar152 Star\
<<<Object.MENU, 150 + 270 * 4 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG - (STAR_WIDTH / 2) * Drawing.LITTLE, 110, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
2, level1
.levelStar153 Star\
<<<Object.MENU, 150 + 270 * 4 + (LEVEL_BUTTON_WIDTH / 2) * Drawing.BIG + (STAR_WIDTH / 2 + 2) * Drawing.LITTLE, 110, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>>,\ 
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidStarTexture>>,\
3, level1
;-------------------------------------------------------------------------------                                   
.wBACK String <Object.MENU, 625, 20, 4 * (A_WIDTH + 1) * Drawing.BIG - Drawing.BIG, A_HEIGHT * Drawing.BIG>, <'B', 'A', 'C', 'K', 0, 0, 0, 0, 0, 0>, .wBACK1           
.wBACK1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wBACK2 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>
.wBACK3 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wBACK4 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture> 



.menuObjects                    dd .menuObjectsLength / 4 - 1,\
                                   .wLEVEL1, .wLEVEL2, .wLEVEL3, .wLEVEL4, .wLEVEL5,\
                                   .wSELECT1, .wSELECT2, .wSELECT3, .wSELECT4, .wSELECT5, .wSELECT6,\ 
                                   activeButtonElement1, activeButtonElement2, activeButtonElement3, activeButtonElement4,\
                                   .levelButton1, .levelDigit1, .levelButton2, .levelDigit2, .levelButton3, .levelDigit3, .levelButton4, .levelDigit4, .levelButton5, .levelDigit5,\
                                   .levelButton6, .levelDigit6, .levelButton7, .levelDigit7, .levelButton8, .levelDigit8, .levelButton9, .levelDigit9, .levelButton10, .levelDigit101, .levelDigit102,\
                                   .levelButton11, .levelDigit111, .levelDigit112, .levelButton12, .levelDigit121, .levelDigit122, .levelButton13, .levelDigit131, .levelDigit132, .levelButton14, .levelDigit141, .levelDigit142, .levelButton15, .levelDigit151, .levelDigit152,\
                                   .levelStar11, .levelStar12, .levelStar13, .levelStar21, .levelStar22, .levelStar23, .levelStar31, .levelStar32, .levelStar33, .levelStar41, .levelStar42, .levelStar43, .levelStar51, .levelStar52, .levelStar53,\
                                   .levelStar61, .levelStar62, .levelStar63, .levelStar71, .levelStar72, .levelStar73, .levelStar81, .levelStar82, .levelStar83, .levelStar91, .levelStar92, .levelStar93, .levelStar101, .levelStar102, .levelStar103,\
                                   .levelStar111, .levelStar112, .levelStar113, .levelStar121, .levelStar122, .levelStar123, .levelStar131, .levelStar132, .levelStar133, .levelStar141, .levelStar142, .levelStar143, .levelStar151, .levelStar152, .levelStar153,\
                                   .wBACK1, .wBACK2, .wBACK3, .wBACK4
.menuObjectsLength              = $ - .menuObjects

.menuObjectsWithDrawing         dd .menuObjectsWithDrawingLength / 4 - 1,\
                                   .wLEVEL1, .wLEVEL2, .wLEVEL3, .wLEVEL4, .wLEVEL5,\
                                   .wSELECT1, .wSELECT2, .wSELECT3, .wSELECT4, .wSELECT5, .wSELECT6,\
                                   activeButtonElement1, activeButtonElement2, activeButtonElement3, activeButtonElement4,\
                                   .levelButton1, .levelDigit1, .levelButton2, .levelDigit2, .levelButton3, .levelDigit3, .levelButton4, .levelDigit4, .levelButton5, .levelDigit5,\
                                   .levelButton6, .levelDigit6, .levelButton7, .levelDigit7, .levelButton8, .levelDigit8, .levelButton9, .levelDigit9, .levelButton10, .levelDigit101, .levelDigit102,\
                                   .levelButton11, .levelDigit111, .levelDigit112, .levelButton12, .levelDigit121, .levelDigit122, .levelButton13, .levelDigit131, .levelDigit132, .levelButton14, .levelDigit141, .levelDigit142, .levelButton15, .levelDigit151, .levelDigit152,\
                                   .levelStar11, .levelStar12, .levelStar13, .levelStar21, .levelStar22, .levelStar23, .levelStar31, .levelStar32, .levelStar33, .levelStar41, .levelStar42, .levelStar43, .levelStar51, .levelStar52, .levelStar53,\
                                   .levelStar61, .levelStar62, .levelStar63, .levelStar71, .levelStar72, .levelStar73, .levelStar81, .levelStar82, .levelStar83, .levelStar91, .levelStar92, .levelStar93, .levelStar101, .levelStar102, .levelStar103,\
                                   .levelStar111, .levelStar112, .levelStar113, .levelStar121, .levelStar122, .levelStar123, .levelStar131, .levelStar132, .levelStar133, .levelStar141, .levelStar142, .levelStar143, .levelStar151, .levelStar152, .levelStar153,\
                                   .wBACK1, .wBACK2, .wBACK3, .wBACK4
.menuObjectsWithDrawingLength   = $ - .menuObjectsWithDrawing

.menuObjectsWithAnimation       dd .menuObjectsWithAnimationLength / 4 - 1,\
                                   activeButtonElement1, activeButtonElement2, activeButtonElement3, activeButtonElement4
.menuObjectsWithAnimationLength = $ - .menuObjectsWithAnimation

.buttons			                  dd .buttonsLength / 4 - 3,\
                                   0, .levelButton1, .levelButton2, .levelButton3, .levelButton4, .levelButton5,\
                                   .levelButton6, .levelButton7, .levelButton8, .levelButton9, .levelButton10,\
                                   .levelButton11, .levelButton12, .levelButton13, .levelButton14, .levelButton15,\
                                   .wBACK, 0
.buttonsLength			            = $ - .buttons

.words                          dd .wordsLength / 4 - 1,\
                                   .wLEVEL, .wSELECT, .wBACK 
.wordsLength                    = $ - .words

levelsMenu Menu <LevelsMenu.menuObjects, LevelsMenu.menuObjectsWithDrawing, LevelsMenu.menuObjectsWithAnimation, LevelsMenu.buttons>