// WAP to take user's name as input and print its length.
#include <stdio.h>
#include<string.h>

int lengthCount(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count - 1;
}

int main()
{
    char name[50];
    printf("Enter your name :");
    fgets(name, 50, stdin);
    printf("Length is %d\n", lengthCount(name));

int length = strlen(name);
    printf("Length using lib func is %d",length);
    return 0;
}
