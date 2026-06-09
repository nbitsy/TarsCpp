@echo off
setlocal EnableExtensions EnableDelayedExpansion

REM ============================================================================
REM Generate a Visual Studio 2022 solution for building TarsCpp tools on Windows.
REM
REM Usage:
REM   cmake_tools_vs2022.bat [options]
REM
REM Options:
REM   -b <dir>     Build directory (default: build-vs2022-tools)
REM   -c <config>  Build configuration: Release or Debug (default: Release)
REM   --build      Build all tool executables after generating the solution
REM   --open       Open the generated solution in Visual Studio
REM   --clean      Delete the build directory before generating the solution
REM   -h, --help   Show this help message
REM
REM Examples:
REM   cmake_tools_vs2022.bat
REM   cmake_tools_vs2022.bat -b build-tools --build
REM   cmake_tools_vs2022.bat -c Debug --open
REM ============================================================================

set "SOURCE_DIR=%~dp0"
if "%SOURCE_DIR:~-1%"=="\" set "SOURCE_DIR=%SOURCE_DIR:~0,-1%"

set "BUILD_DIR=%SOURCE_DIR%\build-vs2022-tools"
set "BUILD_CONFIG=Release"
set "DO_BUILD=0"
set "DO_OPEN=0"
set "DO_CLEAN=0"

:parse_args
if "%~1"=="" goto args_done
if /I "%~1"=="-b" (
    set "BUILD_DIR=%~2"
    shift
    shift
    goto parse_args
)
if /I "%~1"=="-c" (
    set "BUILD_CONFIG=%~2"
    shift
    shift
    goto parse_args
)
if /I "%~1"=="--build" (
    set "DO_BUILD=1"
    shift
    goto parse_args
)
if /I "%~1"=="--open" (
    set "DO_OPEN=1"
    shift
    goto parse_args
)
if /I "%~1"=="--clean" (
    set "DO_CLEAN=1"
    shift
    goto parse_args
)
if /I "%~1"=="-h" goto show_help
if /I "%~1"=="--help" goto show_help

echo [ERROR] Unknown option: %~1
echo.
goto show_help

:show_help
echo.
echo Usage: %~nx0 [options]
echo.
echo   -b ^<dir^>     Build directory (default: build-vs2022-tools)
echo   -c ^<config^>  Build configuration: Release or Debug (default: Release)
echo   --build      Build all tool executables after generating the solution
echo   --open       Open the generated solution in Visual Studio
echo   --clean      Delete the build directory before generating the solution
echo   -h, --help   Show this help message
echo.
exit /b 1

:args_done
if /I not "%BUILD_CONFIG%"=="Release" if /I not "%BUILD_CONFIG%"=="Debug" (
    echo [ERROR] Invalid build configuration: %BUILD_CONFIG%
    echo         Supported values: Release, Debug
    exit /b 1
)

if not exist "%SOURCE_DIR%\CMakeLists.txt" (
    echo [ERROR] CMakeLists.txt not found in: %SOURCE_DIR%
    exit /b 1
)

echo ============================================================
echo  TarsCpp VS2022 Tools Project Generator
echo ============================================================
echo  Source : %SOURCE_DIR%
echo  Build  : %BUILD_DIR%
echo  Config : %BUILD_CONFIG%
echo ============================================================
echo.

call :find_cmake
if errorlevel 1 exit /b 1

call :setup_vs2022
if errorlevel 1 exit /b 1

if "%DO_CLEAN%"=="1" (
    if exist "%BUILD_DIR%" (
        echo [INFO] Cleaning build directory: %BUILD_DIR%
        rmdir /s /q "%BUILD_DIR%"
    )
)

if not exist "%BUILD_DIR%" (
    mkdir "%BUILD_DIR%"
    if errorlevel 1 (
        echo [ERROR] Failed to create build directory: %BUILD_DIR%
        exit /b 1
    )
)

call :init_submodules
if errorlevel 1 exit /b 1

echo [INFO] Generating Visual Studio 2022 solution...
echo.

pushd "%BUILD_DIR%"
"%CMAKE_EXE%" "%SOURCE_DIR%" ^
    -G "Visual Studio 17 2022" ^
    -A x64 ^
    -T v143,host=x64 ^
    -DCMAKE_GENERATOR_INSTANCE="%VS_INSTALL_PATH%" ^
    -DCMAKE_BUILD_TYPE=%BUILD_CONFIG% ^
    -DONLY_LIB=ON ^
    -DTARS_MYSQL=OFF ^
    -DTARS_SSL=OFF ^
    -DTARS_HTTP2=OFF ^
    -DTARS_PROTOBUF=OFF ^
    -DENABLE_SHARED=OFF ^
    -DCMAKE_INSTALL_PREFIX=c:/tars/cpp

