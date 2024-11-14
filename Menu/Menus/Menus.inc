struct MenuObjects
  refMenuObjects              dd ?
  refMenuObjectsWithDrawing   dd ?
  refMenuObjectsWithAnimation dd ?
  refButtons                  dd ?
ends

struct Menu
  menuObjects MenuObjects
ends

currentMenu dd ?

menus       dd menusLength / 4 - 1
menusLength = $ - menus