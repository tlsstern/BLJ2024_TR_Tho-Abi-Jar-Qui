#include "multiplizeren.h"
#include <stdio.h>

int multiplaction() {
    int sum = 1;
    int num;
    char answer;

    printf("Press 'n' to stop\n");
    do {
        printf("Please enter a number:\n");
        if (scanf("%d", &num) != 1) {
            scanf(" %c", &answer);
            if (answer == 'n' || answer == 'N') {
                break;
            } else {
                printf("Invalid input. Please enter an number or 'n' to stop.\n");
                while (getchar() != '\n') {}
                continue;
            }
        }

        sum = sum * num;
    } while (1);

    printf("The Multiplication of the numbers is: %d\n", sum);
    return 0;
}