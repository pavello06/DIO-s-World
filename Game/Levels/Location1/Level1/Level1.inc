Level1:

.border1 GameObject\
<Object.GAME, -1, 0, Drawing.NORMAL, 100 * Drawing.NORMAL>, GameObject.BLOCK

.border2 GameObject\
<Object.GAME, 12476, 0, Drawing.NORMAL, 100 * Drawing.NORMAL>, GameObject.BLOCK

.spawn1 GameObjectWithDrawing\
<<Object.GAME, 24 * Drawing.NORMAL, 49 * Drawing.NORMAL, SPAWN_WIDTH * Drawing.NORMAL, SPAWN_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, spawnTexture>

.spawn2 GameObjectWithDrawing\
<<Object.GAME, 12476 - 35 * Drawing.NORMAL, 97 * Drawing.NORMAL, SPAWN_WIDTH * Drawing.NORMAL, SPAWN_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, spawnTexture>

.delete GameObject <Object.GAME, 0, -1, 100000, 1>, GameObject.DELETE

.dirt1 GameObjectWithDrawing <<Object.GAME, 0, 0, 21 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass1 GameObjectWithDrawing <<Object.GAME, 0, 32 * Drawing.NORMAL, 21 * GRASS_WIDTH * Drawing.NORMAL, GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
			                        <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.bush1 GameObjectWithDrawing <<Object.GAME, 80 * Drawing.NORMAL, 49 * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.palm1 GameObjectWithDrawing <<Object.GAME, 115 * Drawing.NORMAL, 49 * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>
                             
.flower1 GameObjectWithDrawing <<Object.GAME, 145 * Drawing.NORMAL, 49 * Drawing.NORMAL, FLOWER_WIDTH * Drawing.NORMAL, FLOWER_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
			                         <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>
                               
.coin1 Bonus <<<<Object.GAME, 180 * Drawing.NORMAL, 54 * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
			       <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
             <FALSE, 0, 90, 0, coinFrames>>,\
             Bonus.COIN
             
.coin2 Bonus <<<<Object.GAME, 195 * Drawing.NORMAL, 54 * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
			       <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
             <FALSE, 0, 90, 0, coinFrames>>,\
             Bonus.COIN
             
.coin3 Bonus <<<<Object.GAME, 210 * Drawing.NORMAL, 54 * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
			       <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
             <FALSE, 0, 90, 0, coinFrames>>,\
             Bonus.COIN
             
.coin4 Bonus <<<<Object.GAME, 225 * Drawing.NORMAL, 54 * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
			       <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
             <FALSE, 0, 90, 0, coinFrames>>,\
             Bonus.COIN
             
.palm2 GameObjectWithDrawing <<Object.GAME, 240 * Drawing.NORMAL, 49 * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>
             
.brick1 GameObjectWithDrawing <<Object.GAME, 274 * Drawing.NORMAL, 80 * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
			                        <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>
                              
.brick2 GameObjectWithDrawing <<Object.GAME, 289 * Drawing.NORMAL, 80 * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
			                        <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>
 
.heart1 Bonus <<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, HEART_WIDTH * Drawing.LITTLE, HEART_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_PLAYER>,\
			        <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, heartTexture>>,\
              <FALSE, 0, 90, 0, heartFrames>>,\
              Bonus.HEART
                              
.luck1 Luck <<<<Object.GAME, 305 * Drawing.NORMAL, 80 * Drawing.NORMAL, LUCK_WIDTH * Drawing.NORMAL, LUCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
			      <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
            <FALSE, 0, 150, 0, luckFrames>>,\
            .heart1
             
.bush2 GameObjectWithDrawing <<Object.GAME, 308 * Drawing.NORMAL, 49 * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>
                             
.shadow1 GameObjectWithDrawing <<Object.GAME, 335 * Drawing.NORMAL, 24 * Drawing.NORMAL, 1 * Drawing.NORMAL, 25 * Drawing.NORMAL>, GameObject.DECORATION>,\
			                         <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.dirt2 GameObjectWithDrawing <<Object.GAME, 336 * Drawing.NORMAL, 0 * Drawing.NORMAL, 6 * DIRT_WIDTH * Drawing.NORMAL, DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass2 GameObjectWithDrawing <<Object.GAME, 336 * Drawing.NORMAL, 16 * Drawing.NORMAL, 6 * GRASS_WIDTH * Drawing.NORMAL, GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
			                        <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>
                              
.reverse1 GameObject <Object.GAME, 336 * Drawing.NORMAL, 33 * Drawing.NORMAL, 1, 1>, GameObject.REVERSE

.reverse2 GameObject <Object.GAME, 431 * Drawing.NORMAL, 33 * Drawing.NORMAL, 1, 1>, GameObject.REVERSE

.flower2 GameObjectWithDrawing <<Object.GAME, 395 * Drawing.NORMAL, 33 * Drawing.NORMAL, FLOWER_WIDTH * Drawing.NORMAL, FLOWER_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
			                         <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>

.owl1 Enemy <<<<<Object.GAME, 337 * Drawing.NORMAL, 33 * Drawing.NORMAL, OWL_WIDTH * Drawing.NORMAL, OWL_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
			      <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, owlTexture>>,\
            <FALSE, 0, 100, 0, owlFrames>>,\
            TRUE, 5, 0, TRUE>,\
            1, owlAnimations, 100
                                           
.dirt3 GameObjectWithDrawing <<Object.GAME, 432 * Drawing.NORMAL, 0, 28 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass3 GameObjectWithDrawing <<Object.GAME, 432 * Drawing.NORMAL, 32 * Drawing.NORMAL, 28 * GRASS_WIDTH * Drawing.NORMAL, GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
			                        <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>
                              
.shadow2 GameObjectWithDrawing <<Object.GAME, 432 * Drawing.NORMAL, 24 * Drawing.NORMAL, 1 * Drawing.NORMAL, 25 * Drawing.NORMAL>, GameObject.DECORATION>,\
			                         <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>                  
                              
.palm3 GameObjectWithDrawing <<Object.GAME, 436 * Drawing.NORMAL, 49 * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>                              
                              
.coin5 Bonus <<<<Object.GAME, 461 * Drawing.NORMAL, 54 * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
			       <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
             <FALSE, 0, 90, 0, coinFrames>>,\
             Bonus.COIN
             
.coin6 Bonus <<<<Object.GAME, 476 * Drawing.NORMAL, 54 * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
			       <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
             <FALSE, 0, 90, 0, coinFrames>>,\
             Bonus.COIN
             
.coin7 Bonus <<<<Object.GAME, 491 * Drawing.NORMAL, 54 * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
			       <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
             <FALSE, 0, 90, 0, coinFrames>>,\
             Bonus.COIN
             
