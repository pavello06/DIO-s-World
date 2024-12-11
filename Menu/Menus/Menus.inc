struct MenuObjects
  refMenuObjects              dd ?
  refMenuObjectsWithDrawing   dd ?
  refMenuObjectsWithAnimation dd ?
  refButtons                  dd ?
  refStars                    dd ?
  refStrings                  dd ?
ends

struct Menu
  background  Color
  menuObjects MenuObjects
ends

include 'LevelsMenu/LevelsMenu.inc'
include 'LoseMenu/LoseMenu.inc'
include 'PauseMenu/PauseMenu.inc'
include 'StartMenu/StartMenu.inc'
include 'WinMenu/WinMenu.inc'

currentMenu dd startMenu