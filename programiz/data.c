/*
int 	            %d, %i
char   	            %c
float	            %f
double	            %lf
short int	        %hd
unsigned int	    %u
long int	        %ld, %li
long long int	    %ld, %lli
unsigned long int	%lu
unsigned long 
long int	        %llu
signed char	        %c
unsigned char	    %c
long double		    %Lf
*/

#include <stdio.h>

int main(){
    float num = 10.15;
    double num1 = 13.2;
    int b;
    printf("%.0f", num);
    printf("\n%.2lf", num1);

    char test = 'h';
    printf("\n%c", test);

    printf("\n%i", b);
    printf("\n%li bytes", sizeof(b));

    long a;
    printf("\n%li bytes", sizeof (a));

    //signed and usigned
    unsigned int x = 10; //only positive num and 0
    int y = 11;
    int z = -12;
    unsigned int h = -13;
    printf("\n%i", x);
    printf("\n%i", y);
    printf("\n%i", z);
    printf("\n%i", h);
    printf("\n%d", y + z);
    return 0;
}