.bottomPipe1 GameObjectWithDrawing <<Object.GAME, 521 * Drawing.NORMAL, 49 * Drawing.NORMAL, 1 * BOTTOM_PIPE_WIDTH * Drawing.LITTLE, 20  * BOTTOM_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
			                             <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, bottomPipeTexture>                               
                              
.topPipe1 GameObjectWithDrawing <<Object.GAME, 518 * Drawing.NORMAL + 3, 61 * Drawing.NORMAL, TOP_PIPE_WIDTH * Drawing.LITTLE, TOP_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
			                          <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, topPipeTexture>
                                
.reverse3 GameObject <Object.GAME, 547 * Drawing.NORMAL, 52 * Drawing.NORMAL, 1 * Drawing.NORMAL, 1 * Drawing.NORMAL>, GameObject.REVERSE

.reverse4 GameObject <Object.GAME, 772 * Drawing.NORMAL, 52 * Drawing.NORMAL, 1 * Drawing.NORMAL, 1 * Drawing.NORMAL>, GameObject.REVERSE
          
.bush3 GameObjectWithDrawing <<Object.GAME, 755 * Drawing.NORMAL, 49 * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>
                             
.reverse5 GameObject <Object.GAME, 780 * Drawing.NORMAL, 55 * Drawing.NORMAL, 1, 1>, GameObject.REVERSE

.reverse6 GameObject <Object.GAME, 780 * Drawing.NORMAL, 97 * Drawing.NORMAL, 1, 1>, GameObject.REVERSE
                             
.venusFlycatcher1 EnemyWithStopTimer <<<<<<<Object.GAME, 777 * Drawing.NORMAL, 55 * Drawing.NORMAL, VENUS_FLYCATCHER_WIDTH * Drawing.LITTLE, VENUS_FLYCATCHER_HEIGHT * Drawing.LITTLE>, GameObject.UNTOCHABLE_ENEMY + GameObject.REVERSEABLE_ENEMY + GameObject.STOPABLE_ENEMY>,\
			                               <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, venusFlycatcherTexture>>,\
                                     <FALSE, 0, 300, 0, venusFlycatcherFrames>>,\
                                     TRUE, 0, 2, FALSE>,\
                                     1, venusFlycatcherAnimations, 200>,\
                                     -1, 2000>
 
.bottomPipe2 GameObjectWithDrawing <<Object.GAME, 775 * Drawing.NORMAL + 3, 49 * Drawing.NORMAL, 1 * BOTTOM_PIPE_WIDTH * Drawing.LITTLE, 20  * BOTTOM_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
			                             <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, bottomPipeTexture>                               
                              
.topPipe2 GameObjectWithDrawing <<Object.GAME, 773 * Drawing.NORMAL, 64 * Drawing.NORMAL, TOP_PIPE_WIDTH * Drawing.LITTLE, TOP_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
			                          <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, topPipeTexture>
            
.dirt4 GameObjectWithDrawing <<Object.GAME, 592 * Drawing.NORMAL, 49 * Drawing.NORMAL, 8 * DIRT_WIDTH * Drawing.NORMAL, 3 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass4 GameObjectWithDrawing <<Object.GAME, 592 * Drawing.NORMAL, 97 * Drawing.NORMAL, 8 * GRASS_WIDTH * Drawing.NORMAL, GRASS_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
			                        <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>
                              
.shadow3 GameObjectWithDrawing <<Object.GAME, 592 * Drawing.NORMAL, 49 * Drawing.NORMAL, Drawing.NORMAL, 65 * Drawing.NORMAL>, GameObject.DECORATION>,\
			                         <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>
                               
.shadow4 GameObjectWithDrawing <<Object.GAME, 592 * Drawing.NORMAL, 113 * Drawing.NORMAL, 129 * Drawing.NORMAL, 1 * Drawing.NORMAL>, GameObject.TOP_BLOCK>,\
			                         <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>
                              
.star1 Bonus <<<<Object.GAME, 652 * Drawing.NORMAL, 130 * Drawing.NORMAL, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
			       <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, starTexture>>,\
             <FALSE, 0, 90, 0, starFrames>>,\
             Bonus.STAR                  
                              
.palm4 GameObjectWithDrawing <<Object.GAME, 602 * Drawing.NORMAL, 114 * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture> 
                          
.palm5 GameObjectWithDrawing <<Object.GAME, 682 * Drawing.NORMAL, 114 * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>
                             
.shadow5 GameObjectWithDrawing <<Object.GAME, 720 * Drawing.NORMAL, 49 * Drawing.NORMAL, 1 * Drawing.NORMAL, 65 * Drawing.NORMAL>, GameObject.DECORATION>,\
			                         <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture> 

.owl2 Enemy <<<<<Object.GAME, 558 * Drawing.NORMAL, 50 * Drawing.NORMAL, OWL_WIDTH * Drawing.NORMAL, OWL_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
			      <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, owlTexture>>,\
            <FALSE, 0, 100, 0, owlFrames>>,\
            TRUE, 5, 0, TRUE>,\
            1, owlAnimations, 100
            
.shadow6 GameObjectWithDrawing <<Object.GAME, 879 * Drawing.NORMAL, 24 * Drawing.NORMAL, 1 * Drawing.NORMAL, 25 * Drawing.NORMAL>, GameObject.DECORATION>,\
			                         <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>
;-------------------------------------------------------------------------------                               
.dirt5 GameObjectWithDrawing <<Object.GAME, 880 * Drawing.NORMAL, 0 * Drawing.NORMAL, 8 * DIRT_WIDTH * Drawing.NORMAL, DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass5 GameObjectWithDrawing <<Object.GAME, 880 * Drawing.NORMAL, 16 * Drawing.NORMAL, 8 * GRASS_WIDTH * Drawing.NORMAL, GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
			                        <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>
                              
.spring1 GameObjectWithAnimation <<<Object.GAME, 900 * Drawing.NORMAL, 33 * Drawing.NORMAL, SPRING_WIDTH * Drawing.LITTLE, SPRING_HEIGHT * Drawing.LITTLE>, GameObject.JUMP>,\
			                           <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, springTexture>>,\
                                 <TRUE, -1, 50, 0, springFrames>
                                 
.palm6 GameObjectWithDrawing <<Object.GAME, 930 * Drawing.NORMAL, 33 * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>
                             
.flower3 GameObjectWithDrawing <<Object.GAME, 955 * Drawing.NORMAL, 33 * Drawing.NORMAL, FLOWER_WIDTH * Drawing.NORMAL, FLOWER_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
			                         <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>
                               
