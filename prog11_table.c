// WAP to print the table of a number input by user

#include <stdio.h>

int main()
{
    int n, mul;
    printf("Enter a number :");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        mul = n * i;
        printf("%d * %d = %d\n", n, i, mul);
    }
    return 0;
}