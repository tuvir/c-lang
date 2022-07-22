#include <stdio.h>
#include <stdlib.h>

int main (void){
    int num;
    scanf("%d", &num);
    num += 1;
    int res;
    res = num % 2;
    printf("%d", res);

    return 0;
}