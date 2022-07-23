#include <stdio.h>
#include <stdlib.h>

int main (void){
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int res;
    res = (a * a) + (b * b) + (c * c) + (d * d) + (e * e);
    printf("%d", res);
    return 0;
}