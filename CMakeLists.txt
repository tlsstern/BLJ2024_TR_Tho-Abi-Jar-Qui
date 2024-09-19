cmake_minimum_required(VERSION 3.29)
project(Taschenrechner_in_C C)

set(CMAKE_C_STANDARD 11)

add_executable(Taschenrechner_in_C main.c
        Pflichtfeatures.c
        Pflichtfeatures.h
        summieren.c
        summieren.h
        Subtrahieren.c
        Subtrahieren.h
        dividieren.c
        dividieren.h
        multiplizeren.c
        multiplizeren.h
        summieren.c
        summieren.h
        exponenten.c
        exponenten.h
        Wurzeln.c
        Wurzeln.h
        fakulität.c
        fakulität.h
)
