#include <stdio.h>
#include <stdlib.h>

int main (void){
    int day;
    scanf("%d", &day);
    int week = 52;
    day += 4;
    int res = ((364 - day)) / 7;
    res = week - res;
    printf("%d", res);

    return 0;
}