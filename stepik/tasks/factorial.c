#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (void){
    int res, limit = 1;
    res = limit;
    printf("%d! = %d\n", limit, res);
    res = limit * (limit + 1);
    printf("%d! = %d\n", limit, res);
    res = limit * (limit + 2);
    printf("%d! = %d\n", limit, res);
    res = limit * (limit + 3);
    printf("%d! = %d\n", limit, res);
    res = limit * (limit + 4);
    printf("%d! = %d\n", limit, res);
    res = limit * (limit + 5);
    printf("%d! = %d\n", limit, res);
    res = limit * (limit + 6);
    printf("%d! = %d\n", limit, res);
    res = limit * (limit + 7);
    printf("%d! = %d\n", limit, res);
    res = limit * (limit + 8);
    printf("%d! = %d\n", limit, res);
    res = limit * (limit + 9);
    printf("%d! = %d\n", limit, res);
    res = limit * (limit + 10);
    printf("%d! = %d\n", limit, res);

    return 0;
}