#include <stdio.h>
#include <stdlib.h>

int main (void){
    int num, a, b, c, res;
    scanf("%d", &num);
    a = num / 100;
    b = (num % 100) / 10;
    c = (num % 100) % 10;
    res = (b * 100) + (c * 10) + a;
    printf("%d", res);

    return 0;
}