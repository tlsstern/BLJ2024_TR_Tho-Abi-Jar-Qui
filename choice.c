#include <stdio.h>
#include "choice.h"
#include "Geometrie.h"

int choice() {
    printf("CALCULATOR\n");
    printf("What do you want to do? (input Number)\n");
    printf("1. Addition\t\t2. Subtraction\t\t3. Division\n");
    printf("4. Multiplication\t5. Exponential\t\t6. Root\n");
    printf("7. Factoral\t\t8.Geometry");
    scanf("c", &choice);
    switch (choice)
        case '1':
          
        break;
        case '2': break;
        case '3': break;
        case '4': break;
        case '5': break;
        case '6': break;
        case '7': break;
        case '8': geometry(); break;

        return 0;
}
