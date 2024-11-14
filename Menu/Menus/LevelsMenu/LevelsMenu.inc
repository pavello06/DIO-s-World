LevelsMenu:



.menuObjects                    dd .menuObjectsLength / 4 - 1

.menuObjectsLength              = $ - .menuObjects

.menuObjectsWithDrawing         dd .menuObjectsWithDrawingLength / 4 - 1

.menuObjectsWithDrawingLength   = $ - .gameObjectsWithDrawing

.menuObjectsWithAnimation       dd .menuObjectsWithAnimationLength / 4 - 1

.menuObjectsWithAnimationLength = $ - .menuObjectsWithAnimation

.buttons			dd .buttonsLength / 4 - 1

.buttonsLength			= $ - .buttons

levelsMenu Menu <LevelsMenu.menuObjects, LevelsMenu.menuObjectsWithDrawing, LevelsMenu.menuObjectsWithAnimation, LevelsMenu.buttons>