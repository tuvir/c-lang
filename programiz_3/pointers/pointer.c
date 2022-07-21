/*pointer declaration
    int* p - pointer p of int type
    int* p1, p2 - pointer p1, normal variable p2

*/
#include <stdio.h>

int main (void){
//  int var = 5;
//  printf("var: %d\n", var);
// 
//  Notice the use of & before var
//  printf("address of var: %p\n", &var);  

    int* ptr, age;
    age = 25;
    ptr = &age;
    printf("Value: %d\n", *ptr);     // Output: 25
    printf("Adress: %p\n", ptr);    // Otput : "age" variable adress
    //* changing the value of the variable using pointer
    *ptr = 31;
    printf("Value: %d\n", *ptr);

    // ! common mistakes in pointer syntax
    /*
    * ptr = age Invalid ("ptr" refers to memory adress, while "age" refers to variable)
    * *ptr = &age Invalid ("*ptr" refers to value of a variable of a certain adress, while "&age" refers to memory adress)
    * ptr = &age Valid (both "ptr" and "&age" refer to memory adress)
    * *ptr = age Valid ("*ptr" points to a value of a variable, located at "age" adress)   
    */

    return 0;
}