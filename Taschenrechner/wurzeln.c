//
// Created by Work on 19/09/2024.
//

#include "wurzeln.h"
#include <stdio.h>

double sqrt_custom(double number);

void calculate_square_root() {
    double number;

    printf("Enter number:\n");
    scanf("%lf", &number);

    if (number < 0) {
        printf("                             =_-___\n");
        printf("                           o    \\__ \\\n");
        printf("                          o       __| \\\n");
        printf("                           o      \\__  \\\n");
        printf("                             oooo    \\  \\\n");
        printf("                                      \\  \\\n");
        printf("        __________________             |   \\\n");
        printf("       |__________________|             \\   |\n");
        printf("        \\/\\/\\/\\/\\/\\/\\/\\/\\/     _----_    |   |\n");
        printf("         \\/\\/\\/\\/\\/\\/\\/\\/     |      \\   |   |\n");
        printf("          \\/\\/\\/\\/\\/\\/\\/      |       |    |  |\n");
        printf("           |/\\/\\/\\/\\/\\/|        |       \\__/    |\n");
        printf("           |/\\/\\/\\/\\/\\/|         __---          |\n");
        printf("           |/\\/\\/\\/\\/\\/|       /   \\            |\n");
        printf("                             |     |          |\n");
        printf("                             |   /            |\n");
        printf("                             |   \\            |\n");
        printf("    Try again!               |   | \\          |\n");
        printf("                             |   |   \\____-----\\\n");
        printf("                             |   |    \\____-----\n");
        printf("                              |  |    |          \\\n");
        printf("                              |  |   |             \\\n");
        printf("                               \\  \\_|_      |       |\n");
        printf("                                \\____/  ___/ \\_____/\n");
        printf("                                   /    /       \\     \\\n");
        printf("                                 /     /          \\     \\\n");
        printf("                                /    /              \\    \\\n");
        printf("                              /    /                  \\    \\\n");
        printf("                             /   /                      \\   \\\n");
        printf("                       /\\   /  /                          \\  |\n");
        printf("                      |  \\/ \\/                              \\/ \\\n");
        printf("                       \\    |                             __/   |\n");
        printf("                         \\_/                            /______/\n");
        printf("Square root can only be calculated for positive numbers. Please enter a positive number.\n");
    } else {

        double result = sqrt_custom(number);
        printf("Square root of %.2lf = %.2lf\n", number, result);
    }
}

double sqrt_custom(double number) {
    double guess = number / 2;
    double epsilon = 0.001;

    while (guess * guess - number > epsilon || number - guess * guess > epsilon) {
        guess = (guess + number / guess) / 2;
    }
    return guess;
}