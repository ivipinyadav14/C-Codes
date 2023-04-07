// WAP to print all letters in english alphabet using pointer.

#include <stdio.h>

void printAlphabet(char a)
{
    char *ch = &a;
    while (*ch <= 'Z')
    {
        printf("%c ", *ch);
        *ch = *ch + 1;
    }
}
int main()
{
    char a = 'A';
    printAlphabet(a);

    return 0;
}