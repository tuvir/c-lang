#include <stdio.h>
#include <stdlib.h>

int main (void){
    int num, a, b, c, res;
    scanf("%d", &num);
    a = num / 100;
    b = (num % 100) / 10;
    c = (num % 100) % 10;
    res = a + b * 10 + c * 100;
    printf("%d", res);
    return 0;
}