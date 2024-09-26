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
        printf("The root can't be calculated from a negative number. Please try it again with a positive number.\n");
    } else {
        double result = sqrt_custom(number);
        printf("The root of %.2lf = %.2lf\n", number, result);
    }
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
