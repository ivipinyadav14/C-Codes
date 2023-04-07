// Formate the data of 3 students(name, roll, age, cgpa) in a table like structure in a file.
#include <stdio.h>

struct student
{
    char name[50];
    int roll;
    int age;
    float cgpa;
};

int main()
{
    FILE *fptr;
    fptr = fopen("prog88.txt", "w");

    struct student s1;
    struct student s2;
    struct student s3;
    printf("Enter the name of Stud 1: ");
    scanf("%s", &s1.name);
    printf("Enter the roll num of stud 1:");
    scanf("%d", &s1.roll);
    printf("Enter the age of Stud 1: ");
    scanf("%d", &s1.age);
    printf("Enter the CGPA of Stud 1: ");
    scanf("%f", &s1.cgpa);

    printf("\nEnter the name of Stud 2: ");
    scanf("%s", &s2.name);
    printf("Enter the roll num of stud 2:");
    scanf("%d", &s2.roll);
    printf("Enter the age of Stud 2: ");
    scanf("%d", &s2.age);
    printf("Enter the CGPA of Stud 2: ");
    scanf("%f", &s2.cgpa);

    printf("\nEnter the name of Stud 3: ");
    scanf("%s", &s3.name);
    printf("Enter the roll num of stud 3:");
    scanf("%d", &s3.roll);
    printf("Enter the age of Stud 3: ");
    scanf("%d", &s3.age);
    printf("Enter the CGPA of Stud 3: ");
    scanf("%f", &s3.cgpa);

    fprintf(fptr, "Name\tRoll\tAge\tCGPA");
    fprintf(fptr, "\n%s\t", s1.name);
    fprintf(fptr, "%d\t", s1.roll);
    fprintf(fptr, "%d\t", s1.age);
    fprintf(fptr, "%0.2f\n", s1.cgpa);

    fprintf(fptr, "%s\t", s2.name);
    fprintf(fptr, "%d\t", s2.roll);
    fprintf(fptr, "%d\t", s2.age);
    fprintf(fptr, "%0.2f\n", s2.cgpa);

    fprintf(fptr, "%s\t", s3.name);
    fprintf(fptr, "%d\t", s3.roll);
    fprintf(fptr, "%d\t", s3.age);
    fprintf(fptr, "%0.2f\n", s3.cgpa);

    fclose(fptr);
    return 0;
}