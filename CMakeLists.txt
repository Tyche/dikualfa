cmake_minimum_required(VERSION 3.5)

# set the project name and version
project(dikualfa VERSION 1.0)

set(src_server
    comm.c
    act.comm.c
    act.informative.c
    act.movement.c
    act.obj1.c
    act.obj2.c
    act.offensive.c
    act.other.c
    act.social.c
    act.wizard.c
    handler.c
    db.c
    interpreter.c
    utility.c
    spec_assign.c
    shop.c
    limits.c
    mobact.c
    fight.c
    modify.c
    weather.c
    spells1.c
    spells2.c
    spell_parser.c
    reception.c
    constants.c
    spec_procs.c
    signals.c
    board.c
    mar_fiz_maz.c
    magic.c
    changes.c
    os.c
   )


if(WIN32)
  if(MSVC)
    add_compile_options(/DWIN32_LEAN_AND_MEAN /W1 /D_CONSOLE /D_MBCS /D_CRT_SECURE_NO_DEPRECATE /D_CRT_NONSTDC_NO_DEPRECATE)
  else()
    add_compile_options(-DWIN32 -DWIN32_LEAN_AND_MEAN -Wno-parentheses -Wno-visibility)
  endif()  
endif()
if(UNIX)
  add_compile_options(-Wall -Wno-parentheses -Wno-unused)
endif()

# include_directories(${PROJECT_SOURCE_DIR})
# add the executables
add_executable(dmserver ${src_server})
add_executable(list list.c)
add_executable(delplay delplay.c)
add_executable(insert_any insert_any.c os.c)
add_executable(repairgo repairgo.c)
add_executable(sign sign.c os.c)
add_executable(update update.c)
add_executable(syntax_checker syntax_checker.c os.c)

if(UNIX)
  target_link_libraries(dmserver PUBLIC crypt)
endif()
if(MSVC)
  target_link_libraries(dmserver PUBLIC ws2_32)
  target_link_libraries(sign PUBLIC ws2_32)
endif()

install(TARGETS dmserver list delplay insert_any repairgo sign update syntax_checker DESTINATION bin)

include(InstallRequiredSystemLibraries)
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/doc/license.doc")
set(CPACK_SOURCE_IGNORE_FILES "build*;/\.git*/")
set(CPACK_PACKAGE_VERSION_MAJOR "${dikualfa_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${dikualfa_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "0")
include(CPack)