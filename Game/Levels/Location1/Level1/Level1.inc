Level1:

.delete GameObject <Object.GAME, 0, -1, 100000, 1>, GameObject.DELETE

.dirt1 GameObjectWithDrawing <<Object.GAME, 0, 0, 21, 2>, GameObject.BLOCK>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass1 GameObjectWithDrawing <<Object.GAME, 0, 32, 21, 1>, GameObject.BLOCK>,\
			                        <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>

.bush1 GameObjectWithDrawing <<Object.GAME, 80, 49, 1, 1>, GameObject.DECORATION>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>

.palm1 GameObjectWithDrawing <<Object.GAME, 115, 49, 1, 1>, GameObject.DECORATION>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>
                             
.flower1 GameObjectWithDrawing <<Object.GAME, 145, 49, 1, 1>, GameObject.DECORATION>,\
			                         <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>
                               
.coin1 Bonus <<<<Object.GAME, 180, 54, 1, 1>, GameObject.BONUS_FOR_LEVEL>,\
			       <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
             <FALSE, 0, 90, 0, coinFrames>>,\
             Bonus.COIN
             
.coin2 Bonus <<<<Object.GAME, 195, 54, 1, 1>, GameObject.BONUS_FOR_LEVEL>,\
			       <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
             <FALSE, 0, 90, 0, coinFrames>>,\
             Bonus.COIN
             
.coin3 Bonus <<<<Object.GAME, 210, 54, 1, 1>, GameObject.BONUS_FOR_LEVEL>,\
			       <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
             <FALSE, 0, 90, 0, coinFrames>>,\
             Bonus.COIN
             
.coin4 Bonus <<<<Object.GAME, 225, 54, 1, 1>, GameObject.BONUS_FOR_LEVEL>,\
			       <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
             <FALSE, 0, 90, 0, coinFrames>>,\
             Bonus.COIN
             
.palm2 GameObjectWithDrawing <<Object.GAME, 240, 49, 1, 1>, GameObject.DECORATION>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>
             
.brick1 GameObjectWithDrawing <<Object.GAME, 274, 80, 1, 1>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
			                        <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>
                              
.brick2 GameObjectWithDrawing <<Object.GAME, 289, 80, 1, 1>, GameObject.BLOCK + GameObject.BOTTOM_BREAK>,\
			                        <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, brickTexture>
 
.heart1 Bonus <<<<Object.GAME, Object.TRASH_X, Object.TRASH_Y, 1, 1>, GameObject.BONUS_FOR_PLAYER>,\
			        <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, heartTexture>>,\
              <FALSE, 0, 90, 0, heartFrames>>,\
              Bonus.HEART
                              
.luck1 Luck <<<<Object.GAME, 305, 80, 1, 1>, GameObject.BLOCK + GameObject.BOTTOM_LUCK>,\
			      <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, luckTexture>>,\
            <FALSE, 0, 150, 0, luckFrames>>,\
            .heart1
             
.bush2 GameObjectWithDrawing <<Object.GAME, 308, 49, 1, 1>, GameObject.DECORATION>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>
                             
.shadow1 GameObjectWithDrawing <<Object.GAME, 335, 24, 1, 25>, GameObject.DECORATION>,\
			                         <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>

.dirt2 GameObjectWithDrawing <<Object.GAME, 336, 0, 6, 1>, GameObject.BLOCK>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass2 GameObjectWithDrawing <<Object.GAME, 336, 16, 6, 1>, GameObject.BLOCK>,\
			                        <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>
                              
.reverse1 GameObject <Object.GAME, 336, 33, 1, 1>, GameObject.REVERSE

.reverse2 GameObject <Object.GAME, 431, 33, 1, 1>, GameObject.REVERSE

.flower2 GameObjectWithDrawing <<Object.GAME, 395, 33, 1, 1>, GameObject.DECORATION>,\
			                         <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>

.owl1 Enemy <<<<<Object.GAME, 337, 33, 1, 1>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
			      <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, owlTexture>>,\
            <FALSE, 0, 100, 0, owlFrames>>,\
            TRUE, 5, 0, TRUE>,\
            1, owlAnimations, 100
                                           
.dirt3 GameObjectWithDrawing <<Object.GAME, 432, 0, 28, 2>, GameObject.BLOCK>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass3 GameObjectWithDrawing <<Object.GAME, 432, 32, 28, 1>, GameObject.BLOCK>,\
			                        <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>
                              
