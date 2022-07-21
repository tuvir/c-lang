#include <stdio.h>

int main (void){
    int num;    
    scanf("%d", &num);
    int a;
    num += 1;
    a = num % 2;
    printf("%d", a);

    return 0;
}