// WAP to create your own power function
#include <stdio.h>

int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    return a * power(a, b - 1);
}


int mypower(int a, int b, int res)
{
    if (b <= 0)
    {
        return res;
    }
    if (b & 1) // b % 2 != 0
    {
        res *= a;
    }
    a *= a;
    mypower(a, b >> 1, res); // b /= 2
}

int main()
{
    int a, b, res = 1;
    printf("Enter the Number followed by Power : ");
    scanf("%d%d", &a, &b);
    res = mypower(a, b, res);
    printf("Result : %d", res);
    return 0;
}
