#include <stdio.h>

int main (void){
    int x = 12, y = 25;
    scanf("%d %d", x, y);
    int perimeter = (x + y) * 2;
    printf("Perimeter = %d sm\n", perimeter);

    return 0;
}