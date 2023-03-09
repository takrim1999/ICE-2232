#include <stdio.h>
int maxmin(int arr[], int length, int *max, int *min);
int *findmid(int arr[], int length);
int main()
{
    int max = 0, min = 0, array[] = {23, 87, 12, 6, 28, 35, 78, 108, 92, 56, 33};
    max = min = array[0];
    if (maxmin(array, sizeof(array) / sizeof(array[0]), &max, &min) == 0)
    {
        printf("maximum is: %d\n", max);
        printf("minimum is: %d\n", min);
    }
    else
        printf("Something went wrong");

    printf("The middle element is : %d\n", *findmid(array, sizeof(array) / sizeof(array[0])));

    return 0;
}

int maxmin(int arr[], int length, int *max, int *min)
{
    for (int i = 0; i < length; i++)
    {
        // printf("%d\n", i);
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
    }
    return 0;
}

int *findmid(int arr[], int length)
{
    int mid = 0;
    if (length % 2 == 0)
    {
        return &arr[length / 2];
    }
    else
        return &arr[(length / 2) + 1];

    // return &mid;
}