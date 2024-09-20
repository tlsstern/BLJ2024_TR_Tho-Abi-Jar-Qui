//
// Created by Work on 19/09/2024.
//

#include "exponenten.h"
#include <stdio.h>

double exponentiation(double base, int exponent);

void exponent() {
    double base;
    int exponent;
        printf("Enter base:\n");
        scanf("%lf", &base);
        printf("Enter exponent:\n");
        scanf("%d", &exponent);
    double result = exponentiation(base, exponent);
        printf("%.2lf^%d = %.2lf\n", base, exponent, result);
}

double exponentiation(double base, int exponent) {
    double result = 1.0;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}