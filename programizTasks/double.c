#include <stdio.h>

int main (){
    // double a = (1.5);
    // double b = (2.5);
    // printf("%lf", a * b);
    double a, b, res;
    printf("Input 2 doubles ");
    scanf("%lf %lf", &a, &b);
    res = a * b;
    printf("%lf * %lf = %lf\n", a, b, res);

    return 0;
}