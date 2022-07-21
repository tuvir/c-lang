#include <stdio.h>

int main (void){
    int a, b, c;
    printf("Enter number a");
    scanf("%i", &a);
    printf("Enter number b");
    scanf("%i", &b);
    printf("Enter number c");
    scanf("%i", &c);
    if ((a - b > 0) && (a - c > 0))
    {
        printf("Number a (%i) is the biggest", a);
    }
    else
    {
        if ((b - a > 0) && (b - c > 0))
        {
            printf("Number b (%i) is the biggest", b);
        }
        else
        {
            if ((c - a > 0) && (c - b > 0))
            {
                printf("Number c (%i) is the biggest", c);
            }
            
        }
        
        
    }
    

    return 0;
}