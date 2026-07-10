@echo off
setlocal
cd /d "%~dp0"
set "NODE_EXE=C:\Users\???\.cache\codex-runtimes\codex-primary-runtime\dependencies\node\bin\node.exe"
if exist "%NODE_EXE%" (
  "%NODE_EXE%" "%~dp0tools\build-solutions-data.js"
) else (
  node "%~dp0tools\build-solutions-data.js"
)
pause
