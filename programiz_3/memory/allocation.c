#include <stdio.h>
#include <stdlib.h>
// * memory-oriented functions: malloc(), calloc(), realloc(), free()
// ! malloc() syntax - ptr = (castType*) malloc(size);
// ! calloc() syntax - ptr = (castType*)calloc(n, size);
int main (void){
    int limit;
    printf("Enter upper border: ");
    scanf("%d", &limit);
    int n = limit;
    int* ptr;
    ptr = (int*) malloc(n * sizeof(int)); // * this equals to "int ptr[n]" 
    // * we can treat "ptr" as an array the size of "n", where each element is the size of "int" (4 bytes) 
    // ! here ptr pointer variable stores the FIRST byte of allocated memory, thus first element of array
    
    if (ptr == NULL)
    {
        printf("Memory cannot be allocated\n");

        return 0;
    }
    
    printf("Enter %d values: ", limit);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
    }
    printf("The values are:\n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", *(ptr + i));
    }

    free(ptr);   

    return 0;
}