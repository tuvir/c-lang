#include <stdio.h>
#include <stdlib.h>

int main (void){
    int rad;
    scanf("%d", &rad);
    int so = rad * 2, hours = (rad * 4) / 900;
    printf("%d %d", so, hours);
    return 0;
}