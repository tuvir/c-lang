#include <stdio.h>

int main (){
    double num;
    printf("Enter your number ");
    scanf("%lf", &num);
    if (num == 0)
    {
        printf("Yor number is 0\n");
    }
    else if (num > 0)
    {
        printf("Number %.2lf is positive\n", num);
    }
    else
    {
        printf("Number %.2lf is negative\n", num);
    }
    
    
    return 0;
}