set "CMAKE_RESULT=%ERRORLEVEL%"
popd

if not "%CMAKE_RESULT%"=="0" (
    echo.
    echo [ERROR] CMake configuration failed.
    echo.
    echo Common causes:
    echo   1. Git submodule servant/protocol is missing
    echo   2. Windows 10/11 SDK is not installed
    echo   3. Stale CMake cache from a previous failed run
    echo.
    echo Try:
    echo   git submodule update --init --recursive
    echo   cmake_tools_vs2022.bat --clean
    exit /b 1
)

set "SOLUTION_FILE=%BUILD_DIR%\tars-cpp.sln"
if not exist "%SOLUTION_FILE%" (
    echo [ERROR] Solution file not found: %SOLUTION_FILE%
    exit /b 1
)

echo.
echo [OK] Solution generated: %SOLUTION_FILE%
echo.
echo Tool targets in this solution:
echo   tars2cpp, tars2c, tars2cs, tars2oc, tars2php, tars2python
echo   tars2android, tars2node, tars2case, tarsmerge
echo.
echo Output directory after build:
echo   %BUILD_DIR%\bin\%BUILD_CONFIG%
echo.

if "%DO_BUILD%"=="1" (
    call :build_tools
    if errorlevel 1 exit /b 1
)

if "%DO_OPEN%"=="1" (
    echo [INFO] Opening solution in Visual Studio...
    start "" "%SOLUTION_FILE%"
)

echo [DONE]
exit /b 0

REM ---------------------------------------------------------------------------
:init_submodules
if exist "%SOURCE_DIR%\servant\protocol\servant\" exit /b 0

echo [INFO] Missing submodule: servant/protocol (TarsProtocol)
where git >nul 2>&1
if errorlevel 1 goto submodule_no_git

pushd "%SOURCE_DIR%"
git submodule update --init --recursive
set "SUBMODULE_RESULT=%ERRORLEVEL%"
popd

if not "%SUBMODULE_RESULT%"=="0" goto submodule_failed
if exist "%SOURCE_DIR%\servant\protocol\servant\" (
    echo [OK] Submodule initialized: servant/protocol
    exit /b 0
)
goto submodule_failed

:submodule_no_git
echo.
echo [ERROR] Git is not installed or not in PATH.
echo         TarsCpp requires the servant/protocol submodule from TarsProtocol.
echo.
echo Please install Git, then run:
echo   git submodule update --init --recursive
echo.
exit /b 1

:submodule_failed
echo.
echo [ERROR] Failed to initialize submodule: servant/protocol
echo.
echo Please run manually in the repository root:
echo   git submodule update --init --recursive
echo.
echo Or clone with submodules:
echo   git clone https://github.com/TarsCloud/TarsCpp.git --recursive
echo.
exit /b 1

REM ---------------------------------------------------------------------------
:find_cmake
set "CMAKE_EXE="

where cmake >nul 2>&1
if not errorlevel 1 (
    for /f "delims=" %%I in ('where cmake 2^>nul') do (
        set "CMAKE_EXE=%%I"
        goto cmake_found
    )
)

for %%P in (
    "%ProgramFiles%\CMake\bin\cmake.exe"
    "%ProgramFiles(x86)%\CMake\bin\cmake.exe"
    "%ProgramFiles%\Microsoft Visual Studio\2022\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"
    "%ProgramFiles%\Microsoft Visual Studio\2022\Professional\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"
    "%ProgramFiles%\Microsoft Visual Studio\2022\Enterprise\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"
) do (
    if exist %%~P (
        set "CMAKE_EXE=%%~P"
        goto cmake_found
    )
)

echo [ERROR] CMake not found.
echo         Please install CMake 3.16+ and add it to PATH, or install the
echo         "C++ CMake tools for Windows" component in Visual Studio 2022.
exit /b 1

:cmake_found
echo [INFO] Using CMake: %CMAKE_EXE%
exit /b 0

REM ---------------------------------------------------------------------------
:setup_vs2022
set "VSWHERE=%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe"
set "VS_INSTALL_PATH="

if exist "%VSWHERE%" (
    for /f "usebackq delims=" %%I in (`"%VSWHERE%" -latest -products * -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath 2^>nul`) do (
        set "VS_INSTALL_PATH=%%I"
    )
)

if not defined VS_INSTALL_PATH (
    for %%E in (Enterprise Professional Community BuildTools) do (
        if exist "%ProgramFiles%\Microsoft Visual Studio\2022\%%E\Common7\Tools\VsDevCmd.bat" (
            set "VS_INSTALL_PATH=%ProgramFiles%\Microsoft Visual Studio\2022\%%E"
            goto vs_found
        )
    )
)

