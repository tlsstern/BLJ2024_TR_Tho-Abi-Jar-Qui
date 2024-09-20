#include "multiplizeren.h"
#include <stdio.h>

int multiplaction() {
    long long sum = 1;
    int num;
    char answer;

    printf("Press 'S' to stop\n");
    do {
        printf("Please enter a number:\n");
        if (scanf("%d", &num) != 1) {
            scanf(" %c", &answer);
            if (answer == 's' || answer == 'S') {
                break;
            } else {
                printf("Invalid input. Please enter an integer or 's' to stop.\n");
                while (getchar() != '\n') {}
                continue;
            }
        }

        sum = sum * num;
    } while (1);

    printf("The Multiplication of the numbers is: %lld\n", sum);
    return 0;
}