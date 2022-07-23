#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
    int hour;
    scanf("%d", &hour);
    hour /= 3;
    int res = pow(2, hour);
    printf("%d", res);    

    return 0;
}