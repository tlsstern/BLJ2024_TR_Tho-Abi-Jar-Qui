//
// Created by jderooij on 25.09.2024.
//

#include "linearfunctions.h"
#include <stdio.h>

void linearfunctions() {
    int y;
    int m;
    int xValues[] = {0, 1, 2, 3, 4, 5};
        printf("Gib y (b) ein:\n");
        scanf("%d",&y);
        printf("Gib die Steigung (m) ein:\n");
        scanf("%d",&m);
    printf("| x | y |\n");
    printf("| %d | %d |\n", xValues[0], xValues[0]*m + y);
    printf("| %d | %d |\n", xValues[1], xValues[1]*m + y);
    printf("| %d | %d |\n", xValues[2], xValues[2]*m + y);
    printf("| %d | %d |\n", xValues[3], xValues[3]*m + y);
    printf("| %d | %d |\n", xValues[4], xValues[4]*m + y);
    printf("| %d | %d |\n", xValues[5], xValues[5]*m + y);

}

