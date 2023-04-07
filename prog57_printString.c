// WAP to create a String firstName and lastName to store detoils of user and print the all the characters using loop
#include <stdio.h>

void printString(char *arr)
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c\n", arr[i]);
    }
    printf("\n");
}

int main()
{
    char firstName[] = "VIPIN";
    char lastName[] = "YADAV";

    printString(firstName);
    printString(lastName);

    return 0;
}