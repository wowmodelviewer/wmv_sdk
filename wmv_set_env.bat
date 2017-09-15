echo off
echo Setting up environment for WoW Model Viewer development...
set WMV_SDK_BASEDIR=%CD%
echo Base SDK directory set to : %WMV_SDK_BASEDIR%
set PATH=%WMV_SDK_BASEDIR%\CMake\bin;%WMV_SDK_BASEDIR%;%PATH%
call .\VsDevCmd.bat
@rem following lines are for VS2017
@rem for /f "usebackq tokens=*" %%i in (`vswhere.exe -latest -products * -property InstallationPath`) do (
@rem   set VSDIR=%%i
@rem )
@rem call "%VSDIR%\Common7\Tools\VsDevCmd.bat"

