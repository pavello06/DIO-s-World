proc Timer.Game uses ebx esi

        stdcall Move.MoveEntities, [level1.gameObjects.refEntities], [level1.gameObjects.refGameObjects]
        stdcall Player.ChangeAnimation, player
        stdcall Player.TimerObject, player
        stdcall EnemyWithStopTimer.TimerObjects, [level1.gameObjects.refEnemiesWithStopTimer]                

        ret
endp