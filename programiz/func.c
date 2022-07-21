
#include <stdio.h>

int power(int, int);

int main(){
    printf("%d\n", power(-2, 3));
    return 0;
}

int power(int base, int n){
    int p, i;
    p = 1;
    
    if (base < 0)
        return 0;
    else{ 
    for (i = 1; i <= n; ++i)
        p = p * base;
    }
    return p;
}