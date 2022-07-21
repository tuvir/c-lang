#include <stdio.h>

int main (void){
    // ! ACCESSING the array values and adresses using pointers
    // int numbers[5] = {5, 19, 6, 3, 2};
    // int* ptr;
    // for (int i = 0; i < 5; ++i)
    // {
        // printf("%d = %p\n", *(numbers + i), numbers + i); //* another end of line: "numbers[i], &numbers + i"
    // * to access the value of array element we use pointer that points at the adress of an array
    // ! *(numbers + i)
    // * since "numbers" is both array and a pointer, & symbol is not needed to access its adress
    // ! numbers + i
    // }
    // printf("%p\n", numbers ); //! arrays usually are pointers, so we dont need the "&". 
    // ! adress of the array = adress of its first element.

    // ! CHANGING the array values using pointers
    // int numbers[5] = {5, 19, 6, 3, 2};
    // for (int i = 0; i < 5; ++i)
    // {
        // printf("%d = %p\n", *(numbers + i), numbers + i);
    // }
    // printf("\n");
    // *numbers = 4; // * changing the first value of an array
    // *(numbers + 2) = 7; // * changing the third value of an array
    /* 
        ! to change the value of an array element using pointer, following formula is used: 
        ! *(arrayName + (N - 1)) = X where N is the number of the variable we want to change and X is the new value
    */
    // for (int i = 0; i < 5; ++i)
    // {
        // printf("%d = %p\n", *(numbers + i), numbers + i);
    // }
    
    // ! PROGRAMMING TASK
    // int number;
    // printf("Enter the number of elements in array: ");
    // scanf("%d", &number);
    // int array [number];
    // printf("Enter %d numbers for an array: ", number);
    // for (int i = 0; i < number; ++i)
    // {
        // scanf("%d", array + i); //! equal to "&array [i]"
    // }
    // for (int i = 0; i < number; ++i)
    // {
        // printf("%d ", *(array + i)); //! equal to "array [i]"
    // }
    // int largest = *array;
    // for (int i = 1; i < number; ++i)
    // {
        // if (largest < *(array + i))
        // {
            // largest = *(array + i);
        // }
        // 
    // }
    // printf("\nThe largest number in the array = %d\n", largest);
    
    // * program to print adresses of array elements
    int arr[5] = {1, 2, 3, 4, 5};
    
    for (int i = 0; i < 5; ++i)
    {
        printf("Value = %d, Adress = %p\n", *(arr + i), arr + i);
    }
        // ! since arrays are poiners, creation and use of pointer vasriable is needless

    return 0;
}