#include <stdio.h>

int factorial(int number);
int main (void){
    int limit, result;
    printf("Enter a number: ");
    scanf("%i", &limit);
    result = factorial(limit);
    printf("Factorial of %i = %i", limit, result);

    return 0;
}
int factorial(int number){
    if (number != 0)
    {
        printf("%d ", number);
        return number * factorial(number - 1);
    }
    else
    {
        return number + 1;
    }
    
}