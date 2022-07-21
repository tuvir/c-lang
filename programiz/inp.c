#include <stdio.h>

int main (){
    double height;//data type must be the same both in varuable and format specifier
    int age;
    char letter;
    printf("Input your height (cm), then input your age, then a character: ");
    scanf("%lf %i %c", &height, &age, &letter);

    printf("\nYour height is %.2lf m", height/100);
    printf("\nYou are %i years old\n", age); //if you type \n at the end of the last function, program looks better
    printf("The letter is %c", letter);
    printf("The ASCII value of letter %c is %d\n", letter, letter);

    return 0;
}