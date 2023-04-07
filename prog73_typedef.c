#include <stdio.h>

// Giving Nickname of a structure.  Also known as alias.
typedef struct student
{
    int roll;
    char name[20];
    float cgpa;
} stu;

int main()
{
    stu s1 = {2001, "VIPIN", 8.4};
    printf("Name = %s", s1.name);

    return 0;
}