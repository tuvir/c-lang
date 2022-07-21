#include <stdio.h>
#include <stdlib.h>
// * syntax of realloc() funtction:
// ! ptr = realloc(ptr, X), where ptr is the name of the previously allocated pointer
// ! and X is the size of each variable
// * EXAMPLE: ptr = realloc(ptr, n * sizeof(int)); 
int main (void){
    int* ptr, n1, n2;
    printf("Enter the first size: ");
    scanf("%d", &n1);
    ptr = (int*) malloc(n1 * sizeof(int));
    printf("Adresses of allocated memory of %d size: \n", n1);
    for (int i = 0; i < n1; ++i)
    {
        printf("%p\n", ptr + i);
    }
    printf("Enter new size: ");
    scanf("%d", &n2);
    ptr = realloc(ptr, n2 * sizeof(int));
    printf("Adresses of allocated memory of %d size: \n", n2);
    for (int i = 0; i < n2; ++i)
    {
        printf("%p\n", ptr + i);
    }
    
    free(ptr);

    return 0;
}