#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("prog79.txt", "r");
    // char ch;
    // fscanf(fptr, "%c", &ch);
    // printf("Characters = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("Characters = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("Characters = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("Characters = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("Characters = %c\n", ch);

    char str[5];
    fscanf(fptr, "%s", &str);
    printf("%s",str);

    fclose(fptr);
    return 0;
}