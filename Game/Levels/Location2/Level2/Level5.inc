Level5:

.delete GameObject\
<Object.GAME, 0, -1, 100000, 1>, GameObject.DELETE

           

.gameObjects                    dd .gameObjectsLength / 4 - 1,\
                                   .delete,\
                                   player
.gameObjectsLength              = $ - .gameObjects

.gameObjectsWithDrawing         dd .gameObjectsWithDrawingLength / 4 - 1,\
                                   \
                                   Statistic.wSCORE1, Statistic.wSCORE2, Statistic.wSCORE3, Statistic.wSCORE4, Statistic.wSCORE5, Statistic.nSCORE1, Statistic.nSCORE2, Statistic.nSCORE3, Statistic.nSCORE4, Statistic.nSCORE5, Statistic.border, Statistic.bonus, Statistic.stars,\
                                   playerBullet1, playerBullet2, playerBullet3, player
.gameObjectsWithDrawingLength   = $ - .gameObjectsWithDrawing

.gameObjectsWithAnimation       dd .gameObjectsWithAnimationLength / 4 - 1,\
                                   \
                                   Statistic.bonus,\
                                   playerBullet1, playerBullet2, playerBullet3, player
.gameObjectsWithAnimationLength = $ - .gameObjectsWithAnimation

.entities                       dd .entitiesLength / 4 - 1,\
                                   player, playerBullet1, playerBullet2, playerBullet3
.entitiesLength                 = $ - .entities

.bricksWithBreakTimer           dd .bricksWithBreakTimerLength / 4 - 1
                                  
.bricksWithBreakTimerLength     = $ - .bricksWithBreakTimer

.enemies                        dd .enemiesLength / 4 - 1

.enemiesLength                  = $ - .enemies

.enemiesWithBullets             dd .enemiesWithBulletsLength / 4 - 1
                                   
.enemiesWithBulletsLength       = $ - .enemiesWithBullets

.enemiesWithReverseTimer        dd .enemiesWithReverseTimerLength / 4 - 1
                                   
.enemiesWithReverseTimerLength  = $ - .enemiesWithReverseTimer

.enemiesWithStopTimer           dd .enemiesWithStopTimerLength / 4 - 1

.enemiesWithStopTimerLength     = $ - .enemiesWithStopTimer

.bullets                        dd .bulletsLength / 4 - 1,\
                                   playerBullet1, playerBullet2, playerBullet3
.bulletsLength                   = $ - .bullets

.words                          dd .wordsLength / 4 - 1,\
                                   Statistic.wSCORE, Statistic.nSCORE
.wordsLength                    = $ - .words

level5 Level <FALSE, 0, 0, 0, 0>, 0, 0, 5475, 1300, <80, 187, 255>, <Level5.gameObjects, Level5.gameObjectsWithDrawing, Level5.gameObjectsWithAnimation, Level5.entities, Level5.bricksWithBreakTimer, Level5.enemies, Level5.enemiesWithBullets, Level5.enemiesWithStopTimer, Level5.bullets, Level5.words>, Level5, BufferLevel5