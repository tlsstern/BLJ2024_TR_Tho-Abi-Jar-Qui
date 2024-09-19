//
// Created by jderooij on 19.09.2024.
//
#include <stdio.h>

void Area();
void circle();
void rectangle();

  int Area();

int geometry() {
  int fchoicegeo;
  printf("What do you want to do?\n");
  printf("1. Area\t\t2. Volume\n");
  scanf("d", &fchoicegeo);
  if (fchoicegeo == 1) {
    Area();
  }else if (fchoicegeo == 2) {
    Volume();
  } else if (fchoicegeo != 1 || fchoicegeo != 2) {
    printf("Wrong entry\n");
  }
}

    void area(){
    int schoicegeo;
    printf("What Area do you want to calculate?\n");
    scanf("%d", &schoicegeo);
<<<<<<< HEAD
    switch (schoicegeo) {
      case 1: void circle();
        break;
      case 2: void square();
        break;
      case 3: void rectangle();
        break;
      case 4: triangle();
        break;
      case 5: trapezoid();
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
    printf("Enter square size");
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
  printf("Enter ground lenght");
  scanf("%f", &ground);
  printf("Enter height");
  scanf("%f", &height);
  float result = ground * height / 2;
  printf("The area is %f\n", result);
}
void trapezoid() {
  float lenghtOne;
  float lenghtTwo;
  float height;
  printf("Enter ground lenght");
  scanf("%f", &lenghtOne);
  printf("Enter top lenght");
  scanf("%f", &lenghtTwo);
  printf("Enter height");
  scanf("%f", &height);
  float result = height / 2 * (lenghtOne + lenghtTwo);

}

=======
    switch

    */