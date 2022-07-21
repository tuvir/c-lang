#include <stdio.h>

int main (){
    double a, b, c;
    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("Enter second number: ");
    scanf("%lf", &b);
    c = a;
    a = b;
    b = c;
    printf("First number = %lf\nSecond number = %lf\n", a, b);

    double d, e;
  printf("Enter a: ");
  scanf("%lf", &d);
  printf("Enter b: ");
  scanf("%lf", &e);

  // swapping

  // a = (initial_a - initial_b)
  d = d - e;   

  // e = (initial_a - initial_b) + initial_b = initial_a
  e = d + e;

  // d = initial_a - (initial_a - initial_b) = initial_b
  d = e - d;

  // %.2lf displays numbers up to 2 decimal places
  printf("After swapping, a = %.2lf\n", a);
  printf("After swapping, b = %.2lf", b);

    return 0;
}