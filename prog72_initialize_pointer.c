#include <stdio.h>
#include <string.h>

// structure is user defined data type(Collection of data type)
struct student
{
    int roll;
    char name[20];
    float cgpa;
};

void printInfo(struct student s1)
{
    printf("\nPrinting Information using Function\n");
    printf("Stud1 Name = %s\n", s1.name);
    printf("Stud1 Roll = %d\n", s1.roll);
    printf("Stud1 CGPA = %f\n", s1.cgpa);

    s1.roll = 20052001;
}

int main()
{
    struct student s1 = {2001, "Vipin", 8.4};
    struct student s2 = {1957, "Gaitonde", 8.4};
    printf("Stud1 Name = %s\n", s1.name);
    printf("Stud1 Roll = %d\n", s1.roll);
    printf("Stud1 CGPA = %f\n", s1.cgpa);

    struct student *ptr; // printing the name and roll using pointer.
    ptr = &s1;
    printf("\nStud1 Name using Pointer = %s\n", (*ptr).name);
    printf("Stud1 Roll using Pointer = %d\n", (*ptr).roll);

    printf("\nStud1 Name using -> = %s\n", ptr->name); // Using arrow operator
    printf("Stud1 Roll using -> = %d\n", ptr->roll);

    printInfo(s1);   // function call -- call by value
    printf("\nStud1 Roll after changing in Func = %d\n",s1.roll); // original value not changred

    printf("\nStud2 Name = %s\n", s2.name);
    printf("Stud2 Roll = %d\n", s2.roll);
    printf("Stud2 CGPA = %f\n", s2.cgpa);

    return 0;
}