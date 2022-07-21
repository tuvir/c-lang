#include <stdio.h>

int main (void){
    int start = 1200, finish = 1400;
    double cost = 0.2, sum;
    scanf("%d %d %lf", &start, &finish, &cost);
    sum = (finish - start) * cost;
    printf(".2%lf", sum);

    return 0;
}