// Arifmetic operators
// +	addition or unary plus
// -	subtraction or unary minus
// *	multiplication
// /	division
// %	remainder after division (modulo division)
// ++   increment by 1
// --   decrement by 1

#include <stdio.h>

int main (){
    // Addition
    int a = 10;
    int res = a + 2;
    printf("Base number is %i\n", a);
    printf("%i\n", res);
    
    // Substraction
    int res1 = a - 2;
    printf("%i\n", res1);

    // Multiplication
    int res2 = a * 2;
    printf("%i\n", res2);

    // Division, better use it with "double" data type
    int res3 = a / 2;
    printf("%i\n", res3);

    // Remainder, only used with "int" data type, else is error
    int res4 = a % 2;
    printf("%i\n", res4);
 
    // Increment by 1
    int res5 = ++a;
    printf("%i\n", res5);

    // Decrement by 1
    printf("%i\n", --a);

    return 0;
}