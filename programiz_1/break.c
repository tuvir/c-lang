#include <stdio.h>

int main (void){
    // break statement
    // while (1)
    // {
        // int num;
        // printf("Enter a number: ");
        // scanf("%i", &num);
        // printf("%i\n", num);
        // if (num < 0)
        // {
            // break;
        // }
        // 
    // }
    // continue statement
    // ! continue statement skips the assigned rules and returns to the loop
    // int num2;
    // printf("Enter a number: ");
    // scanf("%i", &num2);
    // for (int i = 1; i <= num2; i++)
    // {
        // int a = i;
        // if (a % 2 == 1) 
        // {
            // continue;
        // }
        // else printf("%i\n", a);
        // 
    // }
    while (1)
    {
        int num;
        printf("Enter a number: ");
        scanf("%i", &num);
        if (num > 0)
        {
            printf("Positive Value\n");
            break;
        }
        int whole;
        whole = num;
        if (whole % 2 == 0)
        {
            printf("Negative Even\n");
            continue;
        }
        
        
        
        printf("%i\n", num);
    }

    return 0;
}