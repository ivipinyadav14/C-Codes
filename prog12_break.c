// WAP to keep taking numbers from user until user enters an odd number

#include <stdio.h>

int main()
{
    int n, i;

    for (i = 0; 1; i++)
    {
        printf("Enter a number :");
        scanf("%d", &n);

    if (n % 2 != 0)
    {
        break;
    }
    }

    // do
    // {
    //     printf("Enter a number :");
    //     scanf("%d", &n);

    //     if (n % 2 != 0)
    //     {
    //         break;
    //     }
    // } while (1);
    printf("Program terminated!");
    return 0;
}