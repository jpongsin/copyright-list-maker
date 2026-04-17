cmake_minimum_required(VERSION 4.2)
project(CopyrightRenewalListCreator)

set(CMAKE_CXX_STANDARD 20)

add_executable(CopyrightRenewalListCreator
        src/main.cpp
        src/movieInfo.cpp
        src/compoundInfo.cpp
        include/compoundInfo.h
        include/movieInfo.h)
