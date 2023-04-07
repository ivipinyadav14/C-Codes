// WAPT to check if a number is dividible by 2 or not

#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number :");
    scanf("%d", &x);

    if (x % 2 == 0)
    {
        printf("It is divisible by 2");
    }
    else
    {
        printf("It is not dividible by 2");
    }
    return 0;
}