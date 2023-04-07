// WAP to check if a number is prime or not.
#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter a number :");
    scanf("%d", &n);

    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if (i == n / 2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not a prime");
    }
return 0;
}