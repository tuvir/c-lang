#include <stdio.h>

int main (void){
    int limit;
    printf("Enter the limit number: ");
    scanf("%i", &limit);
    int a = 1;
    int b = 0;
    int start;
    for (int i = limit; i != 0; --i)
    {
        start = a + b;
        printf("%i", start);
        b = a;
        a = start;
        
        if (i > 0)
        {
            printf(" ");
        }
        
    }
    

    return 0;
}