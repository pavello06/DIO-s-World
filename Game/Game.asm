include 'Units/Units.inc'

proc Game.Start

        stdcall Levels.CopyFromBuffer
        stdcall Player.Reset

        ret
endp

proc Game.Timer
        
        stdcall Move.MoveEntities, [level1.gameObjects.refEntities], [level1.gameObjects.refGameObjects]
        
        stdcall BrickWithBreakTimer.TimerObjects, [level1.gameObjects.refBricksWithBreakTimer]
        stdcall Player.TimerObject
        stdcall EnemyWithBullets.TimerObjects, [level1.gameObjects.refEnemiesWithBullets]
        stdcall EnemyWithReverseTimer.TimerObjects, [level1.gameObjects.refEnemiesWithReverseTimer]        
        stdcall EnemyWithStopTimer.TimerObjects, [level1.gameObjects.refEnemiesWithStopTimer]

        ret
endp

proc Game.Paint uses ebx 

        mov     ebx, [currentLevel]

        stdcall Screen.UpdateForGame                
        
        stdcall Drawing.DrawObjects, [ebx + Level.gameObjects.refGameObjectsWithDrawing]
        stdcall Animation.AnimateObjects, [ebx + Level.gameObjects.refGameObjectsWithAnimation]

        ret
endp

proc Game.KeyDown\
     key
        
        stdcall KeyDown.Move, [key]
        stdcall KeyDown.Pause, [key]
        
        ret
endp

proc Game.KeyUp\
     key
        
        stdcall KeyUp.Move, [key]
        stdcall KeyUp.Shoot, [key]
        
        ret
endp