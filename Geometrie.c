//
// Created by jderooij on 19.09.2024.
//
#include <stdio.h>

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
  scanf("d", &choice);
  if (choice == 1) {
    Area();
  }else if (choice == 2) {
    Volume();
  } else if (choice != 1 || choice != 2) {
    printf("Wrong entry\n");
  }
}
void Area(){
    int choice;
    printf("What Area do you want to calculate?\n");
    scanf("%d", &choice);

  switch (choice) {
    case 1: void circle();
        break;
    case 2: void square();
        break;
    case 3: void rectangle();
        break;
    case 4: void triangle();
      break;
    case 5: void trapezoid();
      break;
  }
}

void circle(){
    float pi = 3.14159;
    float radius;
    printf("Enter radius");
    scanf("%f", &radius);
    float result = pi * radius * radius;
    printf("The area is %f\n", result);
}
void square() {
    float lenght;
    printf("Enter site length");
    scanf("%f", &lenght);
    float result = lenght * lenght;
    printf("The area is %3f\n", result);
}
void rectangle() {
    float lenghtOne;
    float lenghtTwo;
    printf("Enter length of one Site");
    scanf("%f", &lenghtOne);
    printf("Enter length of second Site");
    scanf("%f", &lenghtTwo);
    float result = lenghtOne * lenghtTwo;
    printf("The area is %3f\n", result);
}
void triangle() {
    float ground;
    float height;
    printf("Enter ground length");
    scanf("%f", &ground);
    printf("Enter height");
    scanf("%f", &height);
    float result = ground * height / 2;
    printf("The area is %3f\n", result);
}
void trapezoid() {
    float lenghtOne;
    float lenghtTwo;
    float height;
    printf("Enter ground length");
    scanf("%f", &lenghtOne);
    printf("Enter top length");
    scanf("%f", &lenghtTwo);
    printf("Enter height");
    scanf("%f", &height);
    float result = height / 2 * (lenghtOne + lenghtTwo);
    printf("The area is %3f\n", result);
}

void Volume() {
  int choice;
  printf("What Volume do you want to calculate?\n");
  scanf("%d", &choice);

  switch (choice) {
    case 1: void ball();
        break;
    case 2: void cube();
        break;
    case 3: void cuboid();
        break;
    case 4: void cylinder();
        break;
    case 5: void cone();
        break;
  }
}

void ball() {
    float pi = 3.14159;
    float radius;
    printf("Enter radius");
    scanf("%f", &radius);
    float result = 4/3 * (radius * radius * radius) * pi;
    printf("The volume is %3f\n", result);
}
void cube() {
    float length;
    printf("Enter site length");
    scanf("%f", &length);
    float result = length * length * length;
    printf("The area is %3f\n", result);
}
void cuboid() {
    float lengthOne;
    float lengthTwo;
    float lenghtThree;
    printf("Enter length of one Site");
    scanf("%f", &lengthOne);
    printf("Enter length of second Site");
    scanf("%f", &lengthTwo);
    printf("Enter length of third Site");
    scanf("%f", &lenghtThree);
    float result = lengthOne * lengthTwo * lenghtThree;
    printf("The volume is %3f\n", result);
}
void cylinder() {
    float pi = 3.14159;
    float radius;
    float height;
    printf("Enter radius");
    scanf("%f", &radius);
    printf("Enter height");
    scanf("%f", &height);
    float result = pi * radius * radius * height;
    printf("The volume is %3f\n", result);
}
void cone() {
    float pi = 3.14159;
    float radius;
    float height;
    printf("Enter radius");
    scanf("%f", &radius);
    printf("Enter height");
    scanf("%f", &height);
    float result = 1/3 * pi * radius * radius * height;
    printf("The volume is %3f\n", result);
}
