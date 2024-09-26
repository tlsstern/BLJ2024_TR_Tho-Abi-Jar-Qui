#include "wurzeln.h"
#include <stdio.h>

double sqrt_custom(double number);
void calculate_square_root() {
    double number;
    printf("Enter number:\n");
    scanf("%lf", &number);

    double result = sqrt_custom(number);
    printf("The root of %.2lf = %.2lf\n", number, result);
}

double sqrt_custom(double number) {
    double guess = 1.0;
    double step = 0.1;
    double epsilon = 0.01;

    while (guess * guess < number) {
        guess += step;
    }

    while ((guess * guess - number > epsilon) || (number - guess * guess > epsilon)) {
        guess -= step;
        step /= 10;
    }

    return guess;
}
