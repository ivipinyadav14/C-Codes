// WAP to replace numbers a & b already written in a file by their sum.
#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("prog85.txt", "r");

    int a, b;
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);
    fclose(fptr);

    fptr = fopen("prog85.txt", "w");
    int sum = a+b;
    fprintf(fptr, "Sum is %d", sum);

    fclose(fptr);
    printf("Updated the value in File.");
    return 0;
}