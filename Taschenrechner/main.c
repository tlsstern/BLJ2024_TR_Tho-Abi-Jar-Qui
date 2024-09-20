#include <stdio.h>
#include "choice.h"

int main(void) {
    int play_again;
    do {
        choice();
        printf("Do you want to play again? 1 = yes | 2  = no \n");
        scanf("%d", &play_again);
    } while (play_again == 1);
    printf("Thank you for playing\n");
    return 0;
}
