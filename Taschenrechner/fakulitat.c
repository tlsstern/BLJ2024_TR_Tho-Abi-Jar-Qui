//
// Created by Work on 19/09/2024.
//
#include "fakulitat.h"
#include <stdio.h>

void calculate_factorial() {
    int number;

    start:
    printf("Enter a number:\n");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input, try again\n");
        fflush(stdin);
        goto start;
    }

    if (number < 0) {
        printf("+---------------------------+\n");
        printf("| ///////////////////////// |\n");
        printf("+---------------------------+\n");
        printf("| [Enter a positive number] |\n");
        printf("+---------------------------+\n");
        printf("|                           |\n");
        printf("|                           |\n");
        printf("| [sto] [rcl] [&lt] [AC/ON] |\n");
        printf("|                           |\n");
        printf("| [ ( ] [ ) ] [sqr] [  /  ] |\n");
        printf("|                           |\n");
        printf("| [ 7 ] [ 8 ] [ 9 ] [  *  ] |\n");
        printf("|                           |\n");
        printf("| [ 4 ] [ 5 ] [ 6 ] [  -  ] |\n");
        printf("|                           |\n");
        printf("| [ 1 ] [ 2 ] [ 3 ] [  +  ] |\n");
        printf("|                           |\n");
        printf("| [ 0 ] [ . ] [+/-] [  =  ] |\n");
        printf("|                           |\n");
        printf("+---------------------------+\n");
        printf("The factorial can only be calculated for positive integers. Please try again and enter a positive number.\n");
    } else {
        unsigned long long result = 1;
        for (int i = 1; i <= number; i++) {
            result *= i;
        }
        printf("%d! = %llu\n", number, result);
    }
}
