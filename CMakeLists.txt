cmake_minimum_required(VERSION 3.29)
project(Taschenrechner_in_C C)

set(CMAKE_C_STANDARD 11)

add_executable(Taschenrechner_in_C main.c
        Pflichtfeatures.c
        Pflichtfeatures.h
        choice.c
        choice.h)
