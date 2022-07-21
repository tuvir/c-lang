#include <stdio.h>
#include <stdlib.h>

int main (void){
    char str[30];
    printf("Enter your name: ");
    fgets(str, sizeof(str), stdin); // ! taking input from the user
    str[0] = 'X';
    printf("New name is: ");
    puts(str); // ! printing the user's input

    return 0;
}