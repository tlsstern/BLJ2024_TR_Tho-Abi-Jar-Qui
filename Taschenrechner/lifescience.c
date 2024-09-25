//
// Created by jderooij on 20.09.2024.
//
#include "lifescience.h"
#include <stdio.h>
void BMI();
void Alcohol();
void calculateSleepTime();
void caloricNeed();

void lifeScience() {
    int choice;
    printf("What do you want to calculate?\n");
    printf("1. BMI\t\t\t2. Blood Alcohol\n");
    printf("3. Optimal Bedtime\t4. Calorie Needs\n");
    scanf("%d", &choice);
    if (choice == 1) {
        BMI();
    }else if (choice == 2) {
        Alcohol();
    }else if (choice == 3) {
        calculateSleepTime();
    }else if (choice == 4) {
        caloricNeed();
    }else if (choice == 5) {
        printf("Wrong entry");
    }
}

void BMI() {
    float height;
    float weight;
    printf("How tall are you in cm?\n");
    scanf("%f", &height);
    printf("How much do you weigh in kg?\n");
    scanf("%f", &weight);
    float bmi = weight / ((height / 100) * (height / 100));
    printf("Your BMI is: %.1f\n", bmi);
}

void Alcohol() {
    float alcohol;
    float weight;
    int gender;
    printf("How much do you weight in kg?\n");
    scanf("%f", &weight);
    printf("How much alcohol did you consume in g?\n");
    scanf("%f", &alcohol);
    printf("Are you [1] male or [2] female?\n");
    scanf("%d", &gender);
    if (gender == 1) {
        float result = alcohol / (weight * 0.7);
        printf("Your alcohol is: %.1f\n", result);

    }else if (gender == 2) {
        float result = alcohol / (weight * 0.6);
        printf("Your alcohol is: %.1f\n", result);
    }
}


void calculateSleepTime() {
    int wakeHours, wakeMinutes, duration;

    printf("When do you have to get up? (HH MM):");
    scanf("%d %d", &wakeHours, &wakeMinutes);

    printf("How long do you want to sleep in minutes?");
    scanf("%d", &duration);

    int sleepHours = wakeHours - (duration / 60);
    int sleepMinutes = wakeMinutes - (duration % 60);

    if (sleepMinutes < 0) {
        sleepMinutes += 60;
        sleepHours--;
    }

    if (sleepHours < 0) {
        sleepHours += 24;
    }

    printf("You should go to sleep at: %02d:%02d \n", sleepHours, sleepMinutes);
}

    double calculateCaloricNeed(double weight, double height, int age, char gender);
    double weight, height;
    int age;
    char gender;

    void caloricNeed() {
        printf("Please enter your weight in kg:");
        scanf("%lf", &weight);

        printf("Please enter your height in cm:");
        scanf("%lf", &height);

        printf("Please enter your age in years:");
        scanf("%d", &age);

        printf("Please enter your gender (m/f):");
        scanf(" %c", &gender);



        if (gender == 'm' || gender == 'M') {
            float result = 88.362 + (13.397 * weight) + (4.799 * height) - (5.677 * age);
            printf("Your Calorie Need is: %.1f\n", result);
        }else if(gender == 'f' || gender == 'F') {
            float result = 447.593 + (9.247 * weight) + (3.098 * height) - (4.330 * age);
            printf("Your Calorie Needs is: %.1f\n", result);
        } else{
            printf("Please enter again. Invalid input for gender.\n");
        }
    }