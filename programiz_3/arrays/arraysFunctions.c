#include <stdio.h>
// ! passing element of array to function
// void display (int age1, int age2){
    // printf("Age 1 %d\n", age1);
    // printf("Age 2 %d\n", age2);
// }
double calculateSum (double num[], int limit);

// ! passing multiple array elements to a function
int main (void){
    // int ages [5] = {12, 35, 18, 16, 21};
    // display(ages[1], ages[3]);
    double result, numbers[5] = {12.3, 6.03, 7.2, 9.1, 21.6};
    result = calculateSum(numbers, 4); 
    printf("%.2lf", result);

    return 0;
}
double calculateSum (double num[], int limit){ // ! the use of single "[]" says that we pass a 1d array to function
    // ! if we need to pass an entire array at once, only the name of array is needed
    double sum = 0;
    for (int i = 0; i < limit; ++i)
    {
        sum += num[i];
    }
    return sum;
}