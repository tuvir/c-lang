#include <stdio.h>
#include <math.h>
int main (void){
    double x1, y1, x2, y2, res;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    double dotx, doty;
    dotx = pow(x1 - x2, 2);
    doty = pow(y1 - y2, 2);
    res = sqrt(dotx + doty);
    printf("%.2lf", res);


    return 0;
}