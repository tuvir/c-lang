#include <stdio.h>

int main (void){
    // int num;
    // printf("Enter a number from 1 to 7: ");
    // scanf("%i", &num);
    // switch (num)
    // {
    // case 1:
        // printf("Monday\n");
        // break;
    // case 2:
        // printf("Tuesday\n");
        // break;
    // case 3:
        // printf("Wendnesday\n");
        // break;
    // case 4:
        // printf("Thursday\n");
        // break;
    // case 5:
        // printf("Friday\n");
        // break;
    // case 6:
        // printf("Saturday\n");
        // break;
    // case 7:
        // printf("Sunday\n");
        // break;
        //  ! break keyword is importat
    // default:
        // printf("Invalid number\n");
        // break;
    // }
    int num;
    printf("Enter a number from 1 to 12: ");
    scanf("%i", &num);
    switch (num)
    {
    case 1:
        printf("Jan\n");
        break;
    case 2:
        printf("Feb\n");
        break;
    case 3:
        printf("Mar\n");
        break;
    case 4:
        printf("Apr\n");
        break;
    case 5:
        printf("May\n");
        break;
    case 6:
        printf("Jun\n");
        break;
    case 7:
        printf("Jul\n");
        break;
    case 8:
        printf("Aug\n");
        break;
    case 9:
        printf("Sep\n");
        break;
    case 10:
        printf("Okt\n");
        break;
    case 11:
        printf("Nov\n");
        break;
    case 12:
        printf("Dec\n");
        break;
        //  ! break keyword is important
    default:
        printf("Invalid number\n");
        break;
    }
    return 0;
}