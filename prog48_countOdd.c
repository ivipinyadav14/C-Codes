// WAP to count odd numbers in an array
#include <stdio.h>

int countOdd(int arr[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{

    int n;
    printf("Enter the size of Array : ");
    scanf("%d", &n);
    printf("Enter the elements : ");
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Number of Odd num is %d", countOdd(arr, n));

    return 0;
}