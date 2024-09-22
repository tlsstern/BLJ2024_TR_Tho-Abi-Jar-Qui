//
// Created by jderooij on 20.09.2024.
//

#include "chaincalculator.h"
#include <string.h>
#include <stdio.h>

void chaincalculator() {
    char input[25];
    int i = 0;
    printf("Enter calculations (enter 'n' to calculate)\n");

    while (1) {
        fgets(input, sizeof(input), stdin);

        if (input[0] == 'n' && strlen(input) == 2) {
            break;
        }
        i++;
    }
        if (i >= 25) {
            printf("Max limit reached\n");
        }
}