.greenBlock1 GameObjectWithDrawing <<Object.GAME, 975 * Drawing.NORMAL, 81 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
			                             <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, greenBlockTexture>
                                   
.blueBlock1 GameObjectWithDrawing <<Object.GAME, 991 * Drawing.NORMAL, 81 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
			                            <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, blueBlockTexture>
                                  
.pinkBlock1 GameObjectWithDrawing <<Object.GAME, 975 * Drawing.NORMAL, 65 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
			                            <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pinkBlockTexture>
                                   
.yellowBlock1 GameObjectWithDrawing <<Object.GAME, 991 * Drawing.NORMAL, 65 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
			                              <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, yellowBlockTexture>
                                  
.greenBlock2 GameObjectWithDrawing <<Object.GAME, 975 * Drawing.NORMAL, 49 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
			                             <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, greenBlockTexture>
                                   
.blueBlock2 GameObjectWithDrawing <<Object.GAME, 991 * Drawing.NORMAL, 49 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
			                            <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, blueBlockTexture>
                                  
.pinkBlock2 GameObjectWithDrawing <<Object.GAME, 975 * Drawing.NORMAL, 33 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
			                            <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pinkBlockTexture>
                                   
.yellowBlock2 GameObjectWithDrawing <<Object.GAME, 991 * Drawing.NORMAL, 33 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
			            <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, yellowBlockTexture>
;-------------------------------------------------------------------------------                                  
.dirt6 GameObjectWithDrawing <<Object.GAME, 1007 * Drawing.NORMAL, 0, 11 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
			     <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass6 GameObjectWithDrawing <<Object.GAME, 1007 * Drawing.NORMAL, 32 * Drawing.NORMAL, 11 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
			      <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>
                              
.shadow7 GameObjectWithDrawing <<Object.GAME, 1007 * Drawing.NORMAL, 24 * Drawing.NORMAL, 1 * Drawing.NORMAL, 25 * Drawing.NORMAL>, GameObject.DECORATION>,\
			       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>
                               
.palm7 GameObjectWithDrawing <<Object.GAME, 1027 * Drawing.NORMAL, 49 * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
			     <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.reverse7 GameObject <Object.GAME, 1007 * Drawing.NORMAL, 89 * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE      

.reverse8 GameObject <Object.GAME, 1107 * Drawing.NORMAL, 89 * Drawing.NORMAL, Drawing.NORMAL, Drawing.NORMAL>, GameObject.REVERSE
                             
.bee1 Enemy <<<<<Object.GAME, 1047 * Drawing.NORMAL, 89 * Drawing.NORMAL, BEE_WIDTH * Drawing.NORMAL, BEE_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.REVERSEABLE_ENEMY>,\
	    <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, beeTexture>>,\
            <FALSE, 0, 100, 0, beeFrames>>,\
            TRUE, 4, 0, FALSE>,\
            1, beeAnimations, 100
;-------------------------------------------------------------------------------             
.dirt7 GameObjectWithDrawing\
<<Object.GAME, 1107 * Drawing.NORMAL, 102 * Drawing.NORMAL, 3 * DIRT_WIDTH * Drawing.NORMAL, 5 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.DOWN, dirtTexture>
                                    
.grass7 GameObjectWithDrawing\
<<Object.GAME, 1107 * Drawing.NORMAL, 85 * Drawing.NORMAL, 3 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.DOWN, grassTexture>

.shadow8 GameObjectWithDrawing\
<<Object.GAME, 1107 * Drawing.NORMAL, 85 * Drawing.NORMAL, 1 * Drawing.NORMAL, 105 * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.shadow9 GameObjectWithDrawing\
<<Object.GAME, 1155 * Drawing.NORMAL, 85 * Drawing.NORMAL, 1 * Drawing.NORMAL, 66 * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>
;-------------------------------------------------------------------------------
.dirt8 GameObjectWithDrawing\
<<Object.GAME, 1155 * Drawing.NORMAL, 160 * Drawing.NORMAL, 4 * DIRT_WIDTH * Drawing.NORMAL, 1 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.DOWN, dirtTexture>
                                    
.grass8 GameObjectWithDrawing\
<<Object.GAME, 1155 * Drawing.NORMAL, 143 * Drawing.NORMAL, 4 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.DOWN, grassTexture>

.shadow10 GameObjectWithDrawing\
<<Object.GAME, 1219 * Drawing.NORMAL, 143 * Drawing.NORMAL, 1 * Drawing.NORMAL, 35 * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.flower4 GameObjectWithDrawing\
<<Object.GAME, 1160 * Drawing.NORMAL, 49 * Drawing.NORMAL, FLOWER_WIDTH * Drawing.NORMAL, FLOWER_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>
;-------------------------------------------------------------------------------
.dirt9 GameObjectWithDrawing\
<<Object.GAME, 1183 * Drawing.NORMAL, 0, 12 * DIRT_WIDTH * Drawing.NORMAL, 3 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass9 GameObjectWithDrawing\
<<Object.GAME, 1183 * Drawing.NORMAL, 3 * DIRT_HEIGHT * Drawing.NORMAL, 12 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.shadow11 GameObjectWithDrawing\
<<Object.GAME, 1183 * Drawing.NORMAL, (3 * DIRT_HEIGHT - 8) * Drawing.NORMAL, 1 * Drawing.NORMAL, 25 * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.shadow12 GameObjectWithDrawing\
<<Object.GAME, 1375 * Drawing.NORMAL, (3 * DIRT_HEIGHT - 7) * Drawing.NORMAL, 1 * Drawing.NORMAL, 24 * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.palm8 GameObjectWithDrawing\
<<Object.GAME, 1200 * Drawing.NORMAL, 65 * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.reverse9 GameObject\
<Object.GAME, 1183 * Drawing.NORMAL, 65 * Drawing.NORMAL, 1 * Drawing.NORMAL, 1 * Drawing.NORMAL>, GameObject.REVERSE

.reverse10 GameObject\
<Object.GAME, 1370 * Drawing.NORMAL, 65 * Drawing.NORMAL, 1 * Drawing.NORMAL, 1 * Drawing.NORMAL>, GameObject.REVERSE
          
.bush4 GameObjectWithDrawing\
<<Object.GAME, 1230 * Drawing.NORMAL, 65 * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.flower5 GameObjectWithDrawing\
<<Object.GAME, 1350 * Drawing.NORMAL, 65 * Drawing.NORMAL, FLOWER_WIDTH * Drawing.NORMAL, FLOWER_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>

