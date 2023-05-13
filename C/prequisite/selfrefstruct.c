#include <stdio.h>

struct student
{
    char name[20];
    int roll;
    struct student *friend;
};
int main()
{
    struct student s1 = {"rupok", 1911177149, NULL};
    struct student s2 = {"partho", 1803119, &s1};
    printf("name of student: %s and name of is friend: %s", s2.name, s2.friend->name);
    return 0;
}