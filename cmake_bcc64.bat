REM Make sure cmake.exe, bcc64.exe and ninja.exe are in the Path
@echo off
cmake -E make_directory build_bcc64
cd build_bcc64
cmake -DCMAKE_CXX_COMPILER="bcc64.exe" -DCMAKE_C_COMPILER="bcc64.exe" -DCMAKE_VERBOSE_MAKEFILE=1 -G"Ninja" ..
ninja
d:\apps\CMake\bin\cpack -G ZIP --config CPackSourceConfig.cmake
cd ..
echo CMakeBCC64: Results available in 'build' folder