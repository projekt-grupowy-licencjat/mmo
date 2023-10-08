cmake_minimum_required(VERSION 3.25)
project(mmo)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(SFML
        GIT_REPOSITORY https://github.com/SFML/SFML.git
        GIT_TAG 2.6.x)
FetchContent_MakeAvailable(SFML)

SET(BASEPATH "${CMAKE_SOURCE_DIR}")
INCLUDE_DIRECTORIES("${BASEPATH}")

add_executable(mmo game/main.cpp engine/object/object.h engine/render/renderer.h engine/scene/scene.h engine/object/object.cpp engine/scene/scene.cpp engine/render/renderer.cpp
        engine/object/properties/properties.h
        engine/object/animation/animation-state.h
        engine/object/util.h
        engine/object/errors/texture.h
        engine/physics/physics.h
        engine/events/control/controllable.h

)

target_link_libraries(mmo PRIVATE sfml-graphics)
target_compile_features(mmo PRIVATE cxx_std_17)

if(WIN32)
    add_custom_command(
            TARGET mmo
            COMMENT "Copy OpenAL DLL"
            PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${SFML_SOURCE_DIR}/extlibs/bin/$<IF:$<EQUAL:${CMAKE_SIZEOF_VOID_P},8>,x64,x86>/openal32.dll $<TARGET_FILE_DIR:mmo>
            VERBATIM)
endif()

install(TARGETS mmo)