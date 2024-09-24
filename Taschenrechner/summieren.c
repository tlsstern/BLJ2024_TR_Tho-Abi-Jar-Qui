#include "summieren.h"
#include <stdio.h>

int summieren() {
    int sum;
    int num;
    char answer;

    printf("Press 's' to stop\n");
    do {
        printf("Please enter a number:\n");
        if (scanf("%d", &num) != 1) {
            scanf(" %c", &answer);
            if (answer == 's' || answer == 'S') {
                break;
            } else {
                printf("Invalid input. Please enter an integer or 's' to stop.\n");
                while (getchar() != '\n');
                continue;
            }
        }

        sum += num;
    } while (1);

    printf("The sum of the numbers entered is: %d\n", sum);
    return 0;
}