@Echo Off
SetLocal EnableDelayedExpansion

CD %~dp0
If Exist "debug.log" Del /F /Q "debug.log"
If Exist "output" RD /S /Q "output"
sweetdx.exe --source=./source --output=./output --log-file=./debug.log

Exit /b %ERRORLEVEL%