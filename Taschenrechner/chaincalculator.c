#include "chaincalculator.h"
#include <stdio.h>
/* #include <stdlib.h>
#include <ctype.h>
#include <string.h> */

#define MAX_EXPR_LEN 256

void chaincalculator() {
    printf("work in progress \n");
}

/*int precedence(char operator) {
    if (operator == '+' || operator == '-') return 1;
    if (operator == '*' || operator == '/') return 2;
    return 0;
}


int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}


void infixToPostfix(char* infix, char* postfix) {
    char stack[MAX_EXPR_LEN];
    int stackTop = -1, j = 0;

    for (int i = 0; infix[i] != '\0'; i++) {
        char token = infix[i];


        if (isspace(token)) continue;


        if (isdigit(token) || token == '.') {
            while (isdigit(infix[i]) || infix[i] == '.') {
                postfix[j++] = infix[i++];
            }
            postfix[j++] = ' ';
            i--;
        }

        else if (token == '(') {
            stack[++stackTop] = token;
        }

        else if (token == ')') {
            while (stackTop >= 0 && stack[stackTop] != '(') {
                postfix[j++] = stack[stackTop--];
                postfix[j++] = ' ';
            }
            stackTop--;
        }

        else if (isOperator(token)) {
            while (stackTop >= 0 && precedence(stack[stackTop]) >= precedence(token)) {
                postfix[j++] = stack[stackTop--];
                postfix[j++] = ' ';
            }
            stack[++stackTop] = token;
        }
    }


    while (stackTop >= 0) {
        postfix[j++] = stack[stackTop--];
        postfix[j++] = ' ';
    }
    postfix[j] = '\0';
}


float evaluatePostfix(char* postfix) {
    float stack[MAX_EXPR_LEN];
    int stackTop = -1;
    float num;

    for (int i = 0; postfix[i] != '\0'; i++) {
        char token = postfix[i];


        if (isspace(token)) continue;


        if (isdigit(token) || (token == '.' && isdigit(postfix[i + 1]))) {
            sscanf(&postfix[i], "%f", &num);
            stack[++stackTop] = num;

            while (isdigit(postfix[i]) || postfix[i] == '.') i++;
        }

        else if (isOperator(token)) {
            float b = stack[stackTop--];
            float a = stack[stackTop--];
            switch (token) {
                case '+': stack[++stackTop] = a + b; break;
                case '-': stack[++stackTop] = a - b; break;
                case '*': stack[++stackTop] = a * b; break;
                case '/':
                    if (b != 0) stack[++stackTop] = a / b;
                    else printf("Error: Division by zero.\n");
                    break;
            }
        }
    }
    return stack[stackTop];
}

void chaincalculator() {
    char infix[MAX_EXPR_LEN], postfix[MAX_EXPR_LEN];

    printf("Enter an expression (with parentheses): ");
    fgets(&infix,sizeof(infix),stdin);


    evaluatePostfix(postfix);
    float result = evaluatePostfix(postfix);

    printf("Result: %.2f\n", result);

}
*/