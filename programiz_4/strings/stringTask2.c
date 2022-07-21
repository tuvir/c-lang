#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void){
    char str1[30], str2[30];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    int res1 = strlen(str1), res2 = strlen(str2);
    if (res1 > res2)
    {
        printf("First string (%d) is bigger\n", res1);
    }
    else
    {
        printf("The second string (%d) is bigger\n", res2);
    }
    if (res1 == res2)
    {
        printf("The strings are equal\n");
    }
    
    return 0;
}