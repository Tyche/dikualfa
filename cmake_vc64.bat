REM Make sure cmake.exe, cl.exe, link.exe and nmake.exe are in the Path
@echo off
cmake -E make_directory build 
cmake -E chdir build cmake -DCMAKE_CXX_COMPILER="cl.exe" -DCMAKE_C_COMPILER="cl.exe" -DCMAKE_VERBOSE_MAKEFILE=1 -G"NMake Makefiles" ..
cmake -E chdir build nmake
cmake -E chdir build cpack -G ZIP --config CPackSourceConfig.cmake
echo CMakeVC64: Results available in 'build' folder