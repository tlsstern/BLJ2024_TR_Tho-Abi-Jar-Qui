//
// Created by Work on 19/09/2024.
//
#include "Wurzeln.h"
#include <stdio.h>

double sqrt_custom(double number) {
    double guess = number / 2.0;
    double epsilon = 0.00001;

    //Repeat until it is accurate
    while (guess * guess - number > epsilon || number - guess * guess > epsilon) {
        guess = (guess + number / guess) / 2.0;
    }

    return guess;
}

int main() {
    double number;

    printf("Enter number:");
    scanf("%lf", &number);

    //Check number-> negative
    if (number < 0) {
        printf("Square root can only be calculated for positive numbers. Enter a positive number.\n");
    } else {

        //Calculation and output
        double result = sqrt_custom(number);
        printf("Square root of %.2lf = %.2lf\n", number, result);
    }

    return 0;
}
