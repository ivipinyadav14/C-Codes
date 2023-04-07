// Write a function to print n terms of fibonacci sequence
#include <stdio.h>

int fib(int n);

int main()
{
    int n;
    printf("Enter the nth term :");
    scanf("%d", &n);
    printf("Fibonacci Sequence given term is :%d", fib(n));
    return 0;
}

int fib(int n)
{

    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    int fibNm1 = fib(n - 1);
    int fibNm2 = fib(n - 2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}