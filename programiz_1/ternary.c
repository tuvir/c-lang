// ternary operator structure
// ! (condition) ? action if condition = true : action if condition = false;
// ternary operator can and should be used istead of singular if... else construct

#include <stdio.h>

int main (void){
    // int age;
    // printf("Enter your age: ");
    // scanf("%i", &age);
    // (age >= 18) ? printf("You can vote") : printf("You cannot vote");

    int num;
    printf("Enter a number: ");
    scanf("%i", &num);
    int num2;
    num2 = num % 2;
    printf("%i\n", num2);
    (num2 == 0) ? printf("The number is whole\n") : printf("The number is odd\n");
    //int num = 1;
    //printf("%i", num % 2);
    // int num;
    // printf("Enter a number: ");
    // scanf("%i", &num);
    // int num2;
    // num2 = num % 2;
    // if (num2 == 0)
    // {
        // printf("Whole\n");
    // }
    // else
    // {
        // printf("Odd\n");
    // }
    

    return 0;
}