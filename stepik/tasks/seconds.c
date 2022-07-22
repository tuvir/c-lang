#include <stdio.h>
#include <stdlib.h>

// 1 min = 60 sec
// 1 hour = 3600 sec
// 1 day = 86 400 sec
int main (void){
    int sec, res;
    scanf("%d", &sec);
    res = sec % 3600;
    printf("%d", res);  
        

    return 0;
}