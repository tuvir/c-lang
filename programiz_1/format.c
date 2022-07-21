#include <stdio.h>

int main (void){
    int x = 3, y = -4;
    char ch_eq = '=';
    char ch_plus = '+'; 
    char ch_minus = '-'; 
    char ch_div = '/'; 
    char ch_mul = '*';
    double res = -0.75;  

    printf("Result of %c for %d %d = %5.2f", ch_div, x, y, res);

    return 0;
}