#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){
    srand(time(NULL));
    
    // ! upper border setup - rand() % N, where N is the top number
    printf("%d\n", rand() % 100);
    printf("%d\n", rand() % 100);
    printf("%d\n", rand() % 100);
    printf("%d\n", rand() % 100);
    printf("%d\n", rand() % 100);
    // ! lower border setup - N + rand(), where N is the bottom number
    printf("\n%d\n", 100 + rand());
    printf("%d\n", 100 + rand());
    printf("%d\n", 100 + rand());
    printf("%d\n", 100 + rand());
    printf("%d\n", 100 + rand());
    // ! lower and upper border setup - A + rand() % (B - A + 1), where A is the bottom number, B is the top number
    printf("\n%d\n", 100 + rand() % (200 - 100 + 1));
    printf("%d\n", 100 + rand() % (200 - 100 + 1));
    printf("%d\n", 100 + rand() % (200 - 100 + 1));
    printf("%d\n", 100 + rand() % (200 - 100 + 1));
    printf("%d\n", 100 + rand() % (200 - 100 + 1));

    printf("\n%d\n", rand() % 48);

    return 0;
}