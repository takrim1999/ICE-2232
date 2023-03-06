#include <stdio.h>
int main()
{
    int n = 0, count = 0;
    float sum;
    printf("how many days you want to record?\n>");
    scanf("%d", &n);
    int TEMPERATURE[n];
    // input part
    printf("Input Temperatures:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Day %d : ", i + 1);
        scanf("%d", &TEMPERATURE[i]);
    }
    // output part
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < i; j++)
        {
            if (TEMPERATURE[j] == TEMPERATURE[i])
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            printf("Day %d : %d\,", i + 1, TEMPERATURE[i]);
            count++;
            sum = sum + TEMPERATURE[i];
        }
        else
            continue;
        // scanf("%d", &TEMPERATURE[i]);
    }
    // printf("sum is %d and count is %d", sum, count);
    printf("Average temperature is %.2f", (sum / count));

    return 0;
}