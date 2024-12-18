;General------------------------------------------------------------------------
;Alphabet-----------------------------------------------------------------------

;Digits-------------------------------------------------------------------------

;Void---------------------------------------------------------------------------
voidMusic db 'Music/General/Void/void.wav', 0

;Game---------------------------------------------------------------------------
;General------------------------------------------------------------------------
startMusic db startMusicLength - 1, 'open Music/Game/General/start.wav type waveaudio alias sound', 0
startMusicLength = $ - startMusic

winMusic db winMusicLength - 1, 'open Music/Game/General/win.wav type waveaudio alias sound', 0
winMusicLength = $ - winMusic

loseMusic db loseMusicLength - 1, 'open Music/Game/General/lose.wav type waveaudio alias sound', 0
loseMusicLength = $ - loseMusic  
                                          
;Blocks-------------------------------------------------------------------------
springMusic db springMusicLength - 1, 'open Music/Game/General/Blocks/spring.wav type waveaudio alias sound', 0
springMusicLength = $ - springMusic

brickMusic db brickMusicLength - 1, 'open Music/Game/General/Blocks/brick.wav type waveaudio alias sound', 0
brickMusicLength = $ - brickMusic

;Bonuses------------------------------------------------------------------------
coinMusic db coinMusicLength - 1, 'open Music/Game/General/Bonuses/coin.wav type waveaudio alias sound', 0
coinMusicLength = $ - coinMusic

starMusic db starMusicLength - 1, 'open Music/Game/General/Bonuses/star.wav type waveaudio alias sound', 0
starMusicLength = $ - starMusic

heartMusic db heartMusicLength - 1, 'open Music/Game/General/Bonuses/heart.wav type waveaudio alias sound', 0
heartMusicLength = $ - heartMusic

arrowMusic db arrowMusicLength - 1, 'open Music/Game/General/Bonuses/arrow.wav type waveaudio alias sound', 0
arrowMusicLength = $ - arrowMusic

worldMusic db worldMusicLength - 1, 'open Music/Game/General/Bonuses/world.wav type waveaudio alias sound', 0
worldMusicLength = $ - worldMusic

;Mobs---------------------------------------------------------------------------
mobMusic db mobMusicLength - 1, 'open Music/Game/General/Mobs/mob.wav type waveaudio alias sound', 0
mobMusicLength = $ - mobMusic

;Player-------------------------------------------------------------------------
upJumpingPlayerMusic db upJumpingPlayerMusicLength - 1, 'open Music/Game/General/Player/upJumpingPlayer.wav type waveaudio alias sound', 0
upJumpingPlayerMusicLength = $ - upJumpingPlayerMusic

dyingPlayerMusic db dyingPlayerMusicLength - 1, 'open Music/Game/General/Player/dyingPlayer.wav type waveaudio alias sound', 0
dyingPlayerMusicLength = $ - dyingPlayerMusic

playerBulletMusic db playerBulletMusicLength - 1, 'open Music/Game/General/Player/playerBullet.wav type waveaudio alias sound', 0
playerBulletMusicLength = $ - playerBulletMusic

;Location1----------------------------------------------------------------------
backgroundMusic db 'Music/General/background.wav', 0
bossMusic db 'Music/General/boss.wav', 0
;Blocks-------------------------------------------------------------------------

;Decorations--------------------------------------------------------------------

;Mobs---------------------------------------------------------------------------

;Menu---------------------------------------------------------------------------
;Buttons------------------------------------------------------------------------
buttonMusic db buttonMusicLength - 1, 'open Music/Menu/Buttons/button.wav type waveaudio alias sound', 0
buttonMusicLength = $ - buttonMusic

;Decorations--------------------------------------------------------------------