.shadow2 GameObjectWithDrawing <<Object.GAME, 432, 24, 1, 25>, GameObject.DECORATION>,\
			                         <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>                  
                              
.palm3 GameObjectWithDrawing <<Object.GAME, 436, 49, 1, 1>, GameObject.DECORATION>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>                              
                              
.coin5 Bonus <<<<Object.GAME, 461, 54, 1, 1>, GameObject.BONUS_FOR_LEVEL>,\
			       <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
             <FALSE, 0, 90, 0, coinFrames>>,\
             Bonus.COIN
             
.coin6 Bonus <<<<Object.GAME, 476, 54, 1, 1>, GameObject.BONUS_FOR_LEVEL>,\
			       <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
             <FALSE, 0, 90, 0, coinFrames>>,\
             Bonus.COIN
             
.coin7 Bonus <<<<Object.GAME, 491, 54, 1, 1>, GameObject.BONUS_FOR_LEVEL>,\
			       <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, coinTexture>>,\
             <FALSE, 0, 90, 0, coinFrames>>,\
             Bonus.COIN
             
.bottomPipe1 GameObjectWithDrawing <<Object.GAME, 521, 49, 1, 20>, GameObject.BLOCK>,\
			                             <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, bottomPipeTexture>                               
                              
.topPipe1 GameObjectWithDrawing <<Object.GAME, 519, 64, 1, 1>, GameObject.BLOCK>,\
			                          <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, topPipeTexture>
                                
.reverse3 GameObject <Object.GAME, 542, 49, 1, 1>, GameObject.REVERSE

.reverse4 GameObject <Object.GAME, 772, 49, 1, 1>, GameObject.REVERSE
          
.bush3 GameObjectWithDrawing <<Object.GAME, 755, 49, 1, 1>, GameObject.DECORATION>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, bushTexture>
                             
.reverse5 GameObject <Object.GAME, 780, 55, 1, 1>, GameObject.REVERSE

.reverse6 GameObject <Object.GAME, 780, 95, 1, 1>, GameObject.REVERSE
                             
.venusFlycatcher1 EnemyWithStopTimer <<<<<<<Object.GAME, 777, 55, 1, 1>, GameObject.UNTOCHABLE_ENEMY + GameObject.REVERSEABLE_ENEMY + GameObject.STOPABLE_ENEMY>,\
			                               <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, venusFlycatcherTexture>>,\
                                     <FALSE, 0, 300, 0, venusFlycatcherFrames>>,\
                                     TRUE, 0, 1, FALSE>,\
                                     1, venusFlycatcherAnimations, 200>,\
                                     -1, 2000>,\
                                     GameObject.REVERSE
 
.bottomPipe2 GameObjectWithDrawing <<Object.GAME, 775, 49, 1, 20>, GameObject.BLOCK>,\
			                             <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, bottomPipeTexture>                               
                              
.topPipe2 GameObjectWithDrawing <<Object.GAME, 773, 64, 1, 1>, GameObject.BLOCK>,\
			                          <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, topPipeTexture>
            
.dirt4 GameObjectWithDrawing <<Object.GAME, 592, 49, 8, 3>, GameObject.DECORATION>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass4 GameObjectWithDrawing <<Object.GAME, 592, 97, 8, 1>, GameObject.DECORATION>,\
			                        <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>
                              
.shadow3 GameObjectWithDrawing <<Object.GAME, 592, 49, 1, 65>, GameObject.DECORATION>,\
			                         <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>
                               
.shadow4 GameObjectWithDrawing <<Object.GAME, 592, 113, 129, 1>, GameObject.TOP_BLOCK>,\
			                         <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>
                              
.star1 Bonus <<<<Object.GAME, 652, 130, 1, 1>, GameObject.BONUS_FOR_LEVEL>,\
			       <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, starTexture>>,\
             <FALSE, 0, 90, 0, starFrames>>,\
             Bonus.STAR                  
                              
.palm4 GameObjectWithDrawing <<Object.GAME, 602, 114, 1, 1>, GameObject.DECORATION>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture> 
                          
.palm5 GameObjectWithDrawing <<Object.GAME, 682, 114, 1, 1>, GameObject.DECORATION>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>
                             
