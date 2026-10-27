@Echo Off
Rem Stage everything except decompiled/ (not kept locally: staging it would
Rem delete it from the repo), commit and push.
Rem Usage: push.bat "commit message"   (asks for one when left out)

CD /D %~dp0

Set "Msg=%~1"
If "%Msg%"=="" Set /P "Msg=Commit message: "
If "%Msg%"=="" (
    Echo No commit message; nothing done.
    Exit /b 1
)

git add -A -- . ":(exclude)decompiled" || Exit /b 1
git commit -m "%Msg%" || Exit /b 1
git push || Exit /b 1
