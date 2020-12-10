REM Make sure cmake.exe, bcc64.exe and ninja.exe are in the Path
@echo off
cmake -E make_directory build 
cmake -E chdir build cmake -DCMAKE_CXX_COMPILER="bcc64.exe" -DCMAKE_C_COMPILER="bcc64.exe" -DCMAKE_VERBOSE_MAKEFILE=1 -G"Ninja" ..
cmake -E chdir build ninja
cmake -E chdir build cpack -G ZIP --config CPackSourceConfig.cmake
echo CMakeBCC64: Results available in 'build' folder