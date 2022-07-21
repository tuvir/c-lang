#include <stdio.h>

int main (void){
    int num, pwr;
    printf("Enter a base number: ");
    scanf("%i", &num);
    printf("Enter a exponent number: ");
    scanf("%i", &pwr);
    int result = 1;
    for (int i = pwr; i !=0; --i)
    {
        result *= num;
    }
    printf("%i\n", result);

    return 0;
}