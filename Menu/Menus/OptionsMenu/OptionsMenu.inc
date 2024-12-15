OptionsMenu:

.audioButton Button\
<<<Object.MENU, 115 * Drawing.NORMAL, 145 * Drawing.NORMAL, 5 * (A_WIDTH + 1) * Drawing.NORMAL - Drawing.NORMAL + 30, A_HEIGHT * Drawing.NORMAL + 10>>,\
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>>,\
FALSE, Button.Audio, 0

.wAUDIO dd Object.MENU, 115 * Drawing.NORMAL, 145 * Drawing.NORMAL, 4 * (A_WIDTH + 1) * Drawing.NORMAL - Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL,\
.wAUDIO1, 'A', 'U', 'D', 'I', 'O', 0            
.wAUDIO1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wAUDIO2 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wAUDIO3 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * 6, A_HEIGHT * 6>>, <6, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wAUDIO4 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * 6, A_HEIGHT * 6>>, <6, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wAUDIO5 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * 6, A_HEIGHT * 6>>, <6, Drawing.RIGHT, Drawing.UP, voidTexture>

.wON dd Object.MENU, 175 * Drawing.NORMAL, 145 * Drawing.NORMAL, 4 * (A_WIDTH + 1) * Drawing.NORMAL - Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL,\
.wON1, 'O', 'N', 0, 0            
.wON1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.LITTLE, A_HEIGHT * Drawing.LITTLE>>, <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wON2 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.LITTLE, A_HEIGHT * Drawing.LITTLE>>, <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wON3 MenuObjectWithDrawing <<Object.MENU, (175) * Drawing.NORMAL + 77, 145 * Drawing.NORMAL, A_WIDTH * Drawing.LITTLE, A_HEIGHT * Drawing.LITTLE>>, <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidTexture>                              

.wA dd Object.MENU, 48 * Drawing.NORMAL, 120 * Drawing.NORMAL, 4 * (A_WIDTH + 1) * Drawing.NORMAL - Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL,\
.wA1, 'A', 0            
.wA1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              

.wD dd Object.MENU, 68 * Drawing.NORMAL, 120 * Drawing.NORMAL, 4 * (A_WIDTH + 1) * Drawing.NORMAL - Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL,\
.wD1, 'D', 0            
.wD1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              
 
.wLEFT dd Object.MENU, 18 * Drawing.NORMAL, 105 * Drawing.NORMAL, 4 * (A_WIDTH + 1) * Drawing.NORMAL - Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL,\
.wLEFT1, 'L', 'E', 'F', 'T', 0            
.wLEFT1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wLEFT2 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wLEFT3 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wLEFT4 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              

.wRIGHT dd Object.MENU, 68 * Drawing.NORMAL, 105 * Drawing.NORMAL, 4 * (A_WIDTH + 1) * Drawing.NORMAL - Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL,\
.wRIGHT1, 'R', 'I', 'G', 'H', 'T', 0            
.wRIGHT1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wRIGHT2 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wRIGHT3 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wRIGHT4 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wRIGHT5 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              

.wMOVE dd Object.MENU, 42 * Drawing.NORMAL, 90 * Drawing.NORMAL, 4 * (A_WIDTH + 1) * Drawing.NORMAL - Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL,\
.wMOVE1, 'M', 'O', 'V', 'E', 0            
.wMOVE1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wMOVE2 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wMOVE3 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wMOVE4 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              

.wW dd Object.MENU, 146 * Drawing.NORMAL, 120 * Drawing.NORMAL, 4 * (A_WIDTH + 1) * Drawing.NORMAL - Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL,\
.wW1, 'W', 0            
.wW1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              

.wUP dd Object.MENU, 141 * Drawing.NORMAL, 105 * Drawing.NORMAL, 4 * (A_WIDTH + 1) * Drawing.NORMAL - Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL,\
.wUP1, 'U', 'P', 0            
.wUP1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wUP2 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              

.wSPACE dd Object.MENU, 125 * Drawing.NORMAL, 90 * Drawing.NORMAL, 4 * (A_WIDTH + 1) * Drawing.NORMAL - Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL,\
.wSPACE1, 'S', 'P', 'A', 'C', 'E', 0            
.wSPACE1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wSPACE2 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wSPACE3 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wSPACE4 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wSPACE5 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              

