@Echo Off

CD %~dp0
If Exist "debug.log" Del /F /Q "debug.log"
If Exist "output" RD /S /Q "output"
sweetdx.exe --source=./source --output=./output --log-file=./debug.log
If Not "%ERRORLEVEL%"=="0" Exit /b 1

Set "ExeFs=output\atmosphere\contents\0100EA80032EA000\exefs"
Set "Patches=output\atmosphere\exefs_patches\0100EA80032EA000"
Set "RyuExeFs=%APPDATA%\Ryujinx\sdcard\atmosphere\contents\0100EA80032EA000\exefs"
Set "RyuPatches=%APPDATA%\Ryujinx\sdcard\atmosphere\exefs_patches\0100EA80032EA000"
Set "Ips=AEE6DCCC06D9C05B42061E2019123A61.ips"

Copy /Y "main.npdm" "%ExeFs%\main.npdm" >NUL || Exit /b 1

If Not Exist "%RyuExeFs%\" MD "%RyuExeFs%"
If Not Exist "%RyuPatches%\" MD "%RyuPatches%"

Copy /Y "%ExeFs%\subsdk0" "%RyuExeFs%\subsdk0" >NUL || Exit /b 1
Echo Installed subsdk0 to %RyuExeFs%
Copy /Y "%ExeFs%\main.npdm" "%RyuExeFs%\main.npdm" >NUL || Exit /b 1
Echo Installed main.npdm to %RyuExeFs%
Copy /Y "%Patches%\%Ips%" "%RyuPatches%\%Ips%" >NUL || Exit /b 1
Echo Installed %Ips% to %RyuPatches%

Exit /b 0
