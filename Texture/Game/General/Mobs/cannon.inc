CANNON_WIDTH  = 16
CANNON_HEIGHT = 18
cannonTexture dd 16, 18
db\
  0,  0,  0,    0,  0,  0,    0,  0,  0,   -1, -1, -1,   -1, -1, -1,   -1, -1, -1,   -1, -1, -1,   -1, -1, -1,   -1, -1, -1,   -1, -1, -1,   -1, -1, -1,   -1, -1, -1,   -1, -1, -1,   -1, -1, -1,   -1, -1, -1,   -1, -1, -1,  \
  0,  0,  0,  215,162,110,  215,162,110,    0,  0,  0,    0,  0,  0,    0,  0,  0,    0,  0,  0,    0,  0,  0,    0,  0,  0,    0,  0,  0,    0,  0,  0,    0,  0,  0,    0,  0,  0,    0,  0,  0,    0,  0,  0,   -1, -1, -1,  \
  0,  0,  0,  163,108, 83,  163,108, 83,    0,  0,  0,  215,162,110,  215,162,110,  215,162,110,  215,162,110,  215,162,110,  215,162,110,  215,162,110,  215,162,110,  215,162,110,  215,162,110,  215,162,110,    0,  0,  0,  \
  0,  0,  0,  215,162,110,  215,162,110,    0,  0,  0,  163,108, 83,  163,108, 83,  163,108, 83,  163,108, 83,  163,108, 83,  163,108, 83,  163,108, 83,  163,108, 83,  163,108, 83,  163,108, 83,  163,108, 83,    0,  0,  0,  \
  0,  0,  0,  215,162,110,  215,162,110,    0,  0,  0,  215,162,110,  215,162,110,  215,162,110,  215,162,110,  215,162,110,  215,162,110,  215,162,110,  215,162,110,  215,162,110,  215,162,110,  215,162,110,    0,  0,  0,  \
  0,  0,  0,  163,108, 83,  163,108, 83,    0,  0,  0,  215,162,110,  215,162,110,  215,162,110,  215,162,110,  215,162,110,  215,162,110,  215,162,110,  215,162,110,  215,162,110,  215,162,110,  215,162,110,    0,  0,  0,  \
  0,  0,  0,  163,108, 83,  163,108, 83,    0,  0,  0,  163,108, 83,  163,108, 83,  163,108, 83,  163,108, 83,  163,108, 83,  163,108, 83,  163,108, 83,  163,108, 83,  163,108, 83,  163,108, 83,  163,108, 83,    0,  0,  0,  \
  0,  0,  0,  163,108, 83,  163,108, 83,    0,  0,  0,  163,108, 83,  163,108, 83,    0,  0,  0,    0,  0,  0,    0,  0,  0,    0,  0,  0,  163,108, 83,  163,108, 83,  163,108, 83,  163,108, 83,  163,108, 83,    0,  0,  0,  \
  0,  0,  0,  163,108, 83,  163,108, 83,    0,  0,  0,  163,108, 83,    0,  0,  0,  215,162,110,  215,162,110,  215,162,110,  215,162,110,    0,  0,  0,  163,108, 83,  163,108, 83,  163,108, 83,  163,108, 83,    0,  0,  0,  \
  0,  0,  0,  163,108, 83,  163,108, 83,    0,  0,  0,    0,  0,  0,  102, 57, 49,  163,108, 83,  163,108, 83,  163,108, 83,  163,108, 83,  215,162,110,    0,  0,  0,  102, 57, 49,  102, 57, 49,  102, 57, 49,    0,  0,  0,  \
  0,  0,  0,  102, 57, 49,  102, 57, 49,    0,  0,  0,    0,  0,  0,  163,108, 83,  163,108, 83,  102, 57, 49,  215,162,110,  163,108, 83,  163,108, 83,    0,  0,  0,  163,108, 83,  163,108, 83,  163,108, 83,    0,  0,  0,  \
  0,  0,  0,  163,108, 83,  163,108, 83,    0,  0,  0,    0,  0,  0,  102, 57, 49,  163,108, 83,  102, 57, 49,  102, 57, 49,  163,108, 83,  215,162,110,    0,  0,  0,  102, 57, 49,  102, 57, 49,  102, 57, 49,    0,  0,  0,  \
  0,  0,  0,  102, 57, 49,  102, 57, 49,    0,  0,  0,    0,  0,  0,  102, 57, 49,  163,108, 83,  163,108, 83,  163,108, 83,  163,108, 83,  215,162,110,    0,  0,  0,    0,  0,  0,    0,  0,  0,    0,  0,  0,   -1, -1, -1,  \
  0,  0,  0,    0,  0,  0,    0,  0,  0,   -1, -1, -1,    0,  0,  0,  102, 57, 49,  163,108, 83,  102, 57, 49,  215,162,110,  163,108, 83,  215,162,110,    0,  0,  0,   -1, -1, -1,   -1, -1, -1,   -1, -1, -1,   -1, -1, -1,  \
 -1, -1, -1,   -1, -1, -1,   -1, -1, -1,   -1, -1, -1,    0,  0,  0,  163,108, 83,  163,108, 83,  102, 57, 49,  215,162,110,  163,108, 83,  163,108, 83,    0,  0,  0,   -1, -1, -1,   -1, -1, -1,   -1, -1, -1,   -1, -1, -1,  \
 -1, -1, -1,   -1, -1, -1,   -1, -1, -1,   -1, -1, -1,    0,  0,  0,  102, 57, 49,  163,108, 83,  102, 57, 49,  215,162,110,  163,108, 83,  215,162,110,    0,  0,  0,   -1, -1, -1,   -1, -1, -1,   -1, -1, -1,   -1, -1, -1,  \
 -1, -1, -1,   -1, -1, -1,   -1, -1, -1,   -1, -1, -1,    0,  0,  0,  102, 57, 49,  163,108, 83,  102, 57, 49,  215,162,110,  163,108, 83,  215,162,110,    0,  0,  0,   -1, -1, -1,   -1, -1, -1,   -1, -1, -1,   -1, -1, -1,  \
 -1, -1, -1,   -1, -1, -1,   -1, -1, -1,   -1, -1, -1,    0,  0,  0,  102, 57, 49,  163,108, 83,  102, 57, 49,  215,162,110,  163,108, 83,  215,162,110,    0,  0,  0,   -1, -1, -1,   -1, -1, -1,   -1, -1, -1,   -1, -1, -1