.owl3 Enemy\
<<<<<Object.GAME, 1190 * Drawing.NORMAL, 65 * Drawing.NORMAL, OWL_WIDTH * Drawing.NORMAL, OWL_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, owlTexture>>,\
<FALSE, 0, 100, 0, owlFrames>>,\
TRUE, 5, 0, TRUE>,\
1, owlAnimations, 100

.brick3 GameObjectWithDrawing\
<<Object.GAME, 1250 * Drawing.NORMAL, 95 * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>
 
.coin8 Bonus\
<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
                              
.luck2 Luck\
<<<<Object.GAME, 1266 * Drawing.NORMAL, 95 * Drawing.NORMAL, LUCK_WIDTH * Drawing.NORMAL, LUCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
<FALSE, 0, 150, 0, luckFrames>>,\
.coin8

.brick4 GameObjectWithDrawing\
<<Object.GAME, 1282 * Drawing.NORMAL, 95 * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.brick5 GameObjectWithDrawing\
<<Object.GAME, 1298 * Drawing.NORMAL, 95 * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.reverse11 GameObject\
<Object.GAME, 1246 * Drawing.NORMAL, 116 * Drawing.NORMAL, 1 * Drawing.NORMAL, 1 * Drawing.NORMAL>, GameObject.REVERSE

.reverse12 GameObject\
<Object.GAME, 1318 * Drawing.NORMAL, 116 * Drawing.NORMAL, 1 * Drawing.NORMAL, 1 * Drawing.NORMAL>, GameObject.REVERSE

.owl4 Enemy\
<<<<<Object.GAME, 1260 * Drawing.NORMAL, 111 * Drawing.NORMAL, OWL_WIDTH * Drawing.NORMAL, OWL_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, owlTexture>>,\
<FALSE, 0, 100, 0, owlFrames>>,\
TRUE, 5, 0, TRUE>,\
1, owlAnimations, 100
;-------------------------------------------------------------------------------
.dirt10 GameObjectWithDrawing\
<<Object.GAME, 1375 * Drawing.NORMAL, 0, 4 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass10 GameObjectWithDrawing\
<<Object.GAME, 1375 * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL, 4 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.coin9 Bonus\
<<<<Object.GAME, 1400 * Drawing.NORMAL, 54 * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin10 Bonus\
<<<<Object.GAME, 1415 * Drawing.NORMAL, 54 * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.reverse13 GameObject\
<Object.GAME, 1407 * Drawing.NORMAL, 65 * Drawing.NORMAL, 1 * Drawing.NORMAL, 1 * Drawing.NORMAL>, GameObject.REVERSE

.reverse14 GameObject\
<Object.GAME, 1407 * Drawing.NORMAL, 100 * Drawing.NORMAL, 1 * Drawing.NORMAL, 1 * Drawing.NORMAL>, GameObject.REVERSE

.bee2 Enemy\
<<<<<Object.GAME, 1404 * Drawing.NORMAL, 70 * Drawing.NORMAL, BEE_WIDTH * Drawing.NORMAL, BEE_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.LEFT, Drawing.UP, beeTexture>>,\
<FALSE, 0, 100, 0, beeFrames>>,\
TRUE, 0, 2, FALSE>,\
1, beeAnimations, 100
;-------------------------------------------------------------------------------
.dirt11 GameObjectWithDrawing\
<<Object.GAME, 1439 * Drawing.NORMAL, 0, 4 * DIRT_WIDTH * Drawing.NORMAL, 3 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass11 GameObjectWithDrawing\
<<Object.GAME, 1439 * Drawing.NORMAL, 3 * DIRT_HEIGHT * Drawing.NORMAL, 4 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>                                                  

.palm9 GameObjectWithDrawing\
<<Object.GAME, 1460 * Drawing.NORMAL, 65 * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.flower6 GameObjectWithDrawing\
<<Object.GAME, 1485 * Drawing.NORMAL, 65 * Drawing.NORMAL, FLOWER_WIDTH * Drawing.NORMAL, FLOWER_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>                              
                              
.shadow13 GameObjectWithDrawing\
<<Object.GAME, 1439 * Drawing.NORMAL, (3 * DIRT_HEIGHT - 8) * Drawing.NORMAL, 1 * Drawing.NORMAL, 25 * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>                              

.pinkBlock3 GameObjectWithDrawing\
<<Object.GAME, 1503 * Drawing.NORMAL, 1 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pinkBlockTexture>

.yellowBlock3 GameObjectWithDrawing\
<<Object.GAME, 1519 * Drawing.NORMAL, 1 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, yellowBlockTexture>
                              
.greenBlock3 GameObjectWithDrawing\
<<Object.GAME, 1535 * Drawing.NORMAL, 1 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, greenBlockTexture>

.greenBlock4 GameObjectWithDrawing\
<<Object.GAME, 1503 * Drawing.NORMAL, 17 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, greenBlockTexture>
                                   
.blueBlock4 GameObjectWithDrawing\
<<Object.GAME, 1519 * Drawing.NORMAL, 17 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, blueBlockTexture>

.yellowBlock4 GameObjectWithDrawing\
<<Object.GAME, 1535 * Drawing.NORMAL, 17 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, yellowBlockTexture>

.pinkBlock5 GameObjectWithDrawing\
<<Object.GAME, 1503 * Drawing.NORMAL, 33 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pinkBlockTexture>
                                   
.yellowBlock5 GameObjectWithDrawing\
<<Object.GAME, 1519 * Drawing.NORMAL, 33 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, yellowBlockTexture>

.greenBlock5 GameObjectWithDrawing\
<<Object.GAME, 1535 * Drawing.NORMAL, 33 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, greenBlockTexture>

.greenBlock6 GameObjectWithDrawing\
<<Object.GAME, 1503 * Drawing.NORMAL, 49 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, greenBlockTexture>
                                   
.blueBlock6 GameObjectWithDrawing\
<<Object.GAME, 1519 * Drawing.NORMAL, 49 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, blueBlockTexture>

.yellowBlock6 GameObjectWithDrawing\
<<Object.GAME, 1535 * Drawing.NORMAL, 49 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, yellowBlockTexture>

.coin11 Bonus\
<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
                              
.luck3 Luck\
<<<<Object.GAME, 1503 * Drawing.NORMAL, 95 * Drawing.NORMAL, LUCK_WIDTH * Drawing.NORMAL, LUCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
<FALSE, 0, 150, 0, luckFrames>>,\
.coin11

