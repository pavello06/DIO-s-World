LevelsMenu:

.level1 Button <<<Object.MENU, 10, 10, 1, 1>>,\ 
               <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, beeTexture>>,\
		           TRUE, Button.Game, level1



.menuObjects                    dd .menuObjectsLength / 4 - 1,\
                                   LevelsMenu.level1
.menuObjectsLength              = $ - .menuObjects

.menuObjectsWithDrawing         dd .menuObjectsWithDrawingLength / 4 - 1,\
                                   LevelsMenu.level1
.menuObjectsWithDrawingLength   = $ - .menuObjectsWithDrawing

.menuObjectsWithAnimation       dd .menuObjectsWithAnimationLength / 4 - 1

.menuObjectsWithAnimationLength = $ - .menuObjectsWithAnimation

.buttons			                  dd .buttonsLength / 4 - 1,\
                                   LevelsMenu.level1
.buttonsLength			            = $ - .buttons

levelsMenu Menu <LevelsMenu.menuObjects, LevelsMenu.menuObjectsWithDrawing, LevelsMenu.menuObjectsWithAnimation, LevelsMenu.buttons>