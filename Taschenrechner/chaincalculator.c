//
// Created by jderooij on 20.09.2024.
//

#include "chaincalculator.h"

#include <stdio.h>

void chaincalculator() {
    char input[25];
    int i;

    do {
        for (i = 0; i<=25; i++) {
            printf("Enter calculation (enter n to calculate)\n");
            scanf("%c", &input[i]);
        }  }while (input[i] != 'n');

}


