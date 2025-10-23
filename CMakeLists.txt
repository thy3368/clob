cmake_minimum_required(VERSION 4.0)
project(clob)

set(CMAKE_CXX_STANDARD 20)

add_executable(clob main.cpp
        src/lib/domain/Order.cpp
        src/lib/domain/Order.h
        src/lib/domain/Header.cpp
        src/lib/domain/Header.h
        src/lib/domain/repo/IHeaderRepo.h
        src/lib/outbound/HeaderDbRepo.cpp
        src/lib/outbound/HeaderDbRepo.h
)
