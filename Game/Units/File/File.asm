fileName    db 'levelsStatistics.txt', 0
buffer      dd ?
fileHandle  dd ?

proc File.ReadAndWriteLevelStatisticsAction uses ebx esi edi,\
     refLevel, refAction
        
        mov     ebx, [refLevel]
        mov     esi, [refAction]
        mov     edi, [fileHandle]
        
        lea     eax, [ebx + Level.levelStatistics.isAvailable] 
        stdcall esi, edi, eax, sizeof.LevelStatistics.isAvailable, buffer, 0

        lea     ecx, [ebx + Level.levelStatistics.bestScore]
        stdcall esi, edi, ecx, sizeof.LevelStatistics.bestScore, buffer, 0
        
        lea     edx, [ebx + Level.levelStatistics.bestStars]
        stdcall esi, edi, edx, sizeof.LevelStatistics.bestStars, buffer, 0  

        ret
endp

proc File.ReadAndWriteLevelStatistics\
     refAction
                                      
        mov     [fileHandle], eax
        
        stdcall Array.Iterate, [refAction], levels
        
        invoke  CloseHandle, [fileHandle]  

        ret
endp

proc File.WriteLevelStatisticsAction\
     refLevel
         
        stdcall File.ReadAndWriteLevelStatisticsAction, [refLevel], [WriteFile] 

        ret
endp

proc File.WriteLevelStatistics

        invoke  CreateFile, fileName, 0x40000000, 0, 0, 2, 0x80, 0
        stdcall File.ReadAndWriteLevelStatistics, File.WriteLevelStatisticsAction  

        ret
endp

proc File.ReadLevelStatisticsAction\
     refLevel
        
        stdcall File.ReadAndWriteLevelStatisticsAction, [refLevel], [ReadFile]   

        ret
endp

proc File.ReadLevelStatistics

        invoke  CreateFile, fileName, 0x80000000, 0, 0, 4, 0x80, 0 
        stdcall File.ReadAndWriteLevelStatistics, File.ReadLevelStatisticsAction   

        ret
endp