.brick6 GameObjectWithDrawing\
<<Object.GAME, 1519 * Drawing.NORMAL, 95 * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>
;-------------------------------------------------------------------------------
.dirt12 GameObjectWithDrawing\
<<Object.GAME, 1551 * Drawing.NORMAL, 0, 3 * DIRT_WIDTH * Drawing.NORMAL, 3 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass12 GameObjectWithDrawing\
<<Object.GAME, 1551 * Drawing.NORMAL, 3 * DIRT_HEIGHT * Drawing.NORMAL, 3 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.shadow14 GameObjectWithDrawing\
<<Object.GAME, 1551 * Drawing.NORMAL, 0, 1 * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL + 3 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>  

.shadow15 GameObjectWithDrawing\
<<Object.GAME, 1598 * Drawing.NORMAL, 0, 1 * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL + 3 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>    

.bottomPipe3 GameObjectWithDrawing\
<<Object.GAME, 1571 * Drawing.NORMAL + 2, 65 * Drawing.NORMAL, 1 * BOTTOM_PIPE_WIDTH * Drawing.LITTLE, 20  * BOTTOM_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, bottomPipeTexture>                               
                              
.topPipe3 GameObjectWithDrawing\
<<Object.GAME, 1569 * Drawing.NORMAL, 79 * Drawing.NORMAL, TOP_PIPE_WIDTH * Drawing.LITTLE, TOP_PIPE_HEIGHT * Drawing.LITTLE>, GameObject.BLOCK>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, topPipeTexture>

.venusFlycatcher2 EnemyWithStopTimer\
<<<<<<<Object.GAME, 1574 * Drawing.NORMAL, 66 * Drawing.NORMAL, VENUS_FLYCATCHER_WIDTH * Drawing.LITTLE, VENUS_FLYCATCHER_HEIGHT * Drawing.LITTLE>, GameObject.UNTOCHABLE_ENEMY + GameObject.REVERSEABLE_ENEMY + GameObject.STOPABLE_ENEMY>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, venusFlycatcherTexture>>,\
<FALSE, 0, 300, 0, venusFlycatcherFrames>>,\
TRUE, 0, 2, FALSE>,\
1, venusFlycatcherAnimations, 200>,\
-1, 2000>

.reverse15 GameObject\
<Object.GAME, 1574 * Drawing.NORMAL, 65 * Drawing.NORMAL, 1 * Drawing.NORMAL, 1 * Drawing.NORMAL>, GameObject.REVERSE

.reverse16 GameObject\
<Object.GAME, 1574 * Drawing.NORMAL, 113 * Drawing.NORMAL, 1 * Drawing.NORMAL, 1 * Drawing.NORMAL>, GameObject.REVERSE

.greenBlock7 GameObjectWithDrawing\
<<Object.GAME, 1599 * Drawing.NORMAL, 2 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, greenBlockTexture>
                                   
.blueBlock7 GameObjectWithDrawing\
<<Object.GAME, 1615 * Drawing.NORMAL, 2 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, blueBlockTexture>

.yellowBlock7 GameObjectWithDrawing\
<<Object.GAME, 1631 * Drawing.NORMAL, 2 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, yellowBlockTexture>

.pinkBlock8 GameObjectWithDrawing\
<<Object.GAME, 1647 * Drawing.NORMAL, 2 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pinkBlockTexture>
                              
.greenBlock8 GameObjectWithDrawing\
<<Object.GAME, 1663 * Drawing.NORMAL, 2 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, greenBlockTexture>

.block1 GameObjectWithDrawing\
<<Object.GAME, 1599 * Drawing.NORMAL, 49 * Drawing.NORMAL, BLOCK_WIDTH * Drawing.NORMAL, BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, blockTexture>

.coin12 Bonus\
<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
                              
.luck4 Luck\
<<<<Object.GAME, 1615 * Drawing.NORMAL, 49 * Drawing.NORMAL, LUCK_WIDTH * Drawing.NORMAL, LUCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
<FALSE, 0, 150, 0, luckFrames>>,\
.coin12

.brick7 GameObjectWithDrawing\
<<Object.GAME, 1631 * Drawing.NORMAL, 49 * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>
;-------------------------------------------------------------------------------  
.dirt13 GameObjectWithDrawing\
<<Object.GAME, 1679 * Drawing.NORMAL, 0, 11 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass13 GameObjectWithDrawing\
<<Object.GAME, 1679 * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL, 11 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.shadow16 GameObjectWithDrawing\
<<Object.GAME, 1679 * Drawing.NORMAL, 0, 1 * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL + 2 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>  

.shadow17 GameObjectWithDrawing\
<<Object.GAME, 1854 * Drawing.NORMAL, 0, 1 * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL + 2 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>   

.flower7 GameObjectWithDrawing\
<<Object.GAME, 1759 * Drawing.NORMAL, 49 * Drawing.NORMAL, FLOWER_WIDTH * Drawing.NORMAL, FLOWER_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>

.owl5 Enemy\
<<<<<Object.GAME, 1683 * Drawing.NORMAL, 49 * Drawing.NORMAL, OWL_WIDTH * Drawing.NORMAL, OWL_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, owlTexture>>,\
<FALSE, 0, 100, 0, owlFrames>>,\
TRUE, 5, 0, TRUE>,\
1, owlAnimations, 100

.reverse17 GameObject\
<Object.GAME, 1679 * Drawing.NORMAL, 49 * Drawing.NORMAL, 1 * Drawing.NORMAL, 1 * Drawing.NORMAL>, GameObject.REVERSE

.reverse18 GameObject\
<Object.GAME, 1770 * Drawing.NORMAL, 49 * Drawing.NORMAL, 1 * Drawing.NORMAL, 1 * Drawing.NORMAL>, GameObject.REVERSE

.pinkBlock9 GameObjectWithDrawing\
<<Object.GAME, 1775 * Drawing.NORMAL, 49 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pinkBlockTexture>

.yellowBlock9 GameObjectWithDrawing\
<<Object.GAME, 1791 * Drawing.NORMAL, 49 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, yellowBlockTexture>  

.greenBlock9 GameObjectWithDrawing\
<<Object.GAME, 1775 * Drawing.NORMAL, 65 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, greenBlockTexture>
                                   
.blueBlock9 GameObjectWithDrawing\
<<Object.GAME, 1791 * Drawing.NORMAL, 65 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, blueBlockTexture>

.pinkBlock10 GameObjectWithDrawing\
<<Object.GAME, (1855 + 16 * 0) * Drawing.NORMAL, 33 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pinkBlockTexture> 

.pinkBlock11 GameObjectWithDrawing\
<<Object.GAME, (1855 + 16 * 1) * Drawing.NORMAL, 33 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pinkBlockTexture>

.pinkBlock12 GameObjectWithDrawing\
<<Object.GAME, (1855 + 16 * 2) * Drawing.NORMAL, 33 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pinkBlockTexture>

