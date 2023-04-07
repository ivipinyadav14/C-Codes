// WAP to find the maximum number between two numbers using function and pointer

#include <stdio.h>

void findMax(int a, int b, int *max)
{
    *max = (a > b) * a + (a < b) * b;
}

int main()
{
    int a, b, max;
    printf("Enter any two numbers : \n");
    scanf("%d %d", &a, &b);
    findMax(a, b, &max);
    printf("Max Number is %d", max);

    return 0;
}