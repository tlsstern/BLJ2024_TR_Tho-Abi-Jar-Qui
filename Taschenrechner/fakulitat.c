//
// Created by Work on 19/09/2024.
//
#include "fakulitat.h"
#include <stdio.h>

void calculate_factorial() {
    int number;
    unsigned long long result = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial can only be calculated for positive integers. Please try again and enter a positive number.\n");
    } else {
        for (int i = 1; i <= number; i++) {
            result *= i;
        }
        printf("%d! = %llu\n", number, result);
    }
}
