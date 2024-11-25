Statistic:

.wSCORE String\
<Object.MENU, 30 * Drawing.LITTLE, 100 * Drawing.LITTLE, 5 * (A_WIDTH + 1) * Drawing.LITTLE - Drawing.LITTLE, A_HEIGHT * Drawing.LITTLE>,\
<'S', 'C', 'O', 'R', 'E', 0, 0, 0, 0, 0>, .wSCORE1

.wSCORE1 dd Object.MENU, 0, 0, A_WIDTH * Drawing.LITTLE, A_HEIGHT * Drawing.LITTLE, Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidTexture                            
.wSCORE2 dd Object.MENU, 0, 0, A_WIDTH * Drawing.LITTLE, A_HEIGHT * Drawing.LITTLE, Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidTexture  
.wSCORE3 dd Object.MENU, 0, 0, A_WIDTH * Drawing.LITTLE, A_HEIGHT * Drawing.LITTLE, Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidTexture  
.wSCORE4 dd Object.MENU, 0, 0, A_WIDTH * Drawing.LITTLE, A_HEIGHT * Drawing.LITTLE, Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidTexture  
.wSCORE5 dd Object.MENU, 0, 0, A_WIDTH * Drawing.LITTLE, A_HEIGHT * Drawing.LITTLE, Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, voidTexture

.nSCORE Number\
<Object.MENU, 30 * Drawing.NORMAL, 100 * Drawing.NORMAL, 5 * (ZERO_WIDTH + 1) * Drawing.NORMAL - Drawing.NORMAL, ZERO_HEIGHT * Drawing.NORMAL>,\
0, <'0', '0', '0', '0', '0'>, .nSCORE1

.nSCORE1 dd Object.MENU, 0, 0, ZERO_WIDTH * Drawing.BIG, ZERO_HEIGHT * Drawing.BIG, Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture                            
.nSCORE2 dd Object.MENU, 0, 0, ZERO_WIDTH * Drawing.BIG, ZERO_HEIGHT * Drawing.BIG, Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture  
.nSCORE3 dd Object.MENU, 0, 0, ZERO_WIDTH * Drawing.BIG, ZERO_HEIGHT * Drawing.BIG, Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture  
.nSCORE4 dd Object.MENU, 0, 0, ZERO_WIDTH * Drawing.BIG, ZERO_HEIGHT * Drawing.BIG, Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture  
.nSCORE5 dd Object.MENU, 0, 0, ZERO_WIDTH * Drawing.BIG, ZERO_HEIGHT * Drawing.BIG, Drawing.BIG, Drawing.RIGHT, Drawing.UP, voidTexture

.border dd\
Object.MENU, 200, 200, BORDER_WIDTH * Drawing.LITTLE, BORDER_HEIGHT * Drawing.LITTLE,\
Drawing.LITTLE, Drawing.RIGHT, Drawing.UP, borderTexture

.bonus dd\
Object.MENU, 0, 0, HEART_WIDTH * Drawing.SMALL, HEART_HEIGHT * Drawing.SMALL,\
Drawing.SMALL, Drawing.RIGHT, Drawing.UP, heartTexture,\
FALSE, 0, 150, 0, heartFrames

.stars dd\
Object.MENU, 0, 0, Drawing.SMALL, STAR_HEIGHT * Drawing.SMALL,\
Drawing.SMALL, Drawing.RIGHT, Drawing.UP, starTexture 

proc Statistic.UpdateScore

        mov     eax, [currentLevel]
        
        mov     ecx, [eax + Level.levelStatistics.score]
        mov     [Statistic.nSCORE + Number.number], ecx
        
        mov     edx, [Screen.xMin]
        add     edx, 5 * Drawing.NORMAL
        mov     [Statistic.wSCORE + Object.x], edx
        add     edx, 1 * Drawing.NORMAL
        mov     [Statistic.nSCORE + Object.x], edx
        mov     eax, [Screen.yMax]
        sub     eax, 10 * Drawing.NORMAL
        mov     [Statistic.wSCORE + Object.y], eax
        sub     eax, 8 * Drawing.NORMAL
        mov     [Statistic.nSCORE + Object.y], eax        

        ret