.pinkBlock13 GameObjectWithDrawing\
<<Object.GAME, (1855 + 16 * 3) * Drawing.NORMAL, 33 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pinkBlockTexture>

.pinkBlock14 GameObjectWithDrawing\
<<Object.GAME, (1855 + 16 * 4) * Drawing.NORMAL, 33 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pinkBlockTexture>

.pinkBlock15 GameObjectWithDrawing\
<<Object.GAME, (1855 + 16 * 5) * Drawing.NORMAL, 33 * Drawing.NORMAL, GREEN_BLOCK_WIDTH * Drawing.NORMAL, GREEN_BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pinkBlockTexture>

.coin13 Bonus\
<<<<Object.GAME, (1855 + 16 * 1) * Drawing.NORMAL, 54 * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin14 Bonus\
<<<<Object.GAME, (1855 + 16 * 2) * Drawing.NORMAL, 54 * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin15 Bonus\
<<<<Object.GAME, (1855 + 16 * 3) * Drawing.NORMAL, 54 * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin16 Bonus\
<<<<Object.GAME, (1855 + 16 * 4) * Drawing.NORMAL, 54 * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
;-------------------------------------------------------------------------------
.dirt14 GameObjectWithDrawing\
<<Object.GAME, 1935 * Drawing.NORMAL, 0, 16 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass14 GameObjectWithDrawing\
<<Object.GAME, 1935 * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL, 16 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.shadow18 GameObjectWithDrawing\
<<Object.GAME, 1935 * Drawing.NORMAL, 0, 1 * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL + 2 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture> 

.palm10 GameObjectWithDrawing\
<<Object.GAME, 1969 * Drawing.NORMAL, 49 * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.bush5 GameObjectWithDrawing\
<<Object.GAME, 2000 * Drawing.NORMAL, 49 * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.owl6 Enemy\
<<<<<Object.GAME, 1940 * Drawing.NORMAL, 49 * Drawing.NORMAL, OWL_WIDTH * Drawing.NORMAL, OWL_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, owlTexture>>,\
<FALSE, 0, 100, 0, owlFrames>>,\
TRUE, 5, 0, TRUE>,\
1, owlAnimations, 100

.reverse19 GameObject\
<Object.GAME, 1935 * Drawing.NORMAL, 49 * Drawing.NORMAL, 1 * Drawing.NORMAL, 1 * Drawing.NORMAL>, GameObject.REVERSE

