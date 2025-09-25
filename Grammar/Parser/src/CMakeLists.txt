cmake_minimum_required(VERSION 3.14)
project(LengkuasGrammar CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Specify build in a separate build directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Configure ANTLR4 runtime
add_subdirectory(antlr4-cpp-runtime)

# Create the Fern grammar library
add_library(LengkuasGrammar STATIC
        src/LengkuasSFLLexer.cpp
        src/LengkuasSFLParser.cpp
        src/LengkuasSFLBaseListener.cpp
        src/LengkuasSFLListener.cpp
)

# Set include directories
target_include_directories(FernGrammar
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        ${CMAKE_CURRENT_SOURCE_DIR}/antlr4-cpp-runtime/runtime/src
)

# Link against ANTLR4 static library
target_link_libraries(LengkuasGrammar
        PRIVATE
        antlr4_static
)

# Set compiler flags for MinGW
if(MINGW)
    target_compile_definitions(LengkuasGrammar
            PRIVATE
            ANTLR4CPP_STATIC
    )

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
        src/LengkuasDemoParser.cpp
)

target_link_libraries(LengkuasDemoParser
        PRIVATE
        LengkuasGrammar
        antlr4_static
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
