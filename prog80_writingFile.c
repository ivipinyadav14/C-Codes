#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("prog80.txt", "w");  // if we write "a" instead of "w", then it will add the characters without erasing previous one.

    // fprintf(fptr, "%c", 'A');
    // fprintf(fptr, "%c", 'P');
    // fprintf(fptr, "%c", 'P');
    // fprintf(fptr, "%c", 'L');
    // fprintf(fptr, "%c", 'E');

    // SECOND METHOD
    fputc('A', fptr);
    fputc('P', fptr);
    fputc('P', fptr);
    fputc('L', fptr);
    fputc('E', fptr);

    fclose(fptr);
    return 0;
}