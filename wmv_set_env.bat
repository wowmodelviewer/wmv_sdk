echo off
echo Setting up environment for WoW Model Viewer development...
set WMV_SDK_BASEDIR=%CD%
echo Base SDK directory set to : %WMV_SDK_BASEDIR%
set PATH=%WMV_SDK_BASEDIR%\CMake\bin;%WMV_SDK_BASEDIR%;%PATH%
for /f "usebackq tokens=*" %%i in (`vswhere.exe -legacy -version "[15.0,16.0)" -property InstallationPath`) do (
set VSDIR=%%i
)
call "%VSDIR%\Common7\Tools\VsDevCmd.bat"

