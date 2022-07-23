#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
    int num;
    scanf("%d", &num);
    // ! 1 = 1, 2 = 0
    // int a = (num % 2);
    // ! 1 = 0, 2 = 1
    int res = pow(-1, num);
    printf("%d", res);

    return 0;
}