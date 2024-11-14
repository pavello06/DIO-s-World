struct LevelStatistics
  isAvailable dd ?
  isCompleted dd ?
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
ends

struct Level
  levelStatistics LevelStatistics
  xMin            dd ?
  yMin            dd ?
  xMax            dd ?
  yMax            dd ?
  gameObjects     GameObjects
ends

include '../Levels/Location1/Level1/Level1.inc'

currentLevel dd ?

levels       dd levelsLength / 4 - 1, level1
levelsLength = $ - levels