// ! INNEFECTIVE SOLUTION
// * making a function to compute a square of a number using pointers
#include <stdio.h>
// int findSquare (int* num){
    // *num *= *num; 
    // * we multiply the values of a variable, so *num is valid, num is not valid, it refers to adress
// }
// ! BETTER SOLUTION
// void findSquare(int* num){
    // int square = *num * *num;
    // *num = square;
// }
// ! FINAL SOLUTION
int* findSquare(int* num){
    int square = *num * *num;
    *num = square;

    return num;
}
int main (void){
    // ! INNEFECTIVE SOLUTION
    // int *square, numberi, numberf;
    // printf("Enter a number: ");
    // scanf("%d", &numberi);
    // numberf = numberi;
    // findSquare(&numberf);
    // square = &numberf;
    // printf("The square of number %d is %d\n", numberi, *square);
    // ! BETTER SOLUTION
    // int number, res;
    // printf("Enter a number: ");
    // scanf("%d", &number);
    // res = number;
    // findSquare(&number);
    // printf("The square of number %d is %d", res, number);
    // ! FINAL SOLUTION
    int* square, number, res;
    printf("Enter a number: ");
    scanf("%d", &number);
    res = number;
    square = findSquare(&number);
    printf("The square of number %d is %d", res, *square);
    return 0;
}