// WAP to print "Namaste" if user is Indian and "Bonjour" if user is french

#include <stdio.h>

void printNam();
void printBon();

int main()
{
    char x;
    printf("Enter 'I' if You are Indian or 'F' if you are French :");
    scanf("%c", &x);

    if (x == 'I')
    {
        printNam();
    }
    else if (x == 'F')
    {
        printBon();
    }
    else
    {
        printf("Wrong Input");
    }
    return 0;
}

void printNam()
{
    printf("Namaste!");
}

void printBon()
{
    printf("Bonjour!");
}