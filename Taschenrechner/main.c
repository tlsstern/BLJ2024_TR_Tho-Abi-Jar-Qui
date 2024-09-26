#include <stdio.h>
#include "choice.h"

int main(void) {
    int play_again;
    do {
        choice();
        printf("Do you want to calculate again?\n 1 = yes | 2 = no \n");
        while (1) {
            if (scanf("%d", &play_again) != 1) {
                printf("Please enter a number 1 or 2\n");
                while (getchar() != '\n');
            } else {
                if (play_again == 1 || play_again == 2) {
                    break;
                } else {
                    printf("Please enter a number 1 or 2\n");
                }
            }
        }
    } while (play_again == 1);
    printf("Thank you for calculating!\n");
}
