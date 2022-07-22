#include <stdio.h>
#include <stdlib.h>

int main (void){
    int m, n;
    scanf("%d %d", &m, &n);
    double res = (double)m/n;
    printf("%lf\n", res);
    int res2 = res * 10;
    printf("%d\n", res2);
    m = res2 / 10;
    n = res2 % 10;
    printf("Done %d %d", m, n );   
    
    return 0;
}