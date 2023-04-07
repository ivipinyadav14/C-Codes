// WAP to input student information from user and enter it to a file.
#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Student_Details.txt", "w");

    char name[20];
    int roll;
    float cgpa;
    printf("Enter your name : ");
    scanf("%s",&name);
    printf("Enter  your roll no. : ");
    scanf("%d",&roll);
    printf("Enter your CGPA : ");
    scanf("%f",&cgpa);

    fprintf(fptr, "Student name = %s\n", name);
    fprintf(fptr, "Student roll no = %d\n", roll);
    fprintf(fptr, "Student CGPA = %f\n", cgpa);

    fclose(fptr);
    return 0;
}