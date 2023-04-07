// WAP to print the factorial of a number n
#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter a number :");
    scanf("%d", &n);
    
    int fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("Factorial of %d is %d",n,fact);
    return 0;
}