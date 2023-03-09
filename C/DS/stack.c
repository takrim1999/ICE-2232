#include <stdio.h>
#include <stdlib.h>

#define MAX 4
int stack_array[MAX];
int top = -1;
int deleted_element = 0;
int main()
{
    push(1);
    push(2);
    push(4);
    pop();
    push(5);
    for (int i = 0; i < top + 1; i++)
    {
        printf("%d\,", stack_array[i]);
    }
    return 0;
}

void push(int data)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    else
    {
        top++;
        stack_array[top] = data;
    }
}

void pop()
{
    if (top < 0)
    {
        printf("Stack Underflow");
    }
    else
    {
        deleted_element = stack_array[top];
        top--;
        printf("%d has been deleted\n", deleted_element);
    }
}