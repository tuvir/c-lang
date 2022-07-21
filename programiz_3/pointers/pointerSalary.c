#include <stdio.h>

int main (void){
    double* ptr, salary;
    printf("Enter your salary: ");
    scanf("%lf", &salary);
    ptr = &salary;
    printf("Your salary is %.2lf\n", *ptr);
    *ptr = salary * 2.0;
    printf("Yor slary x 2 = %.2lf\n", *ptr);

    return 0;
}