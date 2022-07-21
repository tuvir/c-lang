#include <stdio.h>

int main (){
    int a, b, res, quot;
    printf("Enter 2 integers: ");
    scanf("%i %i", &a, &b);
    res = a % b;
    quot = a / b;
    printf("Remainder of %i / %i = %i\n", a, b, res); 
    printf("Quotient of %i / %i = %i\n", a, b, quot);
    
    return 0;
}