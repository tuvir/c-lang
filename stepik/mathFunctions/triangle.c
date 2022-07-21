#include <stdio.h>
#include <math.h>
int main (void){
    double a, b, y, res;
    scanf("%lf %lf %lf", &a, &b, &y);
    double side, rad, P = 3.1415926;
    side = a * b * 0.5;
    rad = y * P / 180;
    res = side * sin(rad);
    printf("%.2lf", res);
    
    return 0;
}