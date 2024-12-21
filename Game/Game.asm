include 'Units/Units.inc'

proc Game.Start

        stdcall Audio.Start, startMusic
        
        cmp     BYTE [isAudioOn], FALSE
        je      @F
        
        cmp     DWORD [currentLevel], level5
        je      .boss
        
        invoke  PlaySound, backgroundMusic, 0, 0x00020000 or 0x0001 or 0x0008
        jmp     @F
        
  .boss:
        invoke  PlaySound, bossMusic, 0, 0x00020000 or 0x0001 or 0x0008

  @@:
        stdcall Levels.CopyFromBuffer
        stdcall Player.Reset
        stdcall Statistic.Reset

        ret
endp

proc Game.Timer uses ebx
       
        mov     ebx, [currentLevel]
                
        cmp     ebx, level5
        jne     @F
     
        mov     eax, [Level5.bee1 + Object.x]
        mov     [Level5.bee1 + Boss.oldX], eax
        mov     ecx, [Level5.bee1 + Object.y]
        mov     [Level5.bee1 + Boss.oldY], ecx
        
  @@: 
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
        
        cmp     ebx, level5
        jne     @F
        
        stdcall Boss.TimerObject, Level5.bee1
        
  @@:       
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