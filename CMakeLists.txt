cmake_minimum_required(VERSION 3.16)
project(text_adventure C)

set(CMAKE_C_STANDARD 99)

add_executable(text_adventure main.c parsexec.h parsexec.c location.c location.h object.c object.h noun.c noun.h misc.c misc.h inventory.c inventory.h move.c move.h)