struct Star
  menuObjectWithDrawing MenuObjectWithDrawing
  neededCountToLight    dd ?
  refLevel              dd ?
ends

proc Star.CanLight\
     refStar
     
        mov     eax, [refStar]
        
        mov     ecx, [eax + Star.refLevel]
        mov     ecx, [ecx + Level.levelStatistics.bestStars]
        
        cmp     [eax + Star.neededCountToLight], ecx
        jb      .canNotLight
     
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
     
        mov     [eax + menuObjectWithDrawing.drawing.refTexture], starTexture   
   
        ret     
endp

proc Star.Extinguish\
     refStar
     
        mov     eax, [refStar]
     
        mov     [eax + menuObjectWithDrawing.drawing.refTexture], voidStarTexture   
   
        ret     
endp

proc Star.ProcessObject\
     refStar
     
        stdcall Star.CanLight, [refStar]
        cmp     eax, FALSE
        je      .canNotLight
   
  .canLight:
        stdcall Star.Light, [refStar]
        jmp     .exit
        
  .canNotLight:
        stdcall Star.Extinguish, [refStar]   

  .exit:         
        ret     
endp

proc Star.ProcessObjects\
     refStars
     
        stdcall Array.Iterate, [refStars] 
        
        ret     
endp