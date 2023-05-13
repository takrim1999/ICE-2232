#include <stdio.h>

// void print(struct point array[]);

struct point
{
    int x;
    int y;
};

int main()
{
    struct point p[2] = {{0, 0}, {3, 4}};
    // printf("%d", sizeof(coordinates));
    print(p);
    return 0;
}
void print(struct point array[])
{
    for (int i = 0; i < 2; i++)
    {
        printf("x: %d\ny: %d\n", array[i].x, array[i].y);
    }
}