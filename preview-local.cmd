@echo off
setlocal
cd /d "%~dp0"
set "PYTHON_EXE=C:\Users\???\.cache\codex-runtimes\codex-primary-runtime\dependencies\python\python.exe"
set "PORT=8765"
start "" "http://127.0.0.1:%PORT%/"
if exist "%PYTHON_EXE%" (
  "%PYTHON_EXE%" -m http.server %PORT% --bind 127.0.0.1
) else (
  python -m http.server %PORT% --bind 127.0.0.1
)
pause
