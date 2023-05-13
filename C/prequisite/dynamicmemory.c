#include <stdio.h>
#include <stdlib.h>
int main()
{
    mal();
    cal();
    return 0;
}

void mal()
{
    int n;
    int *memory;
    printf("Enter the number of integers\n>");
    scanf("%d", &n);
    // printf("%d",sizeof(int));
    memory = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("your %d th data\n>", i + 1);
        scanf("%d", memory + i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *(memory + i));
    }
}

void cal()
{
    int n;
    int *memory;
    printf("Enter the number of integers\n>");
    scanf("%d", &n);
    // printf("%d",sizeof(int));
    memory = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("your %d th data\n>", i + 1);
        scanf("%d", memory + i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *(memory + i));
    }
}