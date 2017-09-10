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

@rem uncomment 2 next lines and change next line to your actual wowmodelviewer source location
@rem set WMV_BASE_PATH=D:\Development\wowmodelviewer
@rem cd /d "%WMV_BASE_PATH%"
