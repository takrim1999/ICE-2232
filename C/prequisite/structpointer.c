#include <stdio.h>
int main()
{
    struct alphanum
    {
        char alphabet;
        int number;
    };
    struct alphanum first;
    grab(&first.alphabet, &first.number);
    printf("Alphabate is %c\nNumber is %d\n", first.alphabet, first.number);
    return 0;
}

void grab(char *alpha, int *num)
{
    printf("your alphabet?\n>");
    scanf("%c", alpha);
    printf("your number?\n>");
    scanf("%d", num);
}