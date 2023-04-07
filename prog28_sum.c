// WAP to find sum of first n natural numbers using recursion
#include <stdio.h>

int sum(int n);

int main()
{
    int x;
    printf("Enter a number :");
    scanf("%d", &x);
    printf("Sum of first %d natural numbers is %d", x, sum(x));

    return 0;
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int sumNm1 = sum(n - 1);
    int sumN = sumNm1 + n;
}