.wJUMP dd Object.MENU, 130 * Drawing.NORMAL, 75 * Drawing.NORMAL, 4 * (A_WIDTH + 1) * Drawing.NORMAL - Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL,\
.wJUMP1, 'J', 'U', 'M', 'P', 0            
.wJUMP1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wJUMP2 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wJUMP3 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wJUMP4 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              

.wJ dd Object.MENU, 229 * Drawing.NORMAL, 120 * Drawing.NORMAL, 4 * (A_WIDTH + 1) * Drawing.NORMAL - Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL,\
.wJ1, 'J', 0            
.wJ1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              
 
.wX dd Object.MENU, 229 * Drawing.NORMAL, 105 * Drawing.NORMAL, 4 * (A_WIDTH + 1) * Drawing.NORMAL - Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL,\
.wX1, 'X', 0            
.wX1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              

.wSHOOT dd Object.MENU, 210 * Drawing.NORMAL, 90 * Drawing.NORMAL, 4 * (A_WIDTH + 1) * Drawing.NORMAL - Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL,\
.wSHOOT1, 'S', 'H', 'O', 'O', 'T', 0            
.wSHOOT1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wSHOOT2 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wSHOOT3 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wSHOOT4 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wSHOOT5 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.NORMAL, A_HEIGHT * Drawing.NORMAL>>, <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, voidTexture>                              



.dirt1 MenuObjectWithDrawing\
<<Object.MENU, 0, 0, 30 * DIRT_WIDTH * Drawing.NORMAL, 1 * DIRT_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>

