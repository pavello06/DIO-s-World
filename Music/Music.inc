mci_open_cmd  db 256 dup (?)
mci_play_cmd  db 'play sound wait', 0
mci_close_cmd db 'close sound', 0
thread_handle rb 4

proc Music.Play uses esi edi,\
     refMusic
     
        mov     eax, [refMusic]
        
        lea     esi, [eax + 1]
        lea     edi, [mci_open_cmd]
        
        movzx   ecx, BYTE [eax + 0]
        rep     movsb
        
        invoke  CreateThread, 0, 0, thread_proc, 0, 0, thread_handle

        ret
endp

thread_proc:
    invoke mciSendStringA, mci_open_cmd, 0, 0, 0

    invoke mciSendStringA, mci_play_cmd, 0, 0, 0

    invoke mciSendStringA, mci_close_cmd, 0, 0, 0

    ret

;General------------------------------------------------------------------------
;Alphabet-----------------------------------------------------------------------

;Digits-------------------------------------------------------------------------

;Void---------------------------------------------------------------------------
voidMusic db voidMusicLength, 'open Music/General/Void/void.wav type waveaudio alias sound', 0
voidMusicLength = $ - voidMusic

;Game---------------------------------------------------------------------------
;General------------------------------------------------------------------------
startAndEndMusic db startAndEndMusicLength - 1, 'open Music/Game/General/startAndEnd.wav type waveaudio alias sound', 0
startAndEndMusicLength = $ - startAndEndMusic

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
coinMusic db coinMusicLength, 'open Music/Game/General/Bonuses/coin.wav type waveaudio alias sound', 0
coinMusicLength = $ - coinMusic

starMusic db starMusicLength, 'open Music/Game/General/Bonuses/star.wav type waveaudio alias sound', 0
starMusicLength = $ - starMusic

heartMusic db heartMusicLength, 'open Music/Game/General/Bonuses/heart.wav type waveaudio alias sound', 0
heartMusicLength = $ - heartMusic

arrowMusic db arrowMusicLength, 'open Music/Game/General/Bonuses/arrow.wav type waveaudio alias sound', 0
arrowMusicLength = $ - arrowMusic

worldMusic db worldMusicLength, 'open Music/Game/General/Bonuses/world.wav type waveaudio alias sound', 0
worldMusicLength = $ - worldMusic

;Mobs---------------------------------------------------------------------------
mobMusic db mobMusicLength, 'open Music/Game/General/Mobs/mob.wav type waveaudio alias sound', 0
mobMusicLength = $ - mobMusic

;Player-------------------------------------------------------------------------
upJumpingPlayerMusic db upJumpingPlayerMusicLength, 'open Music/Game/General/Player/upJumpingPlayer.wav type waveaudio alias sound', 0
upJumpingPlayerMusicLength = $ - upJumpingPlayerMusic

dyingPlayerMusic db dyingPlayerMusicLength, 'open Music/Game/General/Player/dyingPlayer.wav type waveaudio alias sound', 0
dyingPlayerMusicLength = $ - dyingPlayerMusic

playerBulletMusic db playerBulletMusicLength, 'open Music/Game/General/Player/playerBullet.wav type waveaudio alias sound', 0
playerBulletMusicLength = $ - playerBulletMusic

;Location1----------------------------------------------------------------------
;Blocks-------------------------------------------------------------------------

;Decorations--------------------------------------------------------------------

;Mobs---------------------------------------------------------------------------

;Menu---------------------------------------------------------------------------
;Buttons------------------------------------------------------------------------
buttonMusic db buttonMusicLength, 'open Music/Menu/Buttons/button.wav type waveaudio alias sound', 0
buttonMusicLength = $ - buttonMusic

;Decorations--------------------------------------------------------------------
