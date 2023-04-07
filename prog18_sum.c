// WAP to calculate the sum of all odd numbers between 5 & 50 including 5 & 50.

#include <stdio.h>

int main()
{
    int i, sum = 0;

    for (i = 5; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        sum = sum + i;
    }
    printf("Sum is %d", sum);
    return 0;
}