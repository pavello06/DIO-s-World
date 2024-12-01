struct LevelStatistics
  isAvailable dd ?
  score       dd ?
  bestScore   dd ?
  stars       dd ?
  bestStars   dd ?
ends

struct GameObjects
  refGameObjects              dd ?
  refGameObjectsWithDrawing   dd ?
  refGameObjectsWithAnimation dd ?
  refEntities                 dd ?
  refBricksWithBreakTimer     dd ?
  refEnemiesWithBullets       dd ?
  refEnemiesWithReverseTimer  dd ?
  refEnemiesWithStopTimer     dd ?
  refBullets                  dd ?
  refWords                    dd ?
  refNumbers                  dd ?
ends

struct Level
  levelStatistics LevelStatistics
  xMin            dd ?
  yMin            dd ?
  xMax            dd ?
  yMax            dd ?
  background      Color
  gameObjects     GameObjects
  refLevel        dd ?
  refBuffer       dd ?
ends

include '../Levels/Location1/Level1/Level1.inc'
include '../Levels/Location1/Level1/Buffer.inc'
include '../Levels/Location1/Level2/Level2.inc'
include '../Levels/Location1/Level2/Buffer.inc'

currentLevel dd level2

levels       dd levelsLength / 4 - 1, level1, level2
levelsLength = $ - levels

proc Levels.CopyFromBuffer uses ebx esi edi
     
        mov     ebx, [currentLevel]
        mov     eax, [ebx + Level.refLevel]
        mov     edx, [ebx + Level.refBuffer]
     
        lea     esi, [edx + 4]
        lea     edi, [eax]
         
        mov     ecx, [edx + 0]
        rep     movsd      
     
        ret
endp

proc Levels.GetCurrentLevelInArray                     
                                                           
        mov     ecx, [levels + Array.length]
        lea     eax, [levels + sizeof.Array.length]
        
  .loop:        
        mov     edx, [eax]
        
        cmp     edx, [currentLevel]
        je      .exit
       
        add     eax, sizeof.Array.element
        loop    .loop                                            
        
  .exit:
        ret
endp