#include <stdio.h>
#include "choice.h"
#include "chaincalculator.h"
#include "dividieren.h"
#include "Geometrie.h"
#include "summieren.h"
#include "Subtrahieren.h"
#include "multiplizeren.h"
#include "rockpaperscissor.h"
#include "fakulitat.h"
#include "wurzeln.h"
#include "exponenten.h"
#include "lifescience.h"
#include "linearfunctions.h"

int choice() {
    int choice;

    printf("CALCULATOR\n");
    printf("What do you want to do? (input Number)\n");
    printf("1. Addition\t\t2. Subtraction\t\t3. Division\n");
    printf("4. Multiplication\t5. Exponential\t\t6. Root\n");
    printf("7. Factorial\t\t8. Geometry\t\t9. Chain calculation\n");
    printf("10. Linear Functions\t11. Life Science\t12. Rock Paper Scissor\n");

    if (scanf("%d", &choice) != 1 || choice < 1 || choice > 12) {
        printf("Invalid input. Please enter a number between 1 and 12.\n");
    }

    switch (choice) {
        case 1:
            summieren();
            break;
        case 2:
            subtrahieren();
            break;
        case 3:
            dividieren();
            break;
        case 4:
            multiplaction();
            break;
        case 5:
            exponent();
            break;
        case 6:
            calculate_square_root();
            break;
        case 7:
            calculate_factorial();
            break;
        case 8:
            geometry();
            break;
        case 9:
            chaincalculator();
            break;
        case 10:
            linearfunctions();
            break;
        case 11:
            lifescience();
            break;
        case 12:
            rockpaperscissor();
            break;

        default:
            printf("Wrong choice, please choose a number between 1 - 12\n");
    }

    return 0;
}
