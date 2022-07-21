// Logical operators are used in decision making
// Operator	Meaning	            Example
// &&	    Logical AND.        True only if all operands are true	If c = 5 and d = 2 then, expression ((c==5) && (d>5)) equals to 0.
// ||	    Logical OR.         True only if either one operand is true	If c = 5 and d = 2 then, expression ((c==5) || (d>5)) equals to 1.
// !	    Logical NOT.        True only if the operand is 0	If c = 5 then, expression !(c==5) equals to 0.

#include <stdio.h>

int main (){
    int a = 5, b = 5, c = 10, result;
    printf("a = 5, b = 5, c = 10\n");
    result = (a > b) || (a == c);
    printf("(a > b) || (a == c) is %i\n", result);
    result = !(a < c);
    printf("a < c is %i\n", result);   
    result = (a == b) && (a < c);
    printf("(a == b) && (a < c) is %i\n", result);

    return 0;
}