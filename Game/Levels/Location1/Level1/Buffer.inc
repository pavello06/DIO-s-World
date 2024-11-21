BufferLevel1:
dd BufferLevel1Length / 4 - 1             

.delete GameObject\
<Object.GAME, 0, -1, 100000, 1>, GameObject.DELETE

.dirt1 GameObjectWithDrawing\
<<Object.GAME, 0, 0, 21 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass1 GameObjectWithDrawing\
<<Object.GAME, 0, 32 * Drawing.NORMAL, 21 * GRASS_WIDTH * Drawing.NORMAL, GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.bush1 GameObjectWithDrawing\
<<Object.GAME, 80 * Drawing.NORMAL, 49 * Drawing.NORMAL, BUSH_WIDTH * Drawing.NORMAL, BUSH_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.palm1 GameObjectWithDrawing\
<<Object.GAME, 115 * Drawing.NORMAL, 49 * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>
                             
.flower1 GameObjectWithDrawing\
<<Object.GAME, 145 * Drawing.NORMAL, 49 * Drawing.NORMAL, FLOWER_WIDTH * Drawing.NORMAL, FLOWER_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
<Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>
                               
.coin1 Bonus\
<<<<Object.GAME, 180 * Drawing.NORMAL, 54 * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
             
.coin2 Bonus\
<<<<Object.GAME, 195 * Drawing.NORMAL, 54 * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
             
.coin3 Bonus\
<<<<Object.GAME, 210 * Drawing.NORMAL, 54 * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
<Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
<FALSE, 0, 90, 0, coinFrames>>,\
Bonus.COIN
             
.coin4 Bonus\
<<<<Object.GAME, 225 * Drawing.NORMAL, 54 * Drawing.NORMAL, COIN_WIDTH * Drawing.LITTLE, COIN_HEIGHT * Drawing.LITTLE>, GameObject.BONUS_FOR_LEVEL>,\
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

.reverse6 GameObject <Object.GAME, 780 * Drawing.NORMAL, 95 * Drawing.NORMAL, 1, 1>, GameObject.REVERSE
                             
.venusFlycatcher1 EnemyWithStopTimer <<<<<<<Object.GAME, 777 * Drawing.NORMAL, 55 * Drawing.NORMAL, VENUS_FLYCATCHER_WIDTH * Drawing.LITTLE, VENUS_FLYCATCHER_HEIGHT * Drawing.LITTLE>, GameObject.UNTOCHABLE_ENEMY + GameObject.REVERSEABLE_ENEMY + GameObject.STOPABLE_ENEMY>,\
			                               <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, venusFlycatcherTexture>>,\
                                     <FALSE, 0, 300, 0, venusFlycatcherFrames>>,\
                                     TRUE, 0, 1, FALSE>,\
                                     1, venusFlycatcherAnimations, 200>,\
                                     -1, 2000>,\
                                     GameObject.REVERSE
 
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
                                  
.dirt6 GameObjectWithDrawing <<Object.GAME, 1007 * Drawing.NORMAL, 0, 11 * DIRT_WIDTH * Drawing.NORMAL, 2 * DIRT_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
			     <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass6 GameObjectWithDrawing <<Object.GAME, 1007 * Drawing.NORMAL, 32 * Drawing.NORMAL, 11 * GRASS_WIDTH * Drawing.NORMAL, 1 * GRASS_HEIGHT * Drawing.NORMAL>, GameObject.BLOCK>,\
			      <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>
                              
.shadow7 GameObjectWithDrawing <<Object.GAME, 1007 * Drawing.NORMAL, 24 * Drawing.NORMAL, 1 * Drawing.NORMAL, 25 * Drawing.NORMAL>, GameObject.DECORATION>,\
			       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>
                               
.palm7 GameObjectWithDrawing <<Object.GAME, 1027 * Drawing.NORMAL, 49 * Drawing.NORMAL, PALM_WIDTH * Drawing.NORMAL, PALM_HEIGHT * Drawing.NORMAL>, GameObject.DECORATION>,\
			     <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.reverse7 GameObject <Object.GAME, 1007 * Drawing.NORMAL, 89 * Drawing.NORMAL, 1, 1>, GameObject.REVERSE

.reverse8 GameObject <Object.GAME, 1107 * Drawing.NORMAL, 89 * Drawing.NORMAL, 1, 1>, GameObject.REVERSE
                             
.bee1 Enemy <<<<<Object.GAME, 1047 * Drawing.NORMAL, 89 * Drawing.NORMAL, BEE_WIDTH * Drawing.NORMAL, BEE_HEIGHT * Drawing.NORMAL>, GameObject.ENEMY + GameObject.REVERSEABLE_ENEMY>,\
	    <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, beeTexture>>,\
            <FALSE, 0, 100, 0, beeFrames>>,\
            TRUE, 4, 0, FALSE>,\
            1, beeAnimations, 100
            
BufferLevel1Length = $ - BufferLevel1