.reverse20 GameObject\
<Object.GAME, 2190 * Drawing.NORMAL, 49 * Drawing.NORMAL, 1 * Drawing.NORMAL, 1 * Drawing.NORMAL>, GameObject.REVERSE
;-------------------------------------------------------------------------------
.dirt15 GameObjectWithDrawing\
<<Object.GAME, 2055 * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, 5 * DIRT_WIDTH * Drawing.NORMAL, 3 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass15 GameObjectWithDrawing\
<<Object.GAME, 2055 * Drawing.NORMAL, (5 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, 5 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.shadow19 GameObjectWithDrawing\
<<Object.GAME, 2055 * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, 1 * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>  

.shadow20 GameObjectWithDrawing\
<<Object.GAME, 2135 * Drawing.NORMAL, (2 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL, 1 * Drawing.NORMAL, (3 * DIRT_HEIGHT + 1 * GRASS_HEIGHT) * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.shadow21 GameObjectWithDrawing\
<<Object.GAME, 2055 * Drawing.NORMAL, 113 * Drawing.NORMAL, 80 * Drawing.NORMAL, 1 * Drawing.NORMAL>, GameObject.TOP_BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.palm11 GameObjectWithDrawing\
<<Object.GAME, 2060 * Drawing.NORMAL, 114 * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.coin17 Bonus\
<<<<Object.GAME, 2090 * Drawing.NORMAL, 119 * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN

.coin18 Bonus\
<<<<Object.GAME, 2105 * Drawing.NORMAL, 119 * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN  

.flower8 GameObjectWithDrawing\
<<Object.GAME, 2120 * Drawing.NORMAL, 114 * Drawing.NORMAL, FLOWER_WIDTH * Drawing.NORMAL, FLOWER_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>

.block2 GameObjectWithDrawing\
<<Object.GAME, 2090 * Drawing.NORMAL, 145 * Drawing.NORMAL, BLOCK_WIDTH * Drawing.NORMAL, BLOCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, blockTexture>

.coin19 Bonus\
<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
                              
.luck5 Luck\
<<<<Object.GAME, 2106 * Drawing.NORMAL, 145 * Drawing.NORMAL, LUCK_WIDTH * Drawing.NORMAL, LUCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
<FALSE, 0, 150, 0, luckFrames>>,\
.coin19

.star2 Bonus\
<<<<Object.GAME, 2000 * Drawing.NORMAL, 180 * Drawing.NORMAL, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, starTexture>>,\
<FALSE, 0, 90, 0, starFrames>>,\
Bonus.STAR
;-------------------------------------------------------------------------------
.dirt16 GameObjectWithDrawing\
<<Object.GAME, 2191 * Drawing.NORMAL, 0, 2 * DIRT_WIDTH * Drawing.NORMAL, 4 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass16 GameObjectWithDrawing\
<<Object.GAME, 2191 * Drawing.NORMAL, 4 * DIRT_HEIGHT * Drawing.NORMAL, 2 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.shadow22 GameObjectWithDrawing\
<<Object.GAME, 2191 * Drawing.NORMAL, 41 * Drawing.NORMAL, 1 * Drawing.NORMAL, 40 * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.shadow23 GameObjectWithDrawing\
<<Object.GAME, 2222 * Drawing.NORMAL, 41 * Drawing.NORMAL, 1 * Drawing.NORMAL, 40 * Drawing.NORMAL>, GameObject.TOP_BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>
;-------------------------------------------------------------------------------
.dirt17 GameObjectWithDrawing\
<<Object.GAME, 2223 * Drawing.NORMAL, 0, 7 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass17 GameObjectWithDrawing\
<<Object.GAME, 2223 * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL, 7 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.owl7 Enemy\
<<<<<Object.GAME, 2230 * Drawing.NORMAL, 49 * Drawing.NORMAL, OWL_WIDTH * Drawing.NORMAL, OWL_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, owlTexture>>,\
<FALSE, 0, 100, 0, owlFrames>>,\
TRUE, 5, 0, TRUE>,\
1, owlAnimations, 100

.reverse21 GameObject\
<Object.GAME, 2223 * Drawing.NORMAL, 49 * Drawing.NORMAL, 1 * Drawing.NORMAL, 1 * Drawing.NORMAL>, GameObject.REVERSE

.reverse22 GameObject\
<Object.GAME, 2335 * Drawing.NORMAL, 49 * Drawing.NORMAL, 1 * Drawing.NORMAL, 1 * Drawing.NORMAL>, GameObject.REVERSE

.brick8 GameObjectWithDrawing\
<<Object.GAME, 2250 * Drawing.NORMAL, 113 * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>

.coin20 Bonus\
<<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
                              
.luck6 Luck\
<<<<Object.GAME, 2266 * Drawing.NORMAL, 113 * Drawing.NORMAL, LUCK_WIDTH * Drawing.NORMAL, LUCK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
<FALSE, 0, 150, 0, luckFrames>>,\
.coin12

.brick9 GameObjectWithDrawing\
<<Object.GAME, 2282 * Drawing.NORMAL, 113 * Drawing.NORMAL, BRICK_WIDTH * Drawing.NORMAL, BRICK_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>
;-------------------------------------------------------------------------------
.dirt18 GameObjectWithDrawing\
<<Object.GAME, 2335 * Drawing.NORMAL, 0, 2 * DIRT_WIDTH * Drawing.NORMAL, 3 * DIRT_HEIGHT * Drawing.NORMAL + 5>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>

.dirt181 GameObjectWithDrawing\
<<Object.GAME, 2335 * Drawing.NORMAL, 3 * DIRT_HEIGHT * Drawing.NORMAL + 5, 2 * DIRT_WIDTH * Drawing.NORMAL, 1 * DIRT_HEIGHT * Drawing.NORMAL + 5>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>

.star3 Bonus\
<<<<Object.GAME, 2345 * Drawing.NORMAL, 3 * DIRT_HEIGHT * Drawing.NORMAL + 20, STAR_WIDTH * Drawing.LITTLE, STAR_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, starTexture>>,\
<FALSE, 0, 90, 0, starFrames>>,\
Bonus.STAR
                                    
.grass18 GameObjectWithDrawing\
<<Object.GAME, 2335 * Drawing.NORMAL, 4 * DIRT_HEIGHT * Drawing.NORMAL + 10, 2 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.shadow24 GameObjectWithDrawing\
<<Object.GAME, 2335 * Drawing.NORMAL, 41 * Drawing.NORMAL, 1 * Drawing.NORMAL, 40 * Drawing.NORMAL + 10>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>
;-------------------------------------------------------------------------------
.dirt19 GameObjectWithDrawing\
<<Object.GAME, 2367 * Drawing.NORMAL, 0, 8 * DIRT_WIDTH * Drawing.NORMAL, 5 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass19 GameObjectWithDrawing\
<<Object.GAME, 2367 * Drawing.NORMAL, 5 * DIRT_HEIGHT * Drawing.NORMAL, 8 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.shadow25 GameObjectWithDrawing\
<<Object.GAME, 2367 * Drawing.NORMAL, 73 * Drawing.NORMAL, 1 * Drawing.NORMAL, 23 * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.palm12 GameObjectWithDrawing\
<<Object.GAME, 2400 * Drawing.NORMAL, 97 * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.flower9 GameObjectWithDrawing\
<<Object.GAME, 2430 * Drawing.NORMAL, 97 * Drawing.NORMAL, FLOWER_WIDTH * Drawing.NORMAL, FLOWER_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>            

.gameObjects                    dd .gameObjectsLength / 4 - 1,\
                                   .border1, .border2, .spawn1, .spawn2, .delete, .dirt1, .grass1, .bush1, .palm1, .flower1, .coin1, .coin2, .coin3, .coin4, .palm2, .brick1, .brick2, .heart1, .luck1, .bush2, .shadow1,\
                                   .dirt2, .grass2, .reverse1, .reverse2, .flower2, .owl1,\
                                   .shadow2, .dirt3, .grass3, .palm3, .coin5, .coin6, .coin7, .bottomPipe1, .topPipe1, .reverse3, .reverse4, .bush3, .reverse5, .reverse6, .bottomPipe2, .topPipe2, .venusFlycatcher1, .shadow6,\
                                   .dirt4, .grass4, .shadow3, .shadow4, .palm4, .star1, .palm5, .shadow5, .owl2,\
                                   .dirt5, .grass5, .spring1, .palm6, .flower3, .greenBlock1, .blueBlock1, .pinkBlock1, .yellowBlock1, .greenBlock2, .blueBlock2, .pinkBlock2, .yellowBlock2,\
                                   .dirt6, .grass6, .shadow7, .palm7, .reverse7, .reverse8, .bee1,\
                                   .dirt7, .grass7, .shadow8, .shadow9, .dirt8, .grass8, .shadow10, .flower4,\
                                   .dirt9, .grass9, .shadow11, .shadow12, .palm8, .bush4, .flower5, .reverse9, .reverse10, .owl3, .brick3, .coin8, .luck2, .brick4, .brick5, .reverse11, .reverse12, .owl4,\
                                   .dirt10, .grass10, .coin9, .coin10, .reverse13, .reverse14, .bee2,\
                                   .dirt11, .grass11, .palm9, .flower6, .shadow13,\
                                   .pinkBlock3, .yellowBlock3, .greenBlock3, .greenBlock4, .blueBlock4, .yellowBlock4, .pinkBlock5, .yellowBlock5, .greenBlock5, .greenBlock6, .blueBlock6, .yellowBlock6, .brick6, .luck3, .coin11,\
                                   .dirt12, .grass12, .shadow14, .shadow15, .venusFlycatcher2, .bottomPipe3, .topPipe3, .reverse15, .reverse16, .greenBlock7, .blueBlock7, .yellowBlock7, .pinkBlock8, .greenBlock8, .star2, .block1, .coin12, .luck4, .brick7,\
                                   .dirt13, .grass13, .shadow16, .shadow17, .flower7, .owl5, .reverse17, .reverse18, .pinkBlock9, .yellowBlock9, .greenBlock9, .blueBlock9, .pinkBlock10, .pinkBlock11, .pinkBlock12, .pinkBlock13, .pinkBlock14, .pinkBlock15, .coin13, .coin14, .coin15, .coin16,\
                                   .dirt14, .grass14, .shadow18, .palm10, .bush5, .owl6, .reverse19, .reverse20,\
                                   .dirt15, .grass15, .shadow19, .shadow20, .shadow21, .palm11, .coin17, .coin18, .flower8, .block2, .coin19, .luck5,\
                                   .dirt16, .grass16, .shadow22, .shadow23,\
                                   .dirt17, .grass17, .owl7, .reverse21, .reverse22, .brick8, .coin20, .luck6, .brick9,\
                                   .dirt18, .grass18, .star3, .dirt181, .shadow24,\
                                   .dirt19, .grass19, .shadow25, .palm12, .flower9,\
                                   player
.gameObjectsLength              = $ - .gameObjects

.gameObjectsWithDrawing         dd .gameObjectsWithDrawingLength / 4 - 1,\
                                   .spawn1, .spawn2, .dirt1, .grass1, .bush1, .palm1, .flower1, .coin1, .coin2, .coin3, .coin4, .palm2, .brick1, .brick2, .heart1, .luck1, .bush2, .shadow1,\
                                   .dirt2, .grass2, .flower2, .owl1,\
                                   .dirt3, .grass3, .shadow2, .palm3,.coin5, .coin6, .coin7, .bottomPipe1, .topPipe1, .bush3, .venusFlycatcher1, .bottomPipe2, .topPipe2, .shadow6,\
                                   .dirt4, .grass4, .shadow3, .shadow4, .palm4, .star1, .palm5, .shadow5, .owl2,\
                                   .dirt5, .grass5, .spring1, .palm6, .flower3, .greenBlock1, .blueBlock1, .pinkBlock1, .yellowBlock1, .greenBlock2, .blueBlock2, .pinkBlock2, .yellowBlock2,\
                                   .dirt6, .grass6, .shadow7, .palm7, .bee1,\
                                   .dirt7, .grass7, .shadow8, .dirt8, .grass8, .shadow9, .shadow10, .flower4,\
                                   .dirt9, .grass9, .shadow11, .palm8, .bush4, .flower5, .owl3, .brick3, .coin8, .luck2, .brick4, .brick5, .owl4,\
                                   .dirt10, .grass10, .shadow12, .coin9, .coin10,  .bee2,\
                                   .dirt11, .grass11, .palm9, .flower6, .shadow13,\
                                   .pinkBlock3, .yellowBlock3, .greenBlock3, .greenBlock4, .blueBlock4, .yellowBlock4, .pinkBlock5, .yellowBlock5, .greenBlock5, .greenBlock6, .blueBlock6, .yellowBlock6, .luck3, .coin11, .brick6,\
                                   .dirt12, .grass12, .shadow14, .shadow15, .venusFlycatcher2, .bottomPipe3, .topPipe3, .greenBlock7, .blueBlock7, .yellowBlock7, .pinkBlock8, .greenBlock8, .star2, .block1, .coin12, .luck4, .brick7,\
                                   .dirt13, .grass13, .shadow16, .shadow17, .flower7, .owl5, .pinkBlock9, .yellowBlock9, .greenBlock9, .blueBlock9, .pinkBlock10, .pinkBlock11, .pinkBlock12, .pinkBlock13, .pinkBlock14, .pinkBlock15, .coin13, .coin14, .coin15, .coin16,\
                                   .dirt14, .grass14, .shadow18, .palm10, .bush5,\
                                   .dirt15, .grass15, .shadow19, .shadow20, .shadow21, .owl6, .palm11, .coin17, .coin18, .flower8, .block2, .coin19, .luck5,\
                                   .dirt16, .grass16, .shadow22, .shadow23,\
                                   .dirt17, .grass17, .owl7, .brick8, .coin20, .luck6, .brick9,\
                                   .dirt18, .grass18, .star3, .dirt181, .shadow24,\
                                   .dirt19, .grass19, .shadow25, .palm12, .flower9,\
                                   Statistic.wSCORE1, Statistic.wSCORE2, Statistic.wSCORE3, Statistic.wSCORE4, Statistic.wSCORE5, Statistic.nSCORE1, Statistic.nSCORE2, Statistic.nSCORE3, Statistic.nSCORE4, Statistic.nSCORE5, Statistic.border, Statistic.bonus, Statistic.stars,\
                                   player
.gameObjectsWithDrawingLength   = $ - .gameObjectsWithDrawing

.gameObjectsWithAnimation       dd .gameObjectsWithAnimationLength / 4 - 1,\
                                   .coin1, .coin2, .coin3, .coin4, .heart1, .luck1,\
                                   .owl1,\  
                                   .coin5, .coin6, .coin7, .owl2, .venusFlycatcher1,\
                                   .spring1, .bee1, .owl3, .luck2, .coin8, .owl4, .coin9, .coin10,  .bee2,\  
                                   .coin11, .luck3, .venusFlycatcher2, .star2, .coin12, .luck4,\
                                   .owl5, .coin13, .coin14, .coin15, .coin16,\
                                   .owl6,\
                                   .coin17, .coin18, .coin19, .luck5,\
                                   .owl7, .coin20, .luck6,\
                                   player
.gameObjectsWithAnimationLength = $ - .gameObjectsWithAnimation

.entities                       dd .entitiesLength / 4 - 1,\
                                   player,\
                                   .owl1,\
                                   .owl2, .venusFlycatcher1, .bee1, .owl3, .owl4, .bee2,\
                                   .venusFlycatcher2,\
                                   .owl5,\
                                   .owl6,\
                                   .owl7
.entitiesLength                 = $ - .entities

.bricksWithBreakTimer           dd .bricksWithBreakTimerLength / 4 - 1
                                  
.bricksWithBreakTimerLength     = $ - .bricksWithBreakTimer

.enemies                        dd .enemiesLength / 4 - 1,\
                                   .owl1,\
                                   .owl2, .venusFlycatcher1, .bee1, .owl3, .owl4, .bee2,\
                                   .venusFlycatcher2,\
                                   .owl5,\
                                   .owl6,\
                                   .owl7
.enemiesLength                  = $ - .enemies

.enemiesWithBullets             dd .enemiesWithBulletsLength / 4 - 1
                                   
.enemiesWithBulletsLength       = $ - .enemiesWithBullets

.enemiesWithStopTimer           dd .enemiesWithStopTimerLength / 4 - 1,\
                                   .venusFlycatcher1, .venusFlycatcher2
.enemiesWithStopTimerLength     = $ - .enemiesWithStopTimer

.bullets                         dd .bulletsLength / 4 - 1,\
                                   playerBullet1, playerBullet2, playerBullet3
.bulletsLength                   = $ - .bullets

.words                          dd .wordsLength / 4 - 1,\
                                   Statistic.wSCORE, Statistic.nSCORE
.wordsLength                    = $ - .words
                                             
level1 Level <TRUE, 0, 0, 0, 0>, 0, 0, 12475, 1300, <80, 187, 255>, <Level1.gameObjects, Level1.gameObjectsWithDrawing, Level1.gameObjectsWithAnimation, Level1.entities, Level1.bricksWithBreakTimer, Level1.enemies, Level1.enemiesWithBullets, Level1.enemiesWithStopTimer, Level1.bullets, Level1.words>, Level1, BufferLevel1