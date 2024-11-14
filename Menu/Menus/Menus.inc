struct MenuObjects
  refMenuObjects              dd ?
  refMenuObjectsWithDrawing   dd ?
  refMenuObjectsWithAnimation dd ?
  refButtons                  dd ?
ends

struct Menu
  menuObjects MenuObjects
ends

include 'LevelsMenu/LevelsMenu.inc'

currentMenu dd levelsMenu

menus       dd menusLength / 4 - 1
menusLength = $ - menus