cmake_minimum_required(VERSION 3.24)
project(Dispersion_Cerrada C)

set(CMAKE_C_STANDARD 11)

add_executable(Dispersion_Cerrada main.c "hash cerrado.h" "hash cerrado.c")
