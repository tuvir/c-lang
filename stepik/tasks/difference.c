#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (void){
    int a, b, c, d, e, res;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    a += 1;
    a = fabs(a);
    a = pow(-1, a);
    b += 1;
    b = fabs(b);
    b = pow(-1, b);
    c += 1;
    c = fabs(c);
    c = pow(-1, c);
    d += 1;
    d = fabs(d);
    d = pow(-1, d);
    e += 1;
    e = fabs(e);
    e = pow(-1, e);
    res = a + b + c + d + e;
    printf("%d", res);

    return 0;
}