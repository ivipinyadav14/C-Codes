// WAP to check if entered number is Armstrong number or not
#include <stdio.h>
#include <math.h>

int main()
{
    int num, sum=0, x, org_num;
    printf("Enter any number :");
    scanf("%d", &num);
    org_num = num;

    int digit = log10(num) + 1;

    while (num != 0)
    {
         x = num % 10;
         sum = sum + (float)pow(x, digit);
         num = num/10;

    }
    if ( org_num == sum ){
         printf("Given number is a Armstrong Number");
    }
    else
         printf("Given number is not a Armstrong Number");

    return 0;
}