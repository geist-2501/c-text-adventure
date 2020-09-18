cmake_minimum_required(VERSION 3.16)
project(text_adventure C)

set(CMAKE_C_STANDARD 99)

add_executable(main.c ../include/parsexec.h parsexec.c location.c ../include/location.h object.c ../include/object.h noun.c ../include/noun.h misc.c ../include/misc.h inventory.c ../include/inventory.h move.c ../include/move.h)