struct Star
  menuObjectWithDrawing MenuObjectWithDrawing
  neededCountToLight    dd ?
  refLevelStars         dd ?
ends

proc Star.CanLight\
     refStar
     
        mov     eax, [refStar]
                
        mov     ecx, [eax + Star.refLevelStars]
        mov     edx, [ecx]
        
        cmp     [eax + Star.neededCountToLight], edx
        ja      .canNotLight
     
  .canLight:
        mov     eax, TRUE
        jmp     .exit
        
  .canNotLight:
        mov     eax, FALSE     
  
  .exit:   
        ret     
endp

proc Star.Light\
     refStar
     
        mov     eax, [refStar]
     
        mov     [eax + MenuObjectWithDrawing.drawing.refTexture], starTexture   
   
        ret     
endp

proc Star.Extinguish\
     refStar
     
        mov     eax, [refStar]
     
        mov     [eax + MenuObjectWithDrawing.drawing.refTexture], voidStarTexture   
   
        ret     
endp

proc Star.TimerObject uses ebx,\
     refStar
     
        mov     ebx, [refStar]
     
        stdcall Star.CanLight, ebx
        cmp     eax, FALSE
        je      .canNotLight
   
  .canLight:
        stdcall Star.Light, ebx
        jmp     .exit
        
  .canNotLight:
        stdcall Star.Extinguish, ebx   

  .exit:         
        ret     
endp

proc Star.TimerObjects\
     refStars
     
        stdcall Array.Iterate, Star.TimerObject, [refStars] 
        
        ret     
endp