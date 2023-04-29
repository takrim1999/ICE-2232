#include <stdio.h>
int main()
{
    int days = 0, avg = 0;
    printf("How many days you want to record?\n>");
    scanf("%d", &days);
    int TEMPERATURE[days];

    // Recording the temperature for given days

    for (int i = 0; i < days; i++)
    {
        printf("Day %d: ", i + 1);
        scanf("%d", &TEMPERATURE[i]);

        // Removing invalid temperature

        if (TEMPERATURE[i] < 0)
        {
            printf("Invalid temperature\n");
            i--;
        }
    }

    // printing all the temperature with there indexes
    printf("Temperatures with days:\n");
    for (int i = 0; i < days; i++)
    {
        printf("Day %d : %d\n", i + 1, TEMPERATURE[i]);
        avg = avg + TEMPERATURE[i];
    }
    // printing the average
    printf("Rounded Average is %d\n", avg / days);
    return 0;
}