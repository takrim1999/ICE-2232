#include <stdio.h>
#define MAX 3
int q_array[MAX];
int first = -1, last = -1;
int main()
{
    enq(7);
    enq(8);
    enq(9);
    enq(2);
    enq(5);
    deq();
    deq();
    deq();
    deq();
    deq();
    for (int i = first; i < last + 1; i++)
    {
        printf("%d\n", q_array[i]);
    }
    return 0;
}

void enq(int data)
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