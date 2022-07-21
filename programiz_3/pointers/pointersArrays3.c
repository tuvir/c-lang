#include <stdio.h>

int main (void){
    int* ptr, arr[5], limit;
    printf("Enter upper border: ");
    scanf("%d", &limit);
    printf("Enter %d numbers: ", limit);
    for (int i = 0; i < limit; ++i)
    {
        scanf("%d", arr + i);
    }
    for (int i = 0; i < limit; i++)
    {
        printf("%d ", *(arr + i)); //! equal to "array [i]"
    }
    ptr = &arr[2];
    printf("\n%d\n", *ptr + 1);
    printf("%d\n", *ptr - 1);

    return 0;
}