#include <stdio.h>
#include <stdlib.h>
typedef struct Complex
{
    double real;
    double imagin;
}complex;

int main (void){
    complex num1 = {.real = 15.02, .imagin = 1.2};
    complex num2 = {.real = 68.1, .imagin = 9.62};
    complex num3 = {.real = 1.43, .imagin = 18.54};
    complex sum;
    sum.real = num1.real + num2.real + num3.real;
    sum.imagin = num1.imagin + num2.imagin + num2.imagin;
    printf("Sum of real: %lf\nSum of imaginary: %lf\n", sum.real, sum.imagin);


    return 0;
}