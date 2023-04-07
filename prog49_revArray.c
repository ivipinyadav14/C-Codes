// WAP to reverse an Array
#include <stdio.h>

// void printRev(int arr[], int n)                   // It only print in reverse order but not reverse the Array.
// {
//     for (int i = n - 1; i >= 0; i--)
//     {
//         printf("%d\t", arr[i]);
//     }
// }

void reverseArr(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstVal = arr[i];
        int secondVal = arr[n - i - 1];
        arr[i] = secondVal;
        arr[n - i - 1] = firstVal;
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int main()
{
    int n;
    printf("Enter the size of Array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    reverseArr(arr, n);
    printArr(arr, n);
    return 0;
}