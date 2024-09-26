//
// Created by jderooij on 19.09.2024.
//
#include <stdio.h>
#include "geometrie.h"

void geometry() {
    int choice;
    start:
    printf("What do you want to do?\n");
    printf("1. Area\t\t2. Volume\n");
    scanf("%d", &choice);
    if (choice == 1) {
        Area();
    } else if (choice == 2) {
        Volume();
    } else if (choice != 1 && choice != 2) {
        printf("Wrong entry\n");
        fflush(stdin);
        goto start;
    }
}

void Area() {
    int choice;
    start_choice:
    printf("What Area do you want to calculate?\n");
    printf("1. circle\t\t2. square\t\t3. rectangle\n");
    printf("4. triangle\t\t5. trapezoid\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1: circle();
            break;
        case 2: square();
            break;
        case 3: rectangle();
            break;
        case 4: triangle();
            break;
        case 5: trapezoid();
            break;
        default: printf("Wrong entry\n");
        fflush(stdin);
        goto start_choice;
    }
}

void circle() {
    float pi = 3.14159;
    float radius;
    circles:
    printf("Enter radius in cm\n");
    if (scanf("%f", &radius) != 1) {
        printf("Wrong entry\n");
        fflush(stdin);
        goto circles;
    }
    float result = pi * radius * radius;
    printf("The area is %.2f\n", result);
}

void square() {
    float length;
    square:
    printf("Enter site length in cm\n");
    if (scanf("%f", &length) != 1) {
        printf("Wrong entry\n");
        fflush(stdin);
        goto square;
    }
    float result = length * length;
    printf("The area is %.2f\n", result);
}

void rectangle() {
    float lengthOne;
    float lengthTwo;
    rectangle1:
    printf("Enter length of one Site in cm\n");
    if (scanf("%f", &lengthOne) != 1 ) {
        printf("Wrong entry\n");
        fflush(stdin);
        goto rectangle1;
    }
    printf("Enter length of second Site in cm\n");
    rectangle2:
    if (scanf("%f", &lengthTwo) != 1) {
        printf("Wrong entry\n");
        fflush(stdin);
        goto rectangle2;
    }
    float result = lengthOne * lengthTwo;
    printf("The area is %.2f\n", result);
}

void triangle() {
    float ground;
    float height;
    triangle1:
    printf("Enter ground length in cm\n");
    if (scanf("%f", &ground) != 1) {
        printf("Wrong entry\n");
        fflush(stdin);
        goto triangle1;
    }
    tringle2:
    printf("Enter height in cm\n");
    if(scanf("%f", &height) != 1) {
        printf("Wrong entry\n");
        fflush(stdin);
        goto tringle2;
    }
    float result = ground * height / 2;
    printf("The area is %.2f\n", result);
}

void trapezoid() {
    float lengthOne;
    float lengthTwo;
    float height;
    trapezoid1:
    printf("Enter ground length in cm\n");
    if (scanf("%f", &lengthOne) != 1) {
        printf("Wrong entry\n");
        fflush(stdin);
        goto trapezoid1;
    }
    trapezoid2:
    printf("Enter top length in cm\n");
    if (scanf("%f", &lengthTwo) != 1) {
        printf("Wrong entry\n");
        fflush(stdin);
        goto trapezoid2;
    }
    trapezoid3:
    printf("Enter height in cm\n");
    if (scanf("%f", &height) != 1) {
        printf("Wrong entry\n");
        fflush(stdin);
        goto trapezoid3;
    }
    float result = height / 2 * (lengthOne + lengthTwo);
    printf("The area is %.2f\n", result);
}

void Volume() {
    int choice;
    volume:
    printf("What Volume do you want to calculate?\n");
    printf("1. ball\t\t2. cube\t\t3. cuboid\n");
    printf("4. cylinder\t5. cone\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1: ball();
            break;
        case 2: cube();
            break;
        case 3: cuboid();
            break;
        case 4: cylinder();
            break;
        case 5: cone();
            break;
        default: printf("Wrong entry\n");
        fflush(stdin);
        goto volume;
    }
}

void ball() {
    float pi = 3.14159;
    float radius;
    raduis_vol:
    printf("Enter radius in cm\n");
    if (scanf("%f", &radius) != 1) {
        printf("Wrong entry\n");
        fflush(stdin);
        goto raduis_vol;
    }
    float result = 4.0 / 3 * (radius * radius * radius) * pi;
    printf("The volume is %.2f\n", result);
}

void cube() {
    float length;
    cube:
    printf("Enter site length in cm\n");
    if (scanf("%f", &length) != 1) {
        printf("Wrong entry\n");
        fflush(stdin);
        goto cube;
    }
    float result = length * length * length;
    printf("The volume is %.2f\n", result);
}

void cuboid() {
    float lengthOne;
    float lengthTwo;
    float lengthThree;
    cuboid_vol1:
    printf("Enter length of one Site in cm\n");
    if (scanf("%f", &lengthOne) != 1) {
        printf("Wrong entry\n");
        fflush(stdin);
        goto cuboid_vol1;
    }
    cuboid_vol2:
    printf("Enter length of second Site in cm\n");
    if (scanf("%f", &lengthTwo) != 1) {
        printf("Wrong entry\n");
        fflush(stdin);
        goto cuboid_vol2;
    }
    cuboid_vol3:
    printf("Enter length of third Site in cm\n");
    if (scanf("%f", &lengthThree) != 1) {
        printf("Wrong entry\n");
        fflush(stdin);
        goto cuboid_vol3;
    }
    float result = lengthOne * lengthTwo * lengthThree;
    printf("The volume is %.2f\n", result);
}

void cylinder() {
    float pi = 3.14159;
    float radius;
    float height;
    cylinder_vol1:
    printf("Enter radius in cm\n");
    if (scanf("%f", &radius) != 1) {
        printf("Wrong entry\n");
        fflush(stdin);
        goto cylinder_vol1;
    }
    cylinder_vol2:
    printf("Enter height in cm\n");
    if (scanf("%f", &height) != 1) {
        printf("Wrong entry\n");
        fflush(stdin);
        goto cylinder_vol2;
    }
    float result = pi * radius * radius * height;
    printf("The volume is %.2f\n", result);
}

void cone() {
    float pi = 3.14159;
    float radius;
    float height;
    cone_vol1:
    printf("Enter radius in cm\n");
    if (scanf("%f", &radius) != 1) {
        printf("Wrong entry\n");
        fflush(stdin);
        goto cone_vol1;
    }
    cone_vol2:
    printf("Enter height in cm\n");
    if (scanf("%f", &height) != 1) {
        printf("Wrong entry\n");
        fflush(stdin);
        goto cone_vol2;
    }
    float result = 1.0 / 3 * pi * radius * radius * height;
    printf("The volume is %.2f\n", result);
}
