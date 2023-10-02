cmake_minimum_required(VERSION 3.25)
project(mmo)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
include(FetchContent)
FetchContent_Declare(SFML
        GIT_REPOSITORY https://github.com/SFML/SFML.git
        GIT_TAG 2.6.x)
FetchContent_MakeAvailable(SFML)

set(CMAKE_CXX_STANDARD 20)

add_executable(mmo game/main.cpp)

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