#include <stdio.h>
#include <stdlib.h>
int main (void){
    int max, res;
    scanf("%d", &max);
    printf("%d", rand() % max);

    return 0;
}