echo off
setlocal

set CC="C:/msys64/ucrt64/bin/gcc.exe"
set CXX="C:/msys64/ucrt64/bin/g++.exe"

if not exist build mkdir build
cd build

cmake .. -G "MinGW Makefiles"

endlocal