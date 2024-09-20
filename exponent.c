//
// Created by Work on 19/09/2024.
#include "exponenten.h"
#include <stdio.h>

double exponentiation(double base, int exponent) {
    double result = 1.0;

    //Multiplication
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    double base;
    int exponent;

    //Basis and exponent
    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    //output
    double result = exponentiation(base, exponent);
    printf("%.2lf^%d = %.2lf\n", base, exponent, result);


    return 0;
}
