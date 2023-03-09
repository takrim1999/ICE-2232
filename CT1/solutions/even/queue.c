#include <stdio.h>
#define MAX 500
char q_array[MAX];
int first = -1, last = -1;
int main()
{
    char temp;
    for (int i = 0; i < MAX; i++)
    {
        printf("Insert: ");
        scanf("%c ", &temp);
        if (temp == 'q')
            break;
        else
        {
            enq(temp);
        }
    }

    for (int i = first; i < last + 1; i++)
    {
        printf("%c\n", q_array[i]);
    }
    return 0;
}

void enq(char data)
{
    if (last + 1 == MAX)
    {
        printf("QUEUE Overflow\n");
    }
    else
    {
        if (first == -1)
        {
            first = 0;
        }
        last++;
        q_array[last] = data;
    }
}

void deq()
{
    if (first == -1)
    {
        printf("QUEUE Underflow\n");
    }
    else
    {
        first++;
    }
}