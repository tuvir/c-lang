#include <stdio.h>
int multiplication(int num1, int num2){
    int result = num1 * num2;
    // printf("%i * %i = %i\n", num1, num2, result);
    return result;
}
int main (void){
    int a, b;
    printf("Enter 2 integers: ");
    scanf("%i %i", &a, &b);
    int mult = multiplication(a, b);
    printf("%i * %i = %i\n", a, b, mult);
    
    return 0;
}