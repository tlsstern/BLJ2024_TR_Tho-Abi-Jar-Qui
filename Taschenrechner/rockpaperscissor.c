#include "rockpaperscissor.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int rockpaperscissor() {
    srand(time(NULL));
    bool playAgain = true;

    while (playAgain) {
        int computerChoice = rand() % 3;
        char userChoice;
        // Banner ???
        printf("  _  __    ____  ____  _ ____    ____  __     __   _  _  _   \n");
        printf(" / \\(  )  (  __)(_  _)(// ___)  (  _ \\(  )   / _\\ ( \\/ )/ \\  \n");
        printf(" \\_// (_/\\ ) _)   )(    \\___ \\   ) __// (_/\\/    \\ )  / \\_/  \n");
        printf(" (_)/____/(____) (__)   (____/  (__)  \\____/\\_/\\_/(__/  (_)  \n\n\n");

        do {
            printf("[r] Rock, [p] Paper, [s] Scissor?\n");
            scanf(" %c", &userChoice);
        } while (userChoice != 'r' && userChoice != 'p' && userChoice != 's');

        printf("Computer chose: ");
        switch (computerChoice) {
            case 0: printf("Rock\n"); break;
            case 1: printf("Paper\n"); break;
            case 2: printf("Scissors\n"); break;
        }

        if (userChoice == 'r') {
            if (computerChoice == 1) {
                printf("Computer wins! Paper covers Rock.\n");
            } else if (computerChoice == 2) {
                printf("You win! Rock crushes Scissors.\n");
            } else {
                printf("It's a tie!\n");
            }
        } else if (userChoice == 'p') {
            if (computerChoice == 0) {
                printf("You win! Paper covers Rock.\n");
            } else if (computerChoice == 2) {
                printf("Computer wins! Scissors cut Paper.\n");
            } else {
                printf("It's a tie!\n");
            }
        } else {
            if (computerChoice == 0) {
                printf("Computer wins! Rock crushes Scissors.\n");
            } else if (computerChoice == 1) {
                printf("You win! Scissors cut Paper.\n");
            } else {
                printf("It's a tie!\n");
            }
        }

        do {
            printf("Play again? y/n:\n");
            scanf(" %c", &userChoice);
        } while (userChoice != 'y' && userChoice != 'n');

        playAgain = (userChoice == 'y');
    }

    return 0;
}
