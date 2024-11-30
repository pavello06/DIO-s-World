fileName    db 'levelsStatistics.txt', 0
buffer      dd ?
file_handle dd ?

proc File.ReadAndWriteLevelStatisticsAction uses ebx esi,\
     refLevel, refAction
        
        mov     ebx, [refLevel]
        mov     esi, [refAction]
        
        lea     eax, [ebx + Level.levelStatistics.isAvailable] 
        stdcall esi, [file_handle], eax, sizeof.LevelStatistics.isAvailable, buffer, 0

        lea     ecx, [ebx + Level.levelStatistics.bestScore]
        stdcall esi, [file_handle], ecx, sizeof.LevelStatistics.bestScore, buffer, 0
        
        lea     edx, [ebx + Level.levelStatistics.bestStars]
        stdcall esi, [file_handle], edx, sizeof.LevelStatistics.bestStars, buffer, 0  

        ret
endp

proc File.ReadAndWriteLevelStatistics\
     refAction
                                      
        mov [file_handle], eax
        
        stdcall Array.Iterate, [refAction], levels
        
        invoke CloseHandle, [file_handle]  

        ret
endp

proc File.WriteLevelStatisticsAction\
     refLevel
         
        stdcall File.ReadAndWriteLevelStatisticsAction, [refLevel], [WriteFile] 

        ret
endp

proc File.WriteLevelStatistics

        invoke CreateFile, fileName, 0x40000000, 0, 0, 2, 0x80, 0
        stdcall File.ReadAndWriteLevelStatistics, File.WriteLevelStatisticsAction  

        ret
endp

proc File.ReadLevelStatisticsAction\
     refLevel
        
        stdcall File.ReadAndWriteLevelStatisticsAction, [refLevel], [ReadFile]   

        ret
endp

proc File.ReadLevelStatistics

        invoke CreateFile, fileName, 0x80000000, 0, 0, 4, 0x80, 0 
        stdcall File.ReadAndWriteLevelStatistics, File.ReadLevelStatisticsAction   

        ret
endp