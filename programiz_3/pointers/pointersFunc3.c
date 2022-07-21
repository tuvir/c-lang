#include <stdio.h>
int* sumNumbers(int* num1, int* num2, int* sum){
    *sum = *num1 + *num2;
    // * at first the value of *sum = 0, but then function rewrites its value into sum of two variables
    return sum;
    /* 
    * function returns a pointer so to access it, we need to sign it to a pointer as well
    * in this case, i assign returned pointer to the ponter "result"
    */
}
int* multNumbers(int* num1, int* num2, int* sum){
    *sum = *num1 * *num2;

    return sum;
}
int main (void){
    printf("Use of addition function:\n");
    int number1, number2, sum;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &number1, &number2); 
    int* result = sumNumbers(&number1, &number2, &sum); // * result = &sum, so *result = sum
    // ! since the function takes adresses we send them using "&" before variable name
    printf("The sum of %d and %d equals to %d\n", number1, number2, *result);

    printf("Use of multiplication function:\n");
    int number3, number4, mult;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &number3, &number4); 
    int* result2 = multNumbers(&number3, &number4, &mult); // * result = &mult, so *result = mult
    // ! since the function takes adresses we send them using "&" before variable name
    printf("The mult of %d and %d equals to %d\n", number3, number4, *result2);
    return 0;
}