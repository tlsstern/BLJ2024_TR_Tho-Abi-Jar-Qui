//
// Created by jderooij on 20.09.2024.
//
#include "rockpaperscissor.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>


int rockpaperscissor(){
    srand(time(NULL));
    bool play_choice = true;
    int random = rand() % 3 + 1;
    char comp;
    char user;
    int choice = 0;

    if (random == 1) {
        comp = "r";
    }if (random == 2) {
        comp = "p";
    }if (random == 3) {
        comp = "s";
    }


    printf("  _  __    ____  ____  _ ____    ____  __     __   _  _  _   \n");
    printf(" / \\(  )  (  __)(_  _)(// ___)  (  _ \\(  )   / _\\ ( \\/ )/ \\  \n");
    printf(" \\_// (_/\\ ) _)   )(    \\___ \\   ) __// (_/\\/    \\ )  / \\_/  \n");
    printf(" (_)/____/(____) (__)   (____/  (__)  \\____/\\_/\\_/(__/  (_)  \n\n\n");

    while (play_choice) {

        printf("[r] Rock, [p] Paper, [s] Scissor?\n");
        scanf("%c", &user);

        if (user == 'r') {
            if (comp == 2) {
                printf("Computer won with Paper!");
            }if (comp == 3) {
                printf("You won!");
            }
        }
        if (user == 'p') {
            if (comp == 1) {
                printf("You won!");
            }if (comp == 3) {
                printf("computer won with Sci");
            }











        do {
            printf(" Try again? [1 YES/2 NO]: ");
            scanf("%d", &choice);
            if (choice == 1) {
                play_choice = true;
            }
            if (choice != 1 && choice != 2) {
                printf("Please enter 1 for YES and 2 for NO\n");
            }
        } while (choice != 1 && choice != 2);
            if (choice == 2) {
                play_choice = false;
        }
    }
    return 0;
}

}