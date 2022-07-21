#include <stdio.h>
#include <math.h>

int main (void){
    // int a = 90;
    // scanf("%d", &a);
    // double P = 3.1415926, res;
    // res = (a * P) / 180;
    // printf("%.2lf", res);
    double alpha, sin_a, pi = 3.1415926;
    scanf("%lf",&alpha);
    alpha =  alpha*pi/180; 
    sin_a = sin(alpha);
    printf("%.2f\n", sin_a); 

    return 0;
}