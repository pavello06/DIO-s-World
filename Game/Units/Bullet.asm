struct Bullet
  entity        Entity
  isActive      dd ?
  refAnimations dd ?
ends

proc Bullet.ActivateOrDeactivate\
     refBullet, x, y, speedX, speedY, isActive
     
        mov     eax, [refBullet]
        
        mov     ecx, [x]
        mov     DWORD [eax + Object.x], ecx
        mov     ecx, [y]
        mov     DWORD [eax + Object.y], ecx
        mov     ecx, [speedX]
        mov     DWORD [eax + Entity.speedX], ecx
        mov     ecx, [speedY]
        mov     DWORD [eax + Entity.speedY], ecx
        mov     ecx, [isActive]
        mov     DWORD [eax + Bullet.isActive], ecx
        
        mov     ecx, sizeof.Animation
        
        cmp     [isActive], FALSE
        je      .notActive
  
  .active:
        mov     ecx, 0
        
  .notActive:          
        add     ecx, [eax + Bullet.refAnimations]
        add     eax, sizeof.GameObjectWithDrawing
        stdcall Animation.Copy, eax, ecx       
        
        mov     eax, [refBullet]
        
        add     eax, sizeof.GameObjectWithDrawing 
        stdcall Animation.Start, eax
     
        ret
endp        

proc Bullet.Activate\
     refBullet
     
        mov     eax, [refBullet]
     
        stdcall Bullet.ActivateOrDeactivate, eax, [eax + Object.x], [eax + Object.y], 0, 0, TRUE
     
        ret
endp

proc Bullet.Deactivate\
     refBullet, x, y, speedX, speedY
     
        stdcall Bullet.ActivateOrDeactivate, [refBullet], [x], [y], [speedX], [speedY], FALSE
     
        ret
endp

proc Bullet.GetActiveBullet\                     
     refBullets

        mov     eax, [refBullets]
                                                           
        mov     ecx, [eax + 0]
        add     eax, 4
        
  .loop:        
        mov     edx, [eax]
        
        cmp     DWORD [edx + Bullet.isActive], TRUE
        je      .hasActiveBullet
  
  .endLoop:      
        add     eax, 4
        loop    .loop
  
  .hasNotActiveBullet:      
        mov     eax, -1
        jmp     .exit
        
  .hasActiveBullet:      
        mov     eax, edx                                            
        
  .exit:
        ret
endp