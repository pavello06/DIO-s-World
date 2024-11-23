proc Statistic.UpdateScore\
     refWScore, refNScore
        
        mov     eax, [refWScore]
        mov     ecx, [refNScore]
        
        mov     edx, [Screen.xMin]
        add     edx, 5 * Drawing.NORMAL
        mov     [eax + Object.x], edx
        add     edx, 1 * Drawing.NORMAL
        mov     [ecx + Object.x], edx
        mov     edx, [Screen.yMax]
        sub     edx, 10 * Drawing.NORMAL
        mov     [eax + Object.y], edx
        sub     edx, 6 * Drawing.NORMAL
        mov     [ecx + Object.y], edx        

        ret
endp

proc Statistic.UpdateBonus uses ebx esi,\
     refBonus
        
        mov     ebx, [refBonus]
        
        mov     eax, [Screen.xMin]
        add     eax, 45 * Drawing.NORMAL
        mov     [ebx + Object.x], eax
        mov     ecx, [Screen.yMax]
        sub     ecx, 20 * Drawing.NORMAL
        mov     [ebx + Object.y], ecx
        
        lea     esi, [ebx + MenuObjectWithAnimation.animation]
        
        cmp     DWORD [player.worldTimer], -1
        je      .notWorld
        
        mov     DWORD [ebx + Object.width], WORLD_WIDTH * Drawing.LITTLE
        mov     DWORD [ebx + Object.height], WORLD_HEIGHT * Drawing.LITTLE        
        stdcall Animation.Copy, esi, worldAnimation
        jmp     .exit

  .notWorld:
        cmp     DWORD [player.hasArrow], TRUE
        jne     .notArrow
        
        mov     DWORD [ebx + Object.width], ARROW_WIDTH * Drawing.LITTLE
        mov     DWORD [ebx + Object.height], ARROW_HEIGHT * Drawing.LITTLE        
        stdcall Animation.Copy, esi, arrowAnimation
        jmp     .exit

  .notArrow:
        cmp     DWORD [player.hasHeart], TRUE
        jne     .notHeart
        
        mov     DWORD [ebx + Object.width], HEART_WIDTH * Drawing.LITTLE
        mov     DWORD [ebx + Object.height], HEART_HEIGHT * Drawing.LITTLE        
        stdcall Animation.Copy, esi, heartAnimation
        jmp     .exit

  .notHeart:
        mov     DWORD [ebx + MenuObjectWithDrawing.drawing.refTexture], voidTexture
        mov     DWORD [ebx + MenuObjectWithAnimation.animation], voidFrames
  
  .exit:
        ret
endp