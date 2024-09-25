#include "dividieren.h"
#include <stdio.h>

int dividieren() {
    float sum = 0.0000;
    int num;
    char answer;

    printf("Press 's' to stop\n");
    first:
    printf("Please enter your first number\n");
    if (scanf("%f", &sum) != 1) {
        printf("Invalid character\n");
        fflush(stdin);
        goto first;
    }
    do {
        printf("Please enter a number:\n");
        if (scanf("%d", &num) != 1) {
            scanf(" %c", &answer);
            if (answer == 's' || answer == 'S') {
                break;
            } else {
                printf("Invalid input. Please enter an number or 's' to stop.\n");
                while (getchar() != '\n') {
                    continue;
                }
            }
        }

        sum = sum / num;
    } while (1);

    printf("The sum of the numbers entered is: %.4lf\n", sum);
    return 0;
}