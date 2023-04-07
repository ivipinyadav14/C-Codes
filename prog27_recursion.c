// WAP to print Hello 5 times using recursion
#include <stdio.h>

void printHW(int count);


int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    printHW(n);
    return 0;
}

void printHW(int count)
{
    if (count == 0)
    {
         return ;
    }
    printf("Hello!\n");
    printHW(count - 1);
}
