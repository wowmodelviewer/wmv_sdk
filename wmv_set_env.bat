echo off
echo Setting up environment for WoW Model Viewer development...
set WMV_SDK_BASEDIR=%CD%
echo Base SDK directory set to : %WMV_SDK_BASEDIR%
set PATH=%WMV_SDK_BASEDIR%\CMake\bin;%WMV_SDK_BASEDIR%;%PATH%
call .\VsDevCmd.bat
@rem set next line to your actual wowmodelviewer source location
set WMV_BASE_PATH=D:\Development\wowmodelviewer
cd /d "%WMV_BASE_PATH%"