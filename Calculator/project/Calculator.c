#include "stdio.h"

void Calculator(int x, int y, char operation, int result) {
    //Asking for numbers and operation
    printf("Enter the first number :");
    scanf("%d", &x);
    printf("Enter the second number :");
    scanf("%d", &y);
    printf("Enter the operation( + - / *) :");
    scanf("%s", &operation);
    //checking the operation
    switch (operation) {
        case '+':
            result = x + y;
            printf("%d", result);
            break;
        case '-':
            result = x - y;
            printf("%d", result);
            break;
        case '/':
            result = x / y;
            printf("%d", result);
            break;
        default:
            printf("operation is invalid!");
            scanf("%s", &operation);
    }

}

void CalculatorExe() {
    //define of variables
    int x = 0;
    int y = 0;
    int operation;
    int result;
    Calculator(x, y, operation, result);
}