#include <stdio.h>
#include <math.h>

int main (void){
    int number;
    printf("Input a number: ");
    scanf("%i", &number);
    double root = sqrt(number);
    printf("Square root of %i is %.2lf\n", number, root);
    double power = pow(number, root);
    printf("Result %.2lf\n", power);

    return 0;
}