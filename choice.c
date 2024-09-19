#include <stdio.h>
#include "choice.h"
#include "Geometrie.h"
#include "summieren.h"

int choice() {
    int choice;

    printf("CALCULATOR\n");
    printf("What do you want to do? (input Number)\n");
    printf("1. Addition\t\t2. Subtraction\t\t3. Division\n");
    printf("4. Multiplication\t5. Exponential\t\t6. Root\n");
    printf("7. Factoral\t\t8.Geometry\n");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid input. Please enter a number.\n");
        while (getchar() != '\n');
        return 1;
    }

    switch (choice) {
        case 1:
            summieren();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        default:
            printf("Wrong choice, please choose a number between 1 - 8\n");
    }

    return 0;
}