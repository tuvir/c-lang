#include <stdio.h>

int main (void){
    const int CITY = 2;
    const int WEEK = 7;

    double sum = 0, average, temp;
    int weather [CITY][WEEK];
    double aver [CITY];
    // * taking temperature of each day in each city from the user
    for (int i = 0; i < CITY; ++i)
    {
        for (int j = 0; j < WEEK; ++j)
        {
            printf("City %d, Day %d temperature: ", i + 1, j + 1);
            scanf("%d", &weather[i][j]);
            sum += weather[i][j];
            aver[i] = sum; // ! i tried to store the average temperature but it is better to store the sum
            //average = sum / WEEK;
            //temp = average;
            //aver[i] = temp;
            
            
            // temp = average;
            // for (int k = 0; k < CITY; ++k)
            // {
                // aver [k][1] = temp;
            // }
            // sum = 0;
        }
        // printf("%.2lf\n", sum);
        // average = sum / WEEK;
        // printf("%.2lf\n", average);
        // aver[i] = sum;
        printf("%.2lf\n", aver[i]);
        sum = 0; // ! when i have my sum stored in an array, i can bring it to 0 and count the sum of next city
        // printf("%.2lf", aver[CITY - 1]);
    }
    // printf("%.2lf\n", temp);
    // printf("%.2lf\n", average);
    // printf("\n");

    // * printing the temperarure values
    for (int i = 0; i < CITY; ++i)
    {
        for (int j = 0; j < WEEK; ++j)
        {
            printf("City %d, Day %d temp = %d\n", i + 1, j + 1, weather[i][j]);
        }
        printf("Average temp in City %d = %.2lf\n", i + 1, aver[i] / WEEK);
        // ! i count the average temperature using stored sum value
    }
    

    return 0;
}