#include <stdio.h>

int main (void){
    /* 
    * two-dimentional array syntax:
    ! dataType arrayName [A][B] - where A is the number of arrays, B is the number of elements in each array
    ! this can be perceived as a table, where rows are arrays and columns are elements
    * to access 1 element of first array we need to type [0][0], 2 element is [0][1] and so on
    * to access second and further arrays we need to type [1][0] for first element of second array and so on
    * 
    */
    int multi [2][4] = {{1, 3, 5, 7}, {2, 4, 6, 8}};
    // ! the first curly brackets are the contents of the first array, and so on
    // * amount of curly brackets reflects the number of arrays

    // printf("%d", multi[1][1]); // ! output - "4", second element of second array
    // * accessing the elements of 2-dimensional array using "for" loop
    // multi[0][3] = 9; // ! changing the element of 2-dimensional array
    for (int i = 0; i < 2; ++i) // ! "i" is the number of arrays
    {
        for (int j = 0; j < 4; ++j) // ! "j" is the number of elements in each array
        {
            printf("%d ", multi[i][j]); 
        }
        printf("\n"); // ! after inner loop ends, this prints newline, for the next loop to print from newline
    }
    

    return 0;
}