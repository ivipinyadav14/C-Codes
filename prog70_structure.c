#include<stdio.h>
#include<string.h>

struct student{
    char name[20];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1;

    strcpy(s1.name, "Vipin");
    s1.roll = 20052001;
    s1.cgpa = 8.4;
    printf("Name is %s\n",s1.name);
    printf("Roll is %d\n",s1.roll);
    printf("CGPA is %f\n",s1.cgpa);

    struct student s2;
    strcpy(s2.name, "Sachin");
    s2.roll = 20051998;
    s2.cgpa = 8.5;
    printf("\nName is %s\n",s2.name);
    printf("Roll is %d\n",s2.roll);
    printf("CGPA is %f",s2.cgpa);

    return 0;

}