cmake_minimum_required(VERSION 3.26)
project(lua_hash_code)

set(CMAKE_CXX_STANDARD 11)
include_directories(/usr/local/openresty/luajit/include/luajit-2.1)
add_executable(hash_code main.cpp
        l_hash_code.cpp
        src/hash_code.cpp
        src/hash_code.h
)
