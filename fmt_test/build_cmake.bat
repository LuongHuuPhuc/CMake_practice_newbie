@echo off
REM Thiet lap trinh bien dich dung MSYS2 ucrt64 
set CC="C:/msys64/ucrt64/bin/gcc.exe"
set CXX="C:/msys64/ucrt64/bin/g++.exe"

REM Tao thu muc build neu chua co 
if not exist build mkdir build 
cd build 

REM Goi Cmake de generate project voi Makefiles 
cmake .. -G "MinGW Makefiles"

REM Neu ban muon tu dong build luon 
@REM ming32-make 