#include <stdio.h>

int main (void){
    int age [5];
    printf("Enter 5 ages: ");
    // scanf("%d %d %d %d %d", &age[0], &age[1], &age[2], &age[3], &age[4]);
    // printf("Single age: %d\n", age[3]);
    // printf("Multiple ages: %d %d %d %d %d\n", age[0], age[1], age[2], age[3], age[4]);

    // * the same thing using "for" loop
    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", &age[i]);
    }
    for (int i = 0; i < 5; ++i)
    {
        printf("%d", age[i]);
        if (i != 5)
        {
            printf(" ");
        }
        
    }
    

    return 0;
}