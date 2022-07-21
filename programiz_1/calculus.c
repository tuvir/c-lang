#include <stdio.h>

int main (void){
    char operator;
    printf("Enter an operator [ + ; - ; * ; / ]: ");
    scanf("%c", &operator);
    double num1, num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    double result;

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("The answer is: %.2lf\n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("The answer is: %.2lf\n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("The answer is: %.2lf\n", result);
        break;
    case '/':
        result = num1 / num2;
        printf("The answer is: %.2lf\n", result);
        break;
    // case '%':
        // result = num1 % num2;
        // printf("The answer is: %.2lf\n", result);
        // break;
    default:
        printf("Wrong operator!");
        break;
    }
    return 0;
}