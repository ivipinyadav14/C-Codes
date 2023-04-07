// WAP to find the sum of digits of a number

#include <stdio.h>

int findSum(int n)
{
    int m, sum;
    if (n == 0)
    {
        return 0;
    }
    m = n % 10;
    sum = m + findSum(n / 10);
    return sum;
}
int mysum(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    return n % 10 + mysum(n / 10);
}
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    // int result = findSum(n);
    int result = mysum(n);
    printf("Sum of digits of given number is %d", result);
    return 0;
}
