//
// Created by Work on 19/09/2024.
//

#include "summieren.h"
#include <stdio.h>

int summieren() {
    int sum = 0;
    int num;
    char answer;

    do {
        printf("Please enter a number:\n");
        if (scanf("%d", &num) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            while (getchar() != '\n');
            continue;
        }

        sum += num;

        printf("Do you want to enter another number? (y/n):\n");
        scanf(" %c", &answer);
    } while (answer == 'y' || answer == 'Y');

    printf("The sum of the numbers entered is: %d\n", sum);
    return 0;
}