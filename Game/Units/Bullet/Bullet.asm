struct Bullet
  entity        Entity
  isActive      dd ?
  refAnimations dd ?
ends

proc Bullet.ActivateOrDeactivate uses ebx,\
     refBullet, x, y, isActive
     
        mov     ebx, [refBullet]
        
        mov     eax, [x]
        mov     DWORD [ebx + Object.x], eax
        mov     ecx, [y]
        mov     DWORD [ebx + Object.y], ecx
        mov     edx, [isActive]
        mov     DWORD [ebx + Entity.canMove], edx
        xor     DWORD [ebx + Entity.canMove], 1
        mov     eax, [isActive]
        mov     DWORD [ebx + Bullet.isActive], eax
        
        mov     ecx, sizeof.Animation
        
        cmp     [isActive], FALSE
        je      .notActive
  
  .active:
        mov     ecx, 0
        
  .notActive:          
        add     ecx, [ebx + Bullet.refAnimations]
        lea     edx, [ebx + GameObjectWithAnimation.animation]
        stdcall Animation.Copy, edx, ecx     
        
        lea     eax, [ebx + GameObjectWithAnimation.animation]
        stdcall Animation.Start, eax
     
        ret
endp        

proc Bullet.Activate\
     refBullet
     
        mov     eax, [refBullet]     
        or      DWORD [eax + GameObject.collide], GameObject.DECORATION
        stdcall Bullet.ActivateOrDeactivate, eax, [eax + Object.x], [eax + Object.y], TRUE
     
        ret
endp

proc Bullet.Deactivate\
     refBullet, x, y
     
        mov     eax, [refBullet]
        mov     ecx, GameObject.DECORATION
        not     ecx
        and     [eax + GameObject.collide], ecx
        stdcall Bullet.ActivateOrDeactivate, eax, [x], [y], FALSE
     
        ret
endp

proc Bullet.GetActiveBullet\                     
     refBullets

        mov     eax, [refBullets]
                                                           
        mov     ecx, [eax + Array.length]
        lea     eax, [eax + Array.element]
        
  .loop:        
        mov     edx, [eax]
        
        cmp     DWORD [edx + Bullet.isActive], TRUE
        je      .hasActiveBullet
       
        add     eax, sizeof.Array.element
        loop    .loop
  
  .hasNotActiveBullet:      
        mov     eax, -1
        jmp     .exit
        
  .hasActiveBullet:      
        mov     eax, edx                                            
        
  .exit:
        ret
endp

proc Bullet.TimerObject\
     refBullet 
        
        stdcall Screen.IsObjectOnScreen, [refBullet]       
        cmp     eax, TRUE
        je      .exit      
        
  .activate:
        stdcall Bullet.Activate, [refBullet]
  
  .exit:   
        ret
endp

proc Bullet.TimerObjects\
     refBullets
     
        stdcall Array.Iterate, Bullet.TimerObject, [refBullets]
          
        ret
endp