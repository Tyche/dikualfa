REM Make sure cmake.exe, cl.exe, link.exe and nmake.exe are in the Path
@echo off
mkdir build_vc64
cd build_vc64
cmake -DCMAKE_CXX_COMPILER="cl.exe" -DCMAKE_C_COMPILER="cl.exe" -DCMAKE_VERBOSE_MAKEFILE=1 -G"NMake Makefiles" ..
nmake
d:\apps\CMake\bin\cpack -G ZIP --config CPackSourceConfig.cmake
cd ..
echo CMakeBCC64: Results available in 'build' folder