endp

proc Statistic.UpdateBorderAndBonus uses ebx

        mov     ebx, [Statistic.bonus + MenuObjectWithAnimation.animation.refFrames]
  
  .bonus:      
        cmp     DWORD [player.worldTimer], -1
        je      .notWorld
        
        mov     DWORD [Statistic.bonus + Object.width], WORLD_WIDTH * Drawing.SMALL
        mov     DWORD [Statistic.bonus + Object.height], WORLD_HEIGHT * Drawing.SMALL        
        stdcall Animation.Copy, Statistic.bonus + MenuObjectWithAnimation.animation, worldAnimation
        jmp     .borderAndBonus

  .notWorld:
        cmp     DWORD [player.hasArrow], TRUE
        jne     .notArrow
        
        mov     DWORD [Statistic.bonus + Object.width], ARROW_WIDTH * Drawing.SMALL
        mov     DWORD [Statistic.bonus + Object.height], ARROW_HEIGHT * Drawing.SMALL        
        stdcall Animation.Copy, Statistic.bonus + MenuObjectWithAnimation.animation, arrowAnimation
        jmp     .borderAndBonus

  .notArrow:
        cmp     DWORD [player.hasHeart], TRUE
        jne     .notHeart
        
        mov     DWORD [Statistic.bonus + Object.width], HEART_WIDTH * Drawing.SMALL
        mov     DWORD [Statistic.bonus + Object.height], HEART_HEIGHT * Drawing.SMALL        
        stdcall Animation.Copy, Statistic.bonus + MenuObjectWithAnimation.animation, heartAnimation
        jmp     .borderAndBonus

  .notHeart:
        mov     DWORD [Statistic.bonus + MenuObjectWithDrawing.drawing.refTexture], voidTexture
        mov     DWORD [Statistic.bonus + MenuObjectWithAnimation.animation], voidFrames
  
  .borderAndBonus:
        cmp     ebx, [Statistic.bonus + MenuObjectWithAnimation.animation.refFrames]
        je      @F
        
        stdcall Animation.Start, Statistic.bonus + MenuObjectWithAnimation.animation
  @@:
        mov     eax, [Screen.xMin]
        add     eax, 45 * Drawing.NORMAL
        mov     [Statistic.border + Object.x], eax
        mov     ecx, [Statistic.border + Object.width]
        sub     ecx, [Statistic.bonus + Object.width]
        shr     ecx, 1
        add     eax, ecx
        mov     [Statistic.bonus + Object.x], eax        
        mov     edx, [Screen.yMax]
        sub     edx, 23 * Drawing.NORMAL
        mov     [Statistic.border + Object.y], edx
        mov     eax, [Statistic.border + Object.height]
        sub     eax, [Statistic.bonus + Object.height]
        shr     eax, 1
        add     edx, eax
        mov     [Statistic.bonus + Object.y], edx   
  
  .exit:
        ret
endp

proc Statistic.UpdateStars

        mov     eax, [currentLevel]
        
        mov     ecx, [eax + Level.levelStatistics.stars]
        imul    ecx, STAR_WIDTH * Drawing.SMALL
        add     ecx, Drawing.SMALL
        mov     [Statistic.stars + Object.width], ecx

        mov     edx, [Screen.xMin]
        add     edx, 6 * Drawing.NORMAL
        mov     [Statistic.stars + Object.x], edx
        mov     eax, [Screen.yMax]
        sub     eax, 28 * Drawing.NORMAL
        mov     [Statistic.stars + Object.y], eax

        ret
endp

proc Statistic.Update

        stdcall Statistic.UpdateScore
        stdcall Statistic.UpdateBorderAndBonus
        stdcall Statistic.UpdateStars

        ret
endp

proc Statistic.Reset

        mov     eax, [currentLevel]
        
        mov     DWORD [eax + Level.levelStatistics.score], 0
        mov     DWORD [eax + Level.levelStatistics.stars], 0

        ret
endp