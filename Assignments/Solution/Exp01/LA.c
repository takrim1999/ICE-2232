#include <stdio.h>

// 0.Implementation of Linear array
// DATA[N]
// N = 10;
int N = 10;
int DATA[10] = {9, 1, 2, 5, 3, 4, 0, 7, 6, 8};
int main()
{
    // linear();
    // binary();
    // bubble();
    // insert();
    del();

    return 0;
}

void linear()
{
    // 1. Searching(linear):
    // Search item ITEM, location of item (if found) LOC
    int LOC = 0, ITEM = 0;
    printf("Searching for which item?\n>");
    scanf("%d", &ITEM);
    while (LOC < N)
    {
        if (DATA[LOC] == ITEM)
        {
            printf("found in %d\n", LOC);
            break;
        }
        LOC++;
    }
    if (N == LOC)
    {
        printf("Not Found\n");
    }
    // end of linear search
}

void binary()
{
    int START = 0, END = N, LOC = 0, ITEM = 0, flag = 0;
    LOC = (START + END) / 2;
    printf("Searching for which item?\n>");
    scanf("%d", &ITEM);
    while ((START <= END) && (DATA[LOC] != ITEM))
    {
        if (DATA[LOC] < ITEM)
        {
            START = LOC + 1;
            LOC = (START + END) / 2;
        }
        else if (DATA[LOC] > ITEM)
        {
            END = LOC - 1;
            LOC = (START + END) / 2;
        }
    }
    if (DATA[LOC] == ITEM)
        printf("found in %d\n", LOC);
    else
        printf("Not found\n");
}

void bubble()
{
    for (int i = 0; i < N; i++)
    {
        printf("%d", DATA[i]);
    }
    printf("\n");
    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < N - 1; i++)
        {
            if (DATA[i] > DATA[i + 1])
            {
                int temp = 0;
                temp = DATA[i];
                DATA[i] = DATA[i + 1];
                DATA[i + 1] = temp;
            }
            // printf("%d vs %d\n", DATA[i], DATA[i + 1]);
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d", DATA[i]);
    }
    printf("\n");
}

void insert()
{
    int position = 0, ITEM = 0;
    for (int i = 0; i < N; i++)
    {
        printf("%d", DATA[i]);
    }
    printf("\n");
    printf("Position you want to insert your data?\n>");
    scanf("%d", &position);
    printf("Item you want to insert?\n>");
    scanf("%d", &ITEM);
    for (int i = N; i > position; i--)
    {
        DATA[i] = DATA[i - 1];
    }
    DATA[position] = ITEM;
    N++;
    for (int i = 0; i < N; i++)
    {
        printf("%d", DATA[i]);
    }
}

void del()
{
    int position = 0, ITEM = 0;
    for (int i = 0; i < N; i++)
    {
        printf("%d", DATA[i]);
    }
    printf("\n");
    printf("Position you want to delete from data?\n>");
    scanf("%d", &position);
    ITEM = DATA[position];
    for (int i = position; i < N; i++)
    {
        DATA[i] = DATA[i + 1];
    }
    N--;
    for (int i = 0; i < N; i++)
    {
        printf("%d", DATA[i]);
    }
    printf("\n");
    printf("%d is deleted", ITEM);
}