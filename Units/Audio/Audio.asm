isAudioOn db TRUE

mciOpen   db 256 dup (0)
mciPlay   db 'play ---- wait', 0
mciClose  db 'close ----', 0

count dd 0

audioHandles       dd 8 dup (-1)
audioHandlesLength = ($ - audioHandles) / 4

proc Audio.GetMciOpen uses esi edi,\
     refAudio
    
        mov     eax, [refAudio]
        
        lea     esi, [eax + 1]
        lea     edi, [mciOpen]
        
        movzx   ecx, BYTE [eax + 0]
        rep     movsb
        
        inc     DWORD [count]
        
        sub     edi, 5
        stdcall String.NumberToString, 4, [count], edi
    
        ret 
endp

proc Audio.Start\
     refAudio
     
        cmp     BYTE [isAudioOn], FALSE
        je      .exit
        
        stdcall Audio.GetMciOpen, [refAudio] 
        
        mov     eax, audioHandles
        mov     ecx, audioHandlesLength
        
  .loop:
        cmp     DWORD [eax], -1
        je      .createThread
        
        add     eax, 4
        loop    .loop
        jmp     .exit
        
  .createThread:        
        invoke  CreateThread, 0, 0, Audio.Play, 0, 0, eax       

  .exit:
        ret
endp

proc Audio.Play
    
        locals
          number dd ?
        endl
        
        mov     eax, [count]
        mov     [number], eax
    
        invoke  mciSendString, mciOpen, 0, 0, 0
        stdcall String.NumberToString, 4, [number], mciPlay + 5
        invoke  mciSendString, mciPlay, 0, 0, 0
        stdcall String.NumberToString, 4, [number], mciClose + 6
        invoke  mciSendString, mciClose, 0, 0, 0

        ret
endp

proc Audio.Free uses ebx

        mov     ebx, audioHandles
        mov     ecx, audioHandlesLength
        
  .loop:
        push    ecx
        cmp     DWORD [ebx], -1
        je      .endLoop
            
        invoke  WaitForSingleObject, [ebx], 0       
        cmp     eax, WAIT_TIMEOUT
        je      .endLoop  

        ;invoke  CloseHandle, [ebx]
        mov     DWORD [ebx], -1
        
  .endLoop:      
        add     ebx, 4
        pop     ecx
        loop    .loop

        ret
endp