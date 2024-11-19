struct MenuObjects
  refMenuObjects              dd ?
  refMenuObjectsWithDrawing   dd ?
  refMenuObjectsWithAnimation dd ?
  refButtons                  dd ?
  refStars                    dd ?
  refWords                    dd ?
  refNumbers                  dd ?
ends

struct Menu
  menuObjects MenuObjects
ends

include 'LevelsMenu/LevelsMenu.inc'
include 'StartMenu/StartMenu.inc'

currentMenu dd startMenu

menus       dd menusLength / 4 - 1, levelsMenu
menusLength = $ - menus