.grass1 MenuObjectWithDrawing\
<<Object.MENU, 0, 1 * DIRT_HEIGHT * Drawing.NORMAL, 30 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.palm1 MenuObjectWithDrawing\
<<Object.MENU, 1 * DIRT_WIDTH * Drawing.NORMAL, (DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL, 1 * PALM_WIDTH * Drawing.NORMAL, 1 * PALM_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.flower1 MenuObjectWithDrawing\
<<Object.MENU, 3 * DIRT_WIDTH * Drawing.NORMAL, (DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL, 1 * FLOWER_WIDTH * Drawing.NORMAL, 1 * FLOWER_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>

.player1 MenuObjectWithDrawing\
<<Object.MENU, 4 * DIRT_WIDTH * Drawing.NORMAL, (DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL, 1 * STANDING_PLAYER_WIDTH * Drawing.NORMAL, 1 * STANDING_PLAYER_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, runningPlayer2Texture>

.bush1 MenuObjectWithDrawing\
<<Object.MENU, 6 * DIRT_WIDTH * Drawing.NORMAL, (DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL, 1 * BUSH_WIDTH * Drawing.NORMAL, 1 * BUSH_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.player2 MenuObjectWithDrawing\
<<Object.MENU, 9 * DIRT_WIDTH * Drawing.NORMAL, (DIRT_HEIGHT + GRASS_HEIGHT + 10) * Drawing.NORMAL, 1 * STANDING_PLAYER_WIDTH * Drawing.NORMAL, 1 * STANDING_PLAYER_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, upJumpingPlayerTexture>

.bush2 MenuObjectWithDrawing\
<<Object.MENU, 11 * DIRT_WIDTH * Drawing.NORMAL, (DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL, 1 * BUSH_WIDTH * Drawing.NORMAL, 1 * BUSH_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.arrow1 MenuObjectWithDrawing\
<<Object.MENU, 13 * DIRT_WIDTH * Drawing.NORMAL, (DIRT_HEIGHT + GRASS_HEIGHT + 10) * Drawing.NORMAL, 1 * ARROW_WIDTH * Drawing.SMALL, 1 * ARROW_HEIGHT * Drawing.SMALL>>,\
<Drawing.SMALL, Drawing.RIGHT, Drawing.UP, arrowTexture>
 
.player3 MenuObjectWithDrawing\
<<Object.MENU, 14 * DIRT_WIDTH * Drawing.NORMAL, (DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL, 1 * STANDING_PLAYER_WIDTH * Drawing.NORMAL, 1 * STANDING_PLAYER_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, standingPlayerTexture>

.playerBullet1 MenuObjectWithDrawing\
<<Object.MENU, 15 * DIRT_WIDTH * Drawing.NORMAL, (DIRT_HEIGHT + GRASS_HEIGHT + 5) * Drawing.NORMAL, 1 * PLAYER_BULLET_WIDTH * Drawing.NORMAL, 1 * PLAYER_BULLET_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, playerBulletTexture>

.palm2 MenuObjectWithDrawing\
<<Object.MENU, 16 * DIRT_WIDTH * Drawing.NORMAL, (DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL, 1 * PALM_WIDTH * Drawing.NORMAL, 1 * PALM_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.flower2 MenuObjectWithDrawing\
<<Object.MENU, 18 * DIRT_WIDTH * Drawing.NORMAL, (DIRT_HEIGHT + GRASS_HEIGHT) * Drawing.NORMAL, 1 * FLOWER_WIDTH * Drawing.NORMAL, 1 * FLOWER_HEIGHT * Drawing.NORMAL>>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>

.backButton Button\
<<<Object.MENU, 88 * Drawing.BIG, 2 * Drawing.BIG, 4 * (A_WIDTH + 1) * Drawing.BIG - Drawing.BIG, A_HEIGHT * Drawing.BIG>>,\
<Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>>,\
FALSE, Button.Menu, startMenu
                                   
.wBACK dd Object.MENU, 88 * Drawing.BIG, 2 * Drawing.BIG, 4 * (A_WIDTH + 1) * Drawing.BIG - Drawing.BIG, A_HEIGHT * Drawing.BIG, .wBACK1, 'B', 'A', 'C', 'K', 0            
.wBACK1 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wBACK2 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>
.wBACK3 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture>                              
.wBACK4 MenuObjectWithDrawing <<Object.MENU, 0, 0, A_WIDTH * Drawing.BIG, A_HEIGHT * Drawing.BIG>>, <Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture> 





.menuObjects                    dd .menuObjectsLength / 4 - 1

.menuObjectsLength              = $ - .menuObjects

.menuObjectsWithDrawing         dd .menuObjectsWithDrawingLength / 4 - 1,\
                                   .dirt1, .grass1, .palm1, .flower1, .player1, .bush1, .player2, .bush2, .player3, .playerBullet1, .arrow1, .palm2, .flower2,\
                                   .wBACK1, .wBACK2, .wBACK3, .wBACK4, .wA1, .wD1, .wLEFT1, .wLEFT2, .wLEFT3, .wLEFT4, .wRIGHT1, .wRIGHT2, .wRIGHT3, .wRIGHT4, .wRIGHT5, .wMOVE1, .wMOVE2, .wMOVE3, .wMOVE4,\                                   
                                   .wW1, .wUP1, .wUP2, .wJUMP1, .wJUMP2, .wJUMP3, .wJUMP4,\
                                   .wJ1, .wX1, .wSHOOT1, .wSHOOT2, .wSHOOT3, .wSHOOT4, .wSHOOT5,\
                                   .wAUDIO1, .wAUDIO2, .wAUDIO3, .wAUDIO4, .wAUDIO5, .wON1, .wON2, .wON3,\
                                   .wSPACE1, .wSPACE2, .wSPACE3, .wSPACE4, .wSPACE5,\
                                   activeButtonElement1, activeButtonElement2, activeButtonElement3, activeButtonElement4
.menuObjectsWithDrawingLength   = $ - .menuObjectsWithDrawing

.menuObjectsWithAnimation       dd .menuObjectsWithAnimationLength / 4 - 1,\
                                   activeButtonElement1, activeButtonElement2, activeButtonElement3, activeButtonElement4
                                   
.menuObjectsWithAnimationLength = $ - .menuObjectsWithAnimation

.buttons			                  dd .buttonsLength / 4 - 3,\
                                   0, .audioButton, .backButton, 0
.buttonsLength			            = $ - .buttons

.stars                          dd .starsLength / 4 - 1
 
.starsLength                    = $ - .stars

.strings                        dd .stringsLength / 4 - 1,\
                                   .wBACK, .wA, .wD, .wLEFT, .wRIGHT, .wMOVE, .wW, .wUP, .wJUMP, .wJ, .wX, .wSHOOT, .wAUDIO, .wON, .wSPACE
.stringsLength                  = $ - .strings

optionsMenu Menu <80, 187, 255>, <OptionsMenu.menuObjects, OptionsMenu.menuObjectsWithDrawing, OptionsMenu.menuObjectsWithAnimation, OptionsMenu.buttons, OptionsMenu.stars, OptionsMenu.strings>