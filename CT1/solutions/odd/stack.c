#include <stdio.h>
#include <stdlib.h>

#define MAX 500
int stack_array[MAX];
int top = -1;
int deleted_element = 0;
int main()
{
    int temp;
    for (int i = 0; i < MAX; i++)
    {
        printf("PUSH : ");
        scanf("%d", &temp);
        if (temp == 113)
            break;
        else if (temp > 0)
        {
            push(temp);
        }
        else
            printf("You are not allowed to push that, please try again\n");
    }

    for (int i = 0; i < top + 1; i++)
    {
        printf("%d\,", stack_array[i]);
    }
    return 0;
}

void push(char data)
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
        printf("%c has been deleted\n", deleted_element);
    }
}