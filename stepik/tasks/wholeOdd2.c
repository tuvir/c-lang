#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (void){
    int num;
    scanf("%d", &num);
    num = fabs(num);
    int res = pow(-1, num);
    printf("%d", res);

    return 0;
}