.shadow5 GameObjectWithDrawing <<Object.GAME, 720, 49, 1, 65>, GameObject.DECORATION>,\
			                         <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture> 

.owl2 Enemy <<<<<Object.GAME, 543, 49, 1, 1>, GameObject.ENEMY + GameObject.BLOCKABLE_ENEMY + GameObject.REVERSEABLE_ENEMY>,\
			      <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, owlTexture>>,\
            <FALSE, 0, 100, 0, owlFrames>>,\
            TRUE, 5, 0, TRUE>,\
            1, owlAnimations, 100
            
.shadow6 GameObjectWithDrawing <<Object.GAME, 879, 24, 1, 25>, GameObject.DECORATION>,\
			                         <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>
                               
.dirt5 GameObjectWithDrawing <<Object.GAME, 880, 0, 8, 1>, GameObject.BLOCK>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass5 GameObjectWithDrawing <<Object.GAME, 880, 16, 8, 1>, GameObject.BLOCK>,\
			                        <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>
                              
.spring1 GameObjectWithAnimation <<<Object.GAME, 900, 33, 1, 1>, GameObject.JUMP>,\
			                           <Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, springTexture>>,\
                                 <TRUE, -1, 50, 0, springFrames>
                                 
.palm6 GameObjectWithDrawing <<Object.GAME, 930, 33, 1, 1>, GameObject.DECORATION>,\
			                       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>
                             
.flower3 GameObjectWithDrawing <<Object.GAME, 955, 33, 1, 1>, GameObject.DECORATION>,\
			                         <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, flowerTexture>
                               
.greenBlock1 GameObjectWithDrawing <<Object.GAME, 975, 81, 1, 1>, GameObject.BLOCK>,\
			                             <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, greenBlockTexture>
                                   
.blueBlock1 GameObjectWithDrawing <<Object.GAME, 991, 81, 1, 1>, GameObject.BLOCK>,\
			                            <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, blueBlockTexture>
                                  
.pinkBlock1 GameObjectWithDrawing <<Object.GAME, 975, 65, 1, 1>, GameObject.BLOCK>,\
			                            <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pinkBlockTexture>
                                   
.yellowBlock1 GameObjectWithDrawing <<Object.GAME, 991, 65, 1, 1>, GameObject.BLOCK>,\
			                              <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, yellowBlockTexture>
                                  
.greenBlock2 GameObjectWithDrawing <<Object.GAME, 975, 49, 1, 1>, GameObject.BLOCK>,\
			                             <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, greenBlockTexture>
                                   
.blueBlock2 GameObjectWithDrawing <<Object.GAME, 991, 49, 1, 1>, GameObject.BLOCK>,\
			                            <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, blueBlockTexture>
                                  
.pinkBlock2 GameObjectWithDrawing <<Object.GAME, 975, 33, 1, 1>, GameObject.BLOCK>,\
			                            <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, pinkBlockTexture>
                                   
.yellowBlock2 GameObjectWithDrawing <<Object.GAME, 991, 33, 1, 1>, GameObject.BLOCK>,\
			            <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, yellowBlockTexture>
                                  
.dirt6 GameObjectWithDrawing <<Object.GAME, 1007, 0, 11, 2>, GameObject.BLOCK>,\
			     <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, dirtTexture>
                                    
.grass6 GameObjectWithDrawing <<Object.GAME, 1007, 32, 11, 1>, GameObject.BLOCK>,\
			      <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, grassTexture>
                              
.shadow7 GameObjectWithDrawing <<Object.GAME, 1007, 24, 1, 25>, GameObject.DECORATION>,\
			       <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, shadowTexture>
                               
.palm7 GameObjectWithDrawing <<Object.GAME, 1027, 49, 1, 1>, GameObject.DECORATION>,\
			     <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, palmTexture>

.reverse7 GameObject <Object.GAME, 1007, 89, 1, 1>, GameObject.REVERSE

.reverse8 GameObject <Object.GAME, 1107, 89, 1, 1>, GameObject.REVERSE
                             
.bee1 Enemy <<<<<Object.GAME, 1047, 89, 1, 1>, GameObject.ENEMY + GameObject.REVERSEABLE_ENEMY>,\
	    <Drawing.NORMAL, Drawing.RIGHT, Drawing.UP, beeTexture>>,\
            <FALSE, 0, 100, 0, beeFrames>>,\
            TRUE, 4, 0, FALSE>,\
            1, beeAnimations, 100
             


                                                  

                              
                              
                              
                              
                              

            

