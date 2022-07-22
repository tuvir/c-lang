#include <stdio.h>
#include <stdlib.h>

int main (void){
    int num, a, b, c, d;
    scanf("%d", &num);
    a = num / 1000;
    b = (num % 1000) / 100;
    c = ((num % 1000) % 100) / 10;
    d = ((num % 1000) % 100) % 10;
    double res;
    res = ((double)a * c) / (b * d);
    printf("%lf", res);

    return 0;
}