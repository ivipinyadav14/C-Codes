// WAP to read a string from file and output it to the user.
#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("prog86.txt", "r");

    char str[50];
    fscanf(fptr, "%s", &str);
    printf("String in file is %s",str);

    fclose(fptr);
    return 0;
}