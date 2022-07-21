#include <stdio.h>
#include <math.h>
int main (void){
    int x1, x2, res;
    scanf("%d  %d", &x1, &x2);
    x1 = fabs(x1);
    x2 = fabs(x2);
    res = x1 + x2;
    printf("%d", res);


    return 0;
}