#include <stdio.h>

int main (void){
    int limit;
    printf("Enter number of digits: ");
    scanf("%d", &limit);
    double arr[limit], sum = 0;
    printf("Enter %d numbers: ", limit);
    for (int i = 0; i < limit; ++i)
    {
        //! equal to "&arr [i]"
        scanf("%lf", arr + i);
        
        //! equal to "sum += arr [i]"
        sum += *(arr + i);
    }
    printf("Sum = %.2lf\n", sum);

    return 0;
}