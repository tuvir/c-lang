#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){
    // * strlen() function that computes the sum of string elements, uses %zu 
    char str[] = "Petr Kulikov";
    printf("Length: %zu\n", strlen(str)); // ! strlen(stringName) sums the number of csharacters in the named string  

    // * strcpy() function that copies one string into another
    char myname[strlen(str)];
    strcpy(myname, str); // ! first string name is the destination string, second name is the source string
    printf("My name is: %s\n", myname);

    // * strcat() function that concatenates 2 strings
    char text1[] = "Hey, ";
    char text2[] = "How are you?";
    strcat(text1, text2); 
    // ! first str is the destination, scend str is the source, binded string will be at the destination str
    printf("%s\n", text1);

    // * strcmp() 
    char text_1[] = "abcd";
    char text_2[] = "abcd";
    int result = strcmp(text_1, text_2);
    if (result != 0)
    {
        printf("The strings are not the same");
    }
    else
    printf("Strings are the same");

    return 0;
}