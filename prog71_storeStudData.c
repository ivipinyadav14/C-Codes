// WAP to store the data of students of 3 branch
#include<stdio.h>
#include<string.h>

struct student{
    char name[20];
    int roll;
    float cgpa;
};

int main()
{
    struct student CE[50];
    struct student IT[50];
    struct student ECE[50];

    strcpy(CE[0].name, "Vipin");
    CE[0].roll = 2001;
    CE[0].cgpa = 8.4;
    printf("Name of Stud1 in CE : %s\n",CE[0].name);
    printf("Roll of Stud1 in CE : %d\n",CE[0].roll);
    printf("CGPA of Stud1 in CE : %f\n",CE[0].cgpa);

    strcpy(CE[1].name, "Ganesh");
    CE[1].roll = 1957;
    CE[1].cgpa = 6.0;
    printf("\nName of Stud2 in CE : %s\n",CE[1].name);
    printf("Roll of Stud2 in CE : %d\n",CE[1].roll);
    printf("CGPA of Stud2 in CE : %f\n",CE[1].cgpa);

    return 0;

} 