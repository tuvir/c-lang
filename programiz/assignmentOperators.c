// Assignment Operators
// Operator	Example	 Same as
//     =	a = b	 a = b
//     +=	a += b	 a = a+b
//     -=	a -= b	 a = a-b
//     *=	a *= b	 a = a*b
//     /=	a /= b	 a = a/b
//     %=	a %= b	 a = a%b

#include <stdio.h>

int main (){
    int a = 5, c = 3;
    // c = a;
    // sprintf("%i\n", c);
    c += a;
    printf("%i\n", c);
    c -= a;
    printf("%i\n", c);
    c *= a;
    printf("%i\n", c);
    c /= a;
    printf("%i\n", c);
    c %= a;
    printf("%i\n", c);

    return 0;
}