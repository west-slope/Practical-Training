@echo off
setlocal
cd /d "%~dp0"
where pwsh >nul 2>nul
if %errorlevel%==0 (
  pwsh -NoProfile -ExecutionPolicy Bypass -File "%~dp0tools\import-contest-362.ps1"
) else (
  powershell -NoProfile -ExecutionPolicy Bypass -File "%~dp0tools\import-contest-362.ps1"
)
pause
