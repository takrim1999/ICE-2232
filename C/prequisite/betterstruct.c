#include <stdio.h>
struct point
{
    int x;
    int y;
};
struct point increment(struct point p)
{
    (p.x)++;
    (p.y)++;
    return p;
}
int main()
{
    struct point p1 = {5, 6};
    p1 = increment(p1);
    print(&p1);
    return 0;
}

void print(struct point *p)
{
    printf("X value is now %d\nY value is now %d\n", p->x, p->y);
}