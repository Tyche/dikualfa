#! /bin/bash
echo  Make sure cmake, gcc and make are installed
cmake -E make_directory build 
cmake -E chdir build cmake -G"Unix Makefiles" -DCMAKE_VERBOSE_MAKEFILE=1 .. 
cmake -E chdir build make
cmake -E chdir build cpack -G ZIP --config CPackSourceConfig.cmake
echo CMakeUnix: Results available in 'build' folder
