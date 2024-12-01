include 'Units/Units.inc'

proc Game.Start uses ebx

        mov     ebx, [currentLevel]

        stdcall Levels.CopyFromBuffer
        stdcall Player.Reset
        stdcall Statistic.Reset

        ret
endp

proc Game.Timer uses ebx
        
        mov     ebx, [currentLevel]
        
        cmp     DWORD [player.worldTimer], -1
        je      .notWorldTimer
        
  .worldTimer: 
        push    onlyPlayer
        jmp     @F
        
  .notWorldTimer: 
        push    [ebx + Level.gameObjects.refEntities]
  
  @@:
        stdcall Move.MoveEntities 
        
        stdcall BrickWithBreakTimer.TimerObjects, [ebx + Level.gameObjects.refBricksWithBreakTimer]
        stdcall Player.TimerObject
        stdcall EnemyWithBullets.TimerObjects, [ebx + Level.gameObjects.refEnemiesWithBullets]
        stdcall EnemyWithReverseTimer.TimerObjects, [ebx + Level.gameObjects.refEnemiesWithReverseTimer]        
        stdcall EnemyWithStopTimer.TimerObjects, [ebx + Level.gameObjects.refEnemiesWithStopTimer]
        stdcall Bullet.TimerObjects, [ebx + Level.gameObjects.refBullets]
        
        stdcall Result.IsWin
        cmp     eax, FALSE
        je      .notWin
        
  .win:
        stdcall Result.Win
        jmp     .exit
  
  .notWin:

  .exit:
        ret
endp

proc Game.Paint uses ebx

        mov     ebx, [currentLevel]

        stdcall Screen.UpdateForGame
        
        stdcall Statistic.Update 
        stdcall String.TimerObjects, [ebx + Level.gameObjects.refWords]
        stdcall Number.TimerObjects, [ebx + Level.gameObjects.refNumbers]                
        
        stdcall Drawing.DrawObjects, [ebx + Level.gameObjects.refGameObjectsWithDrawing]
        cmp     DWORD [player.worldTimer], -1
        je      .notWorldTimer
  
  .worldTimer: 
        push    onlyPlayer
        jmp     @F
        
  .notWorldTimer: 
        push    [ebx + Level.gameObjects.refGameObjectsWithAnimation]
  
  @@:     
        stdcall Animation.AnimateObjects 

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