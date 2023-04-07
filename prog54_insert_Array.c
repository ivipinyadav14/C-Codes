// WAP to insert an elemnt at the end of an Array.
#include <stdio.h>

void insert(int *arr, int n, int x)
{
    arr[n - 1] = x;
    printf("Array after Inserting : ");

    for (int j = 0; j < n; j++)
    {
        printf("%d\t", arr[j]);
    }
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
        if (i == 0)
        {
            printf("\nArray before Inserting : ");
        }
        printf("%d\t", arr[i]);
    }
    printf("\nEnter the element that is to be inserted : ");
    scanf("%d", &x);
    insert(arr, n, x);
    return 0;
}