:vs_found
if not defined VS_INSTALL_PATH (
    echo [ERROR] Visual Studio 2022 with C++ tools not found.
    echo         Please install Visual Studio 2022 and the "Desktop development with C++" workload.
    exit /b 1
)

set "VSDEVCMD=%VS_INSTALL_PATH%\Common7\Tools\VsDevCmd.bat"
if not exist "%VSDEVCMD%" (
    echo [ERROR] VsDevCmd.bat not found: %VSDEVCMD%
    exit /b 1
)

echo [INFO] Using Visual Studio: %VS_INSTALL_PATH%
call "%VSDEVCMD%" -no_logo -arch=amd64 -host_arch=amd64
if errorlevel 1 (
    echo [ERROR] Failed to initialize Visual Studio build environment.
    exit /b 1
)

call :check_windows_sdk
if errorlevel 1 exit /b 1

call :check_msvc_compiler
if errorlevel 1 exit /b 1

exit /b 0

REM ---------------------------------------------------------------------------
:check_windows_sdk
set "PF86=%ProgramFiles(x86)%"
set "WINDOWS_KITS_ROOT=%PF86%\Windows Kits\10"
if exist "%WINDOWS_KITS_ROOT%\Lib\" goto sdk_dir_ok

echo.
echo [ERROR] Windows 10/11 SDK not found.
echo         Expected directory: %WINDOWS_KITS_ROOT%\Lib
echo.
echo Please open "Visual Studio Installer", modify VS2022, and install:
echo   - Desktop development with C++
echo   - Windows 10 SDK (10.0.19041.0 or later) or Windows 11 SDK
echo.
exit /b 1

:sdk_dir_ok
if not "%WindowsSDKDir%"=="" goto sdk_env_ok

echo.
echo [ERROR] WindowsSDKDir is not set after initializing Visual Studio environment.
echo         MSVC is installed, but the Windows SDK environment is incomplete.
echo.
echo Please reinstall or repair the Windows SDK component in Visual Studio Installer.
echo.
exit /b 1

:sdk_env_ok
set "KERNEL32_FOUND=0"
for /f "delims=" %%V in ('dir /b /ad "%WINDOWS_KITS_ROOT%\Lib" 2^>nul') do call :check_kernel32_version "%%V"
if "%KERNEL32_FOUND%"=="1" goto sdk_kernel32_ok
goto sdk_lib_missing

:check_kernel32_version
if exist "%WINDOWS_KITS_ROOT%\Lib\%~1\um\x64\kernel32.lib" set "KERNEL32_FOUND=1"
if exist "%WINDOWS_KITS_ROOT%\Lib\%~1\um\x64\kernel32.Lib" set "KERNEL32_FOUND=1"
exit /b 0

:sdk_kernel32_ok
echo [INFO] Windows SDK: %WindowsSDKDir%
exit /b 0

:sdk_lib_missing
echo.
echo [ERROR] kernel32.lib not found under Windows SDK lib directory.
echo         WindowsSDKDir=%WindowsSDKDir%
echo         SDK root : %WINDOWS_KITS_ROOT%
echo.
echo Please repair the Windows SDK in Visual Studio Installer and ensure
echo "Windows SDK for Desktop C++ x64" is selected.
echo.
exit /b 1

REM ---------------------------------------------------------------------------
:check_msvc_compiler
where /q cl.exe
if errorlevel 1 goto msvc_missing

for /f "delims=" %%I in ('where cl.exe 2^>nul') do (
    echo [INFO] MSVC compiler: %%I
    exit /b 0
)
exit /b 0

:msvc_missing
echo.
echo [ERROR] MSVC compiler (cl.exe) not found in PATH.
echo         Please install the "MSVC v143" toolset in Visual Studio Installer.
echo.
exit /b 1

REM ---------------------------------------------------------------------------
:build_tools
echo [INFO] Building tool executables (%BUILD_CONFIG%)...

set "TOOL_TARGETS=tars2cpp tars2c tars2cs tars2oc tars2php tars2python tars2android tars2node tars2case tarsmerge"

pushd "%BUILD_DIR%"
for %%T in (%TOOL_TARGETS%) do (
    echo.
    echo [BUILD] %%T
    "%CMAKE_EXE%" --build . --config %BUILD_CONFIG% --target %%T -- /m
    if errorlevel 1 (
        popd
        echo.
        echo [ERROR] Failed to build target: %%T
        exit /b 1
    )
)
popd

echo.
echo [OK] All tool executables built successfully.
echo      Output: %BUILD_DIR%\bin\%BUILD_CONFIG%
exit /b 0
