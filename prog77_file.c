#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("test.txt", "w");

    fclose(fptr);
    return 0;
}