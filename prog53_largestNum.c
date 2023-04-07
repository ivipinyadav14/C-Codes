// WAP to print the largest numbers in an Array.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of Array : ");
    scanf("%d", &n);
    printf("Enter the elements in Array : ");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        
        printf("%d\t", arr[i]);
    }

    for ( int i=0; i < n; i++ ){
        if( arr[0] < arr[i]){
             arr[0]=arr[i];
        }
    }
    printf("\nLargest Number is %d",arr[0]);
    return 0;
}