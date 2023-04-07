// WAP to find the square root of a number using function
#include <stdio.h>

float mysqrt(int n, float res)
{
    while (1)
    {
        if (n == 0 || n == 1)
            return 1;

        if (res * res == n)
        {
            return res;
        }
        if (res * res > n)
        {
            return res - 1;
        }
        res++;
    }
}
int main()
{
    float res = 1;
    res = mysqrt(49, res);
    printf("%0.2f", res);
}
