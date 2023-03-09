#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = (int *)malloc(4);
    *ptr = 20;
    printf("%d", *ptr);
    return 0;
}