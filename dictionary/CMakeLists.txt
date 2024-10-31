cmake_minimum_required(VERSION 3.29)
project(ds_hashmap C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(ds_hashmap
        hashmap.c
        hashmap.h
        list.c
        list.h
        main.c)
