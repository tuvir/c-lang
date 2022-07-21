#include <stdio.h>

int main (){
    int a, b, result;
    printf("Enter integer a ");
    scanf("%i", &a);
    printf("Enter integer b ");
    scanf("%i", &b);
    result = a + b;
    printf("%i + %i = %i\n", a, b, result);
    

    return 0;
}