::文件替换批处理
::用当前目录下的xx.c和xx.h替换当前目录下所有子文件夹内的xx.c和xx.h
::这里的xx是你想要替换的文件名字，需要自己根据需要替换的内容修改
::本例子替换的是ILI93xx.c和qspi.h
@echo off&&setlocal enabledelayedexpansion 
for /f "delims=" %%a in ('dir/b/s/ad') do (
for /f "delims=" %%i in ('dir/b "%%a\*.c"') do (::查找当前目录下包含.c文件的子目录
set var=%%i
if "!var!"=="gt9147.c" copy /y gt9147.c "%%a\%%i"
)
for /f "delims=" %%i in ('dir/b "%%a\*.h"') do (::查找当前目录下包含.h文件的子目录
set var=%%i
if "!var!"=="w25qxx.h" copy /y w25qxx.h "%%a\%%i"
)) 
pause.
