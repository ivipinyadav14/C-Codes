// WAP to find, In an Array of numbers, how many times number 'X' occurs.
#include <stdio.h>

void func(int *arr, int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
            count++;
    }
    printf("Result : %d",count);
}

int main()
{
    int n, x;
    printf("Enter the size of Array : ");
    scanf("%d", &n);
    printf("Enter the elements in Array : ");
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to check occurance : ");
    scanf("%d", &x);
    func(arr, n, x);
    return 0;
}