//
// Created by jderooij on 19.09.2024.
//
#include <stdio.h>
#include "geometrie.h"

void Area();
void circle();
void square();
void rectangle();
void triangle();
void trapezoid();
void Volume();
void ball();
void cube();
void cuboid();
void cylinder();
void cone();


void geometry() {
  int choice;
  printf("What do you want to do?\n");
  printf("1. Area\t\t2. Volume\n");
  scanf("%d", &choice);
  if (choice == 1) {
    Area();
  }else if (choice == 2) {
    Volume();
  } else if (choice != 1 && choice != 2) {
    printf("Wrong entry\n");
  }
}
void Area(){
    int choice;
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
  }
}

void circle(){
    float pi = 3.14159;
    float radius;
    printf("Enter radius in cm\n");
    scanf("%f", &radius);
    float result = pi * radius * radius;
    printf("The area is %.2f\n", result);
}
void square() {
    float length;
    printf("Enter site length in cm\n");
    scanf("%f", &length);
    float result = length * length;
    printf("The area is %.2f\n", result);
}
void rectangle() {
    float lengthOne;
    float lengthTwo;
    printf("Enter length of one Site in cm\n");
    scanf("%f", &lengthOne);
    printf("Enter length of second Site in cm\n");
    scanf("%f", &lengthTwo);
    float result = lengthOne * lengthTwo;
    printf("The area is %.2f\n", result);
}
void triangle() {
    float ground;
    float height;
    printf("Enter ground length in cm\n");
    scanf("%f", &ground);
    printf("Enter height in cm\n");
    scanf("%f", &height);
    float result = ground * height / 2;
    printf("The area is %.2f\n", result);
}
void trapezoid() {
    float lengthOne;
    float lengthTwo;
    float height;
    printf("Enter ground length in cm\n");
    scanf("%f", &lengthOne);
    printf("Enter top length in cm\n");
    scanf("%f", &lengthTwo);
    printf("Enter height in cm\n");
    scanf("%f", &height);
    float result = height / 2 * (lengthOne + lengthTwo);
    printf("The area is %.2f\n", result);
}
void Volume() {
  int choice;
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
  }
}
void ball() {
    float pi = 3.14159;
    float radius;
    printf("Enter radius in cm\n");
    scanf("%f", &radius);
    float result = 4.0/3 * (radius * radius * radius) * pi;
    printf("The volume is %.2f\n", result);
}
void cube() {
    float length;
    printf("Enter site length in cm\n");
    scanf("%f", &length);
    float result = length * length * length;
    printf("The volume is %.2f\n", result);
}
void cuboid() {
    float lengthOne;
    float lengthTwo;
    float lengthThree;
    printf("Enter length of one Site in cm\n");
    scanf("%f", &lengthOne);
    printf("Enter length of second Site in cm\n");
    scanf("%f", &lengthTwo);
    printf("Enter length of third Site in cm\n");
    scanf("%f", &lengthThree);
    float result = lengthOne * lengthTwo * lengthThree;
    printf("The volume is %.2f\n", result);
}
void cylinder() {
    float pi = 3.14159;
    float radius;
    float height;
    printf("Enter radius in cm\n");
    scanf("%f", &radius);
    printf("Enter height in cm\n");
    scanf("%f", &height);
    float result = pi * radius * radius * height;
    printf("The volume is %.2f\n", result);
}
void cone() {
    float pi = 3.14159;
    float radius;
    float height;
    printf("Enter radius in cm\n");
    scanf("%f", &radius);
    printf("Enter height in cm\n");
    scanf("%f", &height);
    float result = 1.0/3 * pi * radius * radius * height;
    printf("The volume is %.2f\n", result);
}
