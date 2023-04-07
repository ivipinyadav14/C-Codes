// WAP to write all the odd numbers from 1 to n in a file.
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("prog84.txt", "w");

    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
           // printf("%d", i);
            fprintf(fptr, "%d\t", i);
        }
    }

    fclose(fptr);
    return 0;
}