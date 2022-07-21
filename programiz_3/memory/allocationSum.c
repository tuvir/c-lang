#include <stdio.h>
#include <stdlib.h>

int main (void){
    int* ptr, n, sum = 0;
    printf("Enter the number of digits: ");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int)); // ! malloc can be switched with calloc

    if (ptr == NULL)
    {
        printf("Memory allocation error!\n");

        return 0;
    }
    
    printf("Enter %d numbers:", n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
    }
    for (int i = 0; i < n; ++i) // ! i can move the computation of "sum" to the previous loop
    {
        sum += *(ptr + i);
    }
    printf("The sum of %d elements is %d\n", n, sum);

    free(ptr);


    return 0;
}