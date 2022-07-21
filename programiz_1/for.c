#include <stdio.h>

int main (void){
    // int max;
    // int min;
    // int sum = 0;
    // printf("Enter max value: ");
    // scanf("%i", &max);
    // printf("Enter min value: ");
    // scanf("%i", &min);
    // for(int i = min; i <= max; i++){
        // sum = sum + i; 
    // }
    // printf("%i\n", sum);
    printf("This program adds every odd number from min to max\n");
    int max;
    int min;
    int sum = 0;
    printf("Enter max value: ");
    scanf("%i", &max);
    printf("Enter min value: ");
    scanf("%i", &min);
    int a = min;
    int b = a % 2;
    if (b == 0)
    {
        // printf("error");
        a = a + 1;
        // printf("%i", a);
        for (int i = a; i <= max; i = i + 2){
        sum += i;
    }
    printf("%i\n", sum);
    }
    else
    {
        for (int i = min; i <= max; i = i + 2){
        sum += i;
    }
    printf("%i\n", sum);
        
    }
    

    // int sum = 0;
    // for(int i = 1; i <= 100; i = i + 2){
        // sum = sum + i;
    // }
    // printf("%i\n", sum);
    

    return 0;
}