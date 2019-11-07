@echo off
setlocal enabledelayedexpansion
title Auto Cut-Paste

set base=cale\Base\*.jpg
set destination=cale\Destination
set file=cale\Destination\Coduri.txt

cls
:loop
IF EXIST "%base%" (
set cod=value
set /p cod=Introduceti codul de bare: 
echo !cod!>>%file% 
dir /b %base%>>%file%
ren %base% !cod!.jpg
echo. >>%file%
move %base% %destination%
echo.)
PING 1.1.1.1 -n 1 -w 500 >NUL
goto :loop  