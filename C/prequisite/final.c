#include <stdio.h>
#include <stdlib.h>
struct point
{
    int x;
    int y;
};

struct point *fun(int a, int b)
{
    struct point *ptr = (struct point *)malloc(sizeof(struct point));
    ptr->x = a + 5;
    ptr->y = b * 2;
    return ptr;
}

int main()
{
    struct point *p1;
    struct point *p2;
    p1 = fun(5, 6);
    p2 = fun(10, 20);
    print(p1);
    print(p2);
    free(p1);
    free(p2);
    return 0;
}

void print(struct point *p)
{
    printf("x: %d\ny: %d\n", p->x, p->y);
}