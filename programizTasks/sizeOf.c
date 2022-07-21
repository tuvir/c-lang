#include <stdio.h>

int main (){
    int a;
    float b;
    double c;
    char d;
    
    printf("Enter int ");
    scanf("%i", &a);
    
    
    printf("Enter float ");
    scanf("%f", &b);
    
    
    printf("Enter double ");
    scanf("%lf", &c);

    /* If u use scanf with %c format, you need to place space before %c, 
    else it will count int as the requested character, skipping input of character from the user */
    printf("Enter char "); 
    scanf(" %c", &d);

    printf("Size of %i = %lu bytes\n", a, sizeof(a));
    printf("Size of %f = %lu bytes\n", b,sizeof(b));
    printf("Size of %lf = %lu bytes\n", c,sizeof(c));
    printf("Size of %c = %lu byte\n", d,sizeof(d));

    return 0;
}