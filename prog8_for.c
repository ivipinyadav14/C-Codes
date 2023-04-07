// WAP to print numbers from 0 to 10
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the upper limit to print numbers :");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}