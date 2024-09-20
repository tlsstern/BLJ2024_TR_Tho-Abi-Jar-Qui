cmake_minimum_required(VERSION 3.29)
project(Taschenrechner C)

set(CMAKE_C_STANDARD 11)

add_executable(Taschenrechner main.c
        choice.c
        choice.h
        wurzeln.c
        wurzeln.h
        summieren.c
        summieren.h
        subtrahieren.c
        subtrahieren.h
        dividieren.c
        dividieren.h
        exponenten.c
        exponenten.h
        fakulitat.c
        fakulitat.h
        geometrie.c
        geometrie.h
        multiplizeren.c
        multiplizeren.h)
