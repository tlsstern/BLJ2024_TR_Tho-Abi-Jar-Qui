#include <stdio.h>

//Calculating positiv numbers
unsigned long long factorial(int n) {
    unsigned long long result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;

    printf("Enter a number:");
    scanf("%d", &number);

//Check numbers -> negative
    if (number < 0) {
        printf("Factorial can only be calculated for positive integers. Please try again and enter in the following a positive number.\n");
    } else {

//Output
        unsigned long long result = factorial(number);
        printf("%d! = %llu\n", number, result);
    }
    return 0;
}
