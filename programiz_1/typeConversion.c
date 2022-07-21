// ! Data types of variables will be converted into data type of the variable, that is higher
/* 
Type conversion works accordingly the data hierarchy
Data hierarchy table: (lower types convert into higher types)
long double
double
float
long
int
short
char
*/

#include <stdio.h>

int main (){
    // ! Normal type working
    // int a = 4;
    // int b = 6;
    // int res = a + b; 
    // printf("Sum = %i\n", res);
    // ! double a converts into int
    double a = 4.64;
    int b = 6;
    int res = a + b;
    printf("Sum = %i\n", res);
    // ! int a converts into double
    // int a = 4;
    // double b = 6.5;
    // double res = a + b;
    // printf("Sum = %lf\n", res);
    // ! char a adds the ASCII value of it to the int b, not the char itself
    // char a = 'G';
    // int b = 6;
    // int res = a + b;
    // printf("Sum = %i\n", res);
    // ! You can change the avriable type explicitly by adding (type) before the variable
    // int a = 9;
    // int b = 2;
    // double res = (double)a / b;
    // printf("Res is %lf\n", res);

    return 0;
}