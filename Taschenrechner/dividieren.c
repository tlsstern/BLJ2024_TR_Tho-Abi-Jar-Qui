#include "dividieren.h"
#include <stdio.h>

int dividieren() {
    float sum = 0.0000;
    int num;
    char answer;

    printf("Press 's' to stop\n");
    printf("Please enter your first number\n");
    scanf("%d", &sum);
    do {
        printf("Please enter a number:\n");
        if (scanf("%d", &num) != 1) {
            scanf(" %c", &answer);
            if (answer == 's' || answer == 'S') {
                break;
            } else {
                printf("Invalid input. Please enter an number or 's' to stop.\n");
                while (getchar() != '\n');
                continue;
            }
        }

        sum = sum / num;
    } while (1);

    printf("The sum of the numbers entered is: %d\n", sum);
    return 0;
}