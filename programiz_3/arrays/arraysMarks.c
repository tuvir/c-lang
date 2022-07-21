#include <stdio.h>

int main (void){
    int subjects;
    printf("Enter the number of subjects: ");
    scanf("%d", &subjects);
    int marks[subjects];
    printf("Enter %d marks, from 2 to 5: ", subjects);
    int sum = 0;
    for (int i = 0; i < subjects; ++i)
    {
        scanf("%d", &marks[i]);
        sum = sum + marks[i];
    }
    
    printf("The sum of marks = %d\n", sum);
    double result = (double) sum / (double)subjects;
    printf("The median mark = %.2lf", result);
    
    // int common;
    // for (int i = 0; i < subjects; ++i)
    // {
        // common = marks[i] + (marks[i + 1]);
    // }
    // printf("The sum of marks = %d\n", common);

    return 0;
}