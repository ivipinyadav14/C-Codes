// WAP to print prime numbers in a range.
#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, m, n;
    printf("Enter the Lower Limit of range :");
    scanf("%d", &m);
    printf("Enter the Upper Limit of range :");
    scanf("%d", &n);

    for (i = m; i <= n; i++)
    {
        int flag = 1;
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
