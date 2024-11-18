include 'Units/Units.inc'

proc Game.Start

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

proc Game.Paint uses ebx esi

        stdcall Screen.FocusOnGame                
        
        mov     ebx, [Screen.screen + Object.x]
        add     ebx, [Screen.screen + Object.width]
        mov     esi, [Screen.screen + Object.y]
        add     esi, [Screen.screen + Object.height]
        
        stdcall Screen.Fill, 1.0, 1.0, 1.0
        stdcall Drawing.DrawObjects, [level1.gameObjects.refGameObjectsWithDrawing], [Screen.screen + Object.x], ebx, [Screen.screen + Object.y], esi
        stdcall Animation.AnimateObjects, [level1.gameObjects.refGameObjectsWithAnimation], [Screen.screen + Object.x], ebx, [Screen.screen + Object.y], esi

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