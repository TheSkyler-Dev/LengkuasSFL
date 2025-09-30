cmake_minimum_required(VERSION 3.14)
project(LengkuasGrammar CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Specify build in a separate build directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Configure ANTLR4 runtime using FetchContent
include(FetchContent)

# Fetch ANTLR4 C++ runtime
FetchContent_Declare(
    antlr4-cpp-runtime
    GIT_REPOSITORY https://github.com/antlr/antlr4.git
    GIT_TAG 4.13.1
)

# Download and make available
FetchContent_MakeAvailable(antlr4-cpp-runtime)

# Patch ANTLR4 ProfilingATNSimulator.cpp to add missing chrono include
set(PROFILING_FILE "${antlr4-cpp-runtime_SOURCE_DIR}/runtime/Cpp/runtime/src/atn/ProfilingATNSimulator.cpp")
if(EXISTS "${PROFILING_FILE}")
    file(READ "${PROFILING_FILE}" PROFILING_CONTENT)
    string(FIND "${PROFILING_CONTENT}" "#include <chrono>" CHRONO_FOUND)
    if(CHRONO_FOUND EQUAL -1)
        string(REPLACE "#include \"atn/ProfilingATNSimulator.h\"" "#include <chrono>\n#include \"atn/ProfilingATNSimulator.h\"" PATCHED_CONTENT "${PROFILING_CONTENT}")
        file(WRITE "${PROFILING_FILE}" "${PATCHED_CONTENT}")
        message(STATUS "Patched ProfilingATNSimulator.cpp to add chrono include")
    endif()
endif()

# Build ANTLR4 sources directly in our target
file(GLOB ANTLR4_SOURCES
    "${antlr4-cpp-runtime_SOURCE_DIR}/runtime/Cpp/runtime/src/*.cpp"
    "${antlr4-cpp-runtime_SOURCE_DIR}/runtime/Cpp/runtime/src/atn/*.cpp"
    "${antlr4-cpp-runtime_SOURCE_DIR}/runtime/Cpp/runtime/src/dfa/*.cpp"
    "${antlr4-cpp-runtime_SOURCE_DIR}/runtime/Cpp/runtime/src/internal/*.cpp"
    "${antlr4-cpp-runtime_SOURCE_DIR}/runtime/Cpp/runtime/src/misc/*.cpp"
    "${antlr4-cpp-runtime_SOURCE_DIR}/runtime/Cpp/runtime/src/support/*.cpp"
    "${antlr4-cpp-runtime_SOURCE_DIR}/runtime/Cpp/runtime/src/tree/*.cpp"
    "${antlr4-cpp-runtime_SOURCE_DIR}/runtime/Cpp/runtime/src/tree/pattern/*.cpp"
    "${antlr4-cpp-runtime_SOURCE_DIR}/runtime/Cpp/runtime/src/tree/xpath/*.cpp"
)

# Create the Lengkuas grammar library including ANTLR4 sources
add_library(LengkuasGrammar STATIC
        LengkuasSFLLexer.cpp
        LengkuasSFLParser.cpp
        LengkuasSFLBaseListener.cpp
        LengkuasSFLListener.cpp
        ${ANTLR4_SOURCES}
)

# Set include directories
target_include_directories(LengkuasGrammar
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${antlr4-cpp-runtime_SOURCE_DIR}/runtime/Cpp/runtime/src
)

# Define ANTLR4CPP_STATIC
target_compile_definitions(LengkuasGrammar
        PUBLIC
        ANTLR4CPP_STATIC
)

# Add threading support if needed
if (CMAKE_HOST_UNIX)
    find_package(Threads REQUIRED)
    target_link_libraries(LengkuasGrammar PRIVATE Threads::Threads)
endif()

# Set compiler flags for MinGW
if(MINGW)
    target_compile_options(LengkuasGrammar
            PRIVATE
            -Wall
            -Wextra
            -pedantic
            -Wno-unknown-pragmas
    )
endif()

# Create a simple test executable that demonstrates usage of the parser
add_executable(LengkuasDemoParser
        LengkuasDemoParser.cpp
)

target_link_libraries(LengkuasDemoParser
        PRIVATE
        LengkuasGrammar
)

# Install rules if needed
install(TARGETS LengkuasGrammar
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        RUNTIME DESTINATION bin
)

install(TARGETS LengkuasDemoParser
        RUNTIME DESTINATION bin
)
