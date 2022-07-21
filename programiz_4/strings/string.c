#include <stdio.h>
#include <stdlib.h>
// * string ic C programming - is an array of CHARACTERS, thus ecah element of array stores a character
// ! string syntax: char stringName[size]
// * to print the string, we use %s format specifier
// * string ends with "/0" character, thus string size is always greater on 1 element


int main (void){
    // * program to print the string
    // char str[] = "Petr";
    // printf("%s\n", str);

    // * program to take she string from the user then print it
    // char str[20];
    // printf("Enter your name: ");
    // scanf("%s", str); // ! we dot need to use "&" since "str" is an array
    // printf("%s\n", str);
    // ! this program doesn't print the surname divided by space, since scanf only counts data before "basckspace"

    // * program to take the string of multiple words from user
    // char str[30];
    // printf("Enter your name: ");
    // fgets(str, sizeof(str), stdin);
    // printf("%s", str);
    
    // * program that prints individual values of string
    // char str[] = "Petr";
    // for (int i = 0; i < 4; ++i) // ! wthe end "/0" character is also getting printed
    // {
        // printf("%c\n", str[i]);    
    // }
    
    // * program to change the character of indidvidual string elements
    char str[] = "Petr";
    str[2] = 'T';
    printf("%s\n", str);

    return 0;
}