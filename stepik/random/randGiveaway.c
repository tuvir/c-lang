#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){
    srand(time(NULL));

    int win, max;
    printf("Enter the number of contestants: ");
    scanf("%d", &max);
    printf("The winner is %d\n", 1 + rand() % (max - 1 + 1));


    return 0;
}