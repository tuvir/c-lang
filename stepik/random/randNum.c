#include <stdio.h>
#include <stdlib.h>

int main (void){
    int upp, low;
    scanf("%d %d", &low, &upp);
    printf("%d", low + rand() % (upp - low + 1));


    return 0;
}