#include <stdio.h>
int findValue (int* num){ // ! !ATTENTION! num refers to adress, NOT the value
// ! so we need to pass the adress of a variable to the function, not the value
    *num = 39;
}
int main (void){
    int num1 = 21;
    printf("The value before  we pass it to the function: %d\n", num1);
    findValue(&num1); // ! to pass the adress of regular value, "&" is used
    printf("The value after we pass it to the function: %d\n", num1);
    
    return 0;
}