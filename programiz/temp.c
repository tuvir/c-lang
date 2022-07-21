#include <stdio.h>

int kel_to_cel(int);

main () {
    printf("%d\n", kel_to_cel(100));
    return 0;
}

int kel_to_cel(kel){
    int k, c;
    k = kel;
    c = k - 273;

    return c;
}