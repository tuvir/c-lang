#include <stdio.h>

int power(int n, int p);
int main (void){
    int num, pow;
    printf("Enter a base number and an exponent: ");
    scanf("%i %i", &num, &pow);
    int result = power(num, pow);
    printf("%i in power of %i = %i", num, pow, result);

    return 0;
}
int power(int n, int p){
    if (p != 0)
    {
        return n * power(n, p - 1);
    }
    else
    {
        return 1;
    }
    
}