cmake_minimum_required(VERSION 3.16)
project(text_adventure C)

set(CMAKE_C_STANDARD 99)

add_executable(text_adventure src/main.c include/parsexec.h src/parsexec.c src/location.c include/location.h src/object.c include/object.h src/noun.c include/noun.h src/misc.c include/misc.h src/inventory.c include/inventory.h src/move.c include/move.h)