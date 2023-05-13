#include <stdio.h>
int main()
{
    struct student
    {
        char name[20];
        int age;
        int roll;
        float mark;
    };
    struct student s1 = {"rupok", 23, 1911177149, 43.7};
    print(s1.name, s1.age, s1.roll, s1.mark);
    return 0;
}

void print(char name[], int age, int roll, float mark)
{
    printf("Name is %s\n", name);
    printf("Age is %d\n", age);
    printf("Roll is %d\n", roll);
    printf("Mark is %f\n", mark);
}