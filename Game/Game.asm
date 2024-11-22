include 'Units/Units.inc'

proc Game.Start uses ebx

        mov     ebx, [currentLevel]

        ;stdcall Levels.CopyFromBuffer
        stdcall Player.Reset

        ret
endp

proc Game.Timer uses ebx
        
        mov     ebx, [currentLevel]
        
        stdcall Move.MoveEntities, [ebx + Level.gameObjects.refEntities], [level1.gameObjects.refGameObjects]
        
        stdcall BrickWithBreakTimer.TimerObjects, [ebx + Level.gameObjects.refBricksWithBreakTimer]
        stdcall Player.TimerObject
        stdcall EnemyWithBullets.TimerObjects, [ebx + Level.gameObjects.refEnemiesWithBullets]
        stdcall EnemyWithReverseTimer.TimerObjects, [ebx + Level.gameObjects.refEnemiesWithReverseTimer]        
        stdcall EnemyWithStopTimer.TimerObjects, [ebx + Level.gameObjects.refEnemiesWithStopTimer]

        ret
endp

proc Game.Paint uses ebx 

        mov     ebx, [currentLevel]

        stdcall Screen.UpdateForGame
        
        mov     eax, [ebx + Level.refLevel]
        lea     ecx, [eax + Level1.wSCORE - Level1]
        lea     edx, [eax + Level1.nSCORE - Level1]
        stdcall Statistic.UpdateScore, ecx, edx
        stdcall String.TimerObjects, [ebx + Level.gameObjects.refWords]
        stdcall Number.TimerObjects, [ebx + Level.gameObjects.refNumbers]                
        
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