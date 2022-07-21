#include <stdio.h>

// * multiplication table using "for" cycle
int main (void){
    // int num;
    // printf("Enter a number ");
    // scanf("%i", &num);
    // for (int i = 1; i <= 10; i++)
    // {
        // int sum = num * i;
        // printf("%i\n", sum);
    // }
// * multiplication table using "while" cycle
    int num2;
    printf("Enter a number ");
    scanf("%i", &num2);
    int multi = 10;
    while (multi >= 1)
    {
        int prod = num2 * multi;
        printf("%i * %i = %i\n", num2, multi, prod);
        multi -= 1;
    }
    
    return 0;
}   