.gameObjects                    dd .gameObjectsLength / 4 - 1,\
                                   .delete, .dirt1, .grass1, .bush1, .palm1, .flower1, .coin1, .coin2, .coin3, .coin4, .palm2, .brick1, .brick2, .heart1, .luck1, .bush2, .shadow1,\
                                   .dirt2, .grass2, .reverse1, .reverse2, .flower2, .owl1,\
                                   .shadow2, .dirt3, .grass3, .palm3, .coin5, .coin6, .coin7, .bottomPipe1, .topPipe1, .reverse3, .reverse4, .bush3, .reverse5, .reverse6, .venusFlycatcher1, .bottomPipe2, .topPipe2, .shadow6,\
                                   .dirt4, .grass4, .shadow3, .shadow4, .palm4, .star1, .palm5, .shadow5, .owl2,\
                                   .dirt5, .grass5, .spring1, .palm6, .flower3, .greenBlock1, .blueBlock1, .pinkBlock1, .yellowBlock1, .greenBlock2, .blueBlock2, .pinkBlock2, .yellowBlock2,\
                                   .dirt6, .grass6, .shadow7, .palm7, .reverse7, .reverse8, .bee1,\
                                   player
.gameObjectsLength              = $ - .gameObjects

.gameObjectsWithDrawing         dd .gameObjectsWithDrawingLength / 4 - 1,\
                                   .dirt1, .grass1, .bush1, .palm1, .flower1, .coin1, .coin2, .coin3, .coin4, .palm2, .brick1, .brick2, .heart1, .luck1, .bush2, .shadow1,\
                                   .dirt2, .grass2, .flower2, .owl1,\
                                   .dirt3, .grass3, .shadow2, .palm3,.coin5, .coin6, .coin7, .bottomPipe1, .topPipe1, .bush3, .venusFlycatcher1, .bottomPipe2, .topPipe2, .shadow6,\
                                   .dirt4, .grass4, .shadow3, .shadow4, .palm4, .star1, .palm5, .shadow5, .owl2,\
                                   .dirt5, .grass5, .spring1, .palm6, .flower3, .greenBlock1, .blueBlock1, .pinkBlock1, .yellowBlock1, .greenBlock2, .blueBlock2, .pinkBlock2, .yellowBlock2,\
                                   .dirt6, .grass6, .shadow7, .palm7, .bee1,\
                                   player
.gameObjectsWithDrawingLength   = $ - .gameObjectsWithDrawing

.gameObjectsWithAnimation       dd .gameObjectsWithAnimationLength / 4 - 1,\
                                   .coin1, .coin2, .coin3, .coin4, .heart1, .luck1,\
                                   .owl1,\
                                   .coin5, .coin6, .coin7, .owl2, .venusFlycatcher1,\
                                   .spring1, .bee1,\
                                   player
.gameObjectsWithAnimationLength = $ - .gameObjectsWithAnimation

.entities                       dd .entitiesLength / 4 - 1,\
                                   .owl1,\
                                   .owl2, .venusFlycatcher1, .bee1,\
                                   player
.entitiesLength                 = $ - .entities

.bricksWithBreakTimer           dd .bricksWithBreakTimerLength / 4 - 1
                                  
.bricksWithBreakTimerLength     = $ - .bricksWithBreakTimer

.enemiesWithBullets             dd .enemiesWithBulletsLength / 4 - 1
                                   
.enemiesWithBulletsLength       = $ - .enemiesWithBullets

.enemiesWithReverseTimer        dd .enemiesWithReverseTimerLength / 4 - 1
                                   
.enemiesWithReverseTimerLength  = $ - .enemiesWithReverseTimer

.enemiesWithStopTimer           dd .enemiesWithStopTimerLength / 4 - 1,\
                                   .venusFlycatcher1
.enemiesWithStopTimerLength     = $ - .enemiesWithStopTimer

level1 Level <TRUE, FALSE, 0, 0, 0, 0>, 0, 0, 50000, 1300, <Level1.gameObjects, Level1.gameObjectsWithDrawing, Level1.gameObjectsWithAnimation, Level1.entities, Level1.bricksWithBreakTimer, Level1.enemiesWithBullets, Level1.enemiesWithReverseTimer, Level1.enemiesWithStopTimer>