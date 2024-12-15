include 'Units/Units.inc'

proc Game.Start

        stdcall Music.Play, startAndEndMusic

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
        stdcall Bullet.TimerObjects, [ebx + Level.gameObjects.refBullets]
        stdcall EnemyWithBullets.TimerObjects, [ebx + Level.gameObjects.refEnemiesWithBullets]        
        stdcall EnemyWithStopTimer.TimerObjects, [ebx + Level.gameObjects.refEnemiesWithStopTimer]
        stdcall Player.TimerObject
        
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
        
        stdcall Drawing.DrawObjects, [ebx + Level.gameObjects.refGameObjectsWithDrawing]
        cmp     DWORD [player.worldTimer], -1
        je      .notWorldTimer
  
  .worldTimer: 
        push    onlyPlayerTexture
        jmp     @F
        
  .notWorldTimer: 
        push    [ebx + Level.gameObjects.refGameObjectsWithAnimation]
  
  @@:     
        stdcall Animation.AnimateObjects 

        ret
endp

proc Game.KeyDown uses ebx,\
     key
     
        mov     ebx, [key]
        
        stdcall KeyDown.Move, ebx
        stdcall KeyDown.Pause, ebx
        
        ret
endp

proc Game.KeyUp uses ebx,\
     key
     
        mov     ebx, [key]
        
        stdcall KeyUp.Move, ebx
        stdcall KeyUp.Shoot, ebx
        
        ret
endp