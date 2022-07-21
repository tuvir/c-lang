#include <stdio.h>

int main (void){
    int x = 13, y = 45;
  
    y = y/x; 
    x = y*x;
    printf("x = %d, y = %d\n", x, y);
    return 0;
}