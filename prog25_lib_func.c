// Use linbrary function to find the square of number given by user
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    printf("Square of given number is %f", pow(n, 2));
    return 0;
}
