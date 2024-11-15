LevelsMenu:

.level1 Button <<<Object.MENU, 50, 150, 1, 1>>,\ 
               <6, Drawing.RIGHT, Drawing.UP, levelButtonTexture>>,\
		           TRUE, Button.Game, level1
               
.level1Digit MenuObjectWithDrawing <<Object.MENU, 62, 165, 1, 1>>,\ 
                                   <6, Drawing.RIGHT, Drawing.UP, oneTexture>
                                   
.level2 Button <<<Object.MENU, 115, 150, 1, 1>>,\ 
               <6, Drawing.RIGHT, Drawing.UP, levelButtonTexture>>,\
		           TRUE, Button.Game, level1
               
.level2Digit MenuObjectWithDrawing <<Object.MENU, 127, 165, 1, 1>>,\ 
                                   <6, Drawing.RIGHT, Drawing.UP, twoTexture>
                                   
.level3 Button <<<Object.MENU, 180, 150, 1, 1>>,\ 
               <6, Drawing.RIGHT, Drawing.UP, levelButtonTexture>>,\
		           TRUE, Button.Game, level1
               
.level3Digit MenuObjectWithDrawing <<Object.MENU, 192, 165, 1, 1>>,\ 
                                   <6, Drawing.RIGHT, Drawing.UP, treeTexture>
                                   
.level4 Button <<<Object.MENU, 245, 150, 1, 1>>,\ 
               <6, Drawing.RIGHT, Drawing.UP, levelButtonTexture>>,\
		           TRUE, Button.Game, level1
               
.level4Digit MenuObjectWithDrawing <<Object.MENU, 257, 165, 1, 1>>,\ 
                                   <6, Drawing.RIGHT, Drawing.UP, fourTexture>
                                   
.level5 Button <<<Object.MENU, 310, 150, 1, 1>>,\ 
               <6, Drawing.RIGHT, Drawing.UP, levelButtonTexture>>,\
		           TRUE, Button.Game, level1
               
.level5Digit MenuObjectWithDrawing <<Object.MENU, 322, 165, 1, 1>>,\ 
                                   <6, Drawing.RIGHT, Drawing.UP, fiveTexture>



.menuObjects                    dd .menuObjectsLength / 4 - 1,\
                                   activeButtonElement1, activeButtonElement2, activeButtonElement3, activeButtonElement4,\
                                   LevelsMenu.level1, LevelsMenu.level1Digit, LevelsMenu.level2, LevelsMenu.level2Digit,\
                                   LevelsMenu.level3, LevelsMenu.level3Digit, LevelsMenu.level4, LevelsMenu.level4Digit,\
                                   LevelsMenu.level5, LevelsMenu.level5Digit
.menuObjectsLength              = $ - .menuObjects

.menuObjectsWithDrawing         dd .menuObjectsWithDrawingLength / 4 - 1,\
                                   activeButtonElement1, activeButtonElement2, activeButtonElement3, activeButtonElement4,\ 
                                   LevelsMenu.level1, LevelsMenu.level1Digit, LevelsMenu.level2, LevelsMenu.level2Digit,\
                                   LevelsMenu.level3, LevelsMenu.level3Digit, LevelsMenu.level4, LevelsMenu.level4Digit,\
                                   LevelsMenu.level5, LevelsMenu.level5Digit
.menuObjectsWithDrawingLength   = $ - .menuObjectsWithDrawing

.menuObjectsWithAnimation       dd .menuObjectsWithAnimationLength / 4 - 1,\
                                   activeButtonElement1, activeButtonElement2, activeButtonElement3, activeButtonElement4
.menuObjectsWithAnimationLength = $ - .menuObjectsWithAnimation

.buttons			                  dd .buttonsLength / 4 - 1,\
                                   LevelsMenu.level1, LevelsMenu.level2, LevelsMenu.level3, LevelsMenu.level4, LevelsMenu.level5
.buttonsLength			            = $ - .buttons

levelsMenu Menu <LevelsMenu.menuObjects, LevelsMenu.menuObjectsWithDrawing, LevelsMenu.menuObjectsWithAnimation, LevelsMenu.buttons>