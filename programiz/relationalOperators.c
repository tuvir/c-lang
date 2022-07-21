// Relational operators are used in loops and decision making
// Operator	Meaning of Operator	        Example
//   ==	    Equal to	                5 == 3 is evaluated to 0
//   >	    Greater than	            5 > 3 is evaluated to 1
//   <	    Less than	                5 < 3 is evaluated to 0
//   !=	    Not equal to	            5 != 3 is evaluated to 1
//   >=	    Greater than or equal to	5 >= 3 is evaluated to 1
//   <=	    Less than or equal to	    5 <= 3 is evaluated to 0
//  1 = true, 0 = false

#include <stdio.h>

int main (){
    int a = 5, b = 5, c = 10;
    printf("%i == %i is %i\n", a, b, a == b);
    printf("%i > %i is %i\n", a, c, a > c);
    printf("%i < %i is %i\n", a, c, a < c);
    printf("%i != %i is %i\n", a, c, a != c);
    printf("%i >= %i is %i\n", a, c, a >= c);
    printf("%i <= %i is %i\n", a, c, a <= c);
    

    return 0;
}