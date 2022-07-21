#include <stdio.h>

int main (void){
    int a = 2, y, x = 2;
    y = a * x * (x * x + 7);
    printf("%d\n", y);
    y = (a * x) * x * (x + 7);
    printf("%d\n", y);
    y = a * x * x * (x + 7);
    printf("%d\n", y);
    y = (a * x) * x * x +7;
    printf("%d\n", y);
    y = a*(x * x * x) + 7;
    printf("%d\n", y);
    y = a * x * x * x + 7;
    printf("%d\n", y);
    printf("%d",27 * 12);

    return 0;
}