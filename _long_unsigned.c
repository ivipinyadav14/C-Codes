#include <stdio.h>
#include <math.h>

unsigned long long int sumDig(unsigned long long  int result)
{
    unsigned long long int sum;
    unsigned long long int dig = log10(result) + 1;
    while (dig > 1)
    {
        sum = 0;
        do
        {
            sum += result % 10;
            result /= 10;
            dig--;
        } while (dig > 0);
        result = sum;
        dig = log10(result) + 1;
    }
    return result;
}

int main()
{
    int n;
    printf("Enter a num :");
    scanf("%d", &n);
    unsigned long long int result = (unsigned long long int)pow(2, n);
    printf("%lld\n", result);
    printf("%lld", sumDig(result));

    return 0;
}
