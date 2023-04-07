#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("prog80.txt", "r");

    //Reading and Writing to a file by -- character by charater
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));

    fclose(fptr);
    return 0;
}