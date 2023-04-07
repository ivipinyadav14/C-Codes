// WAP to find sum of first n natual numbers

#include <stdio.h>

int main()
{
    int i, n, sum=0, j;
    printf("Enter the number :");
    scanf("%d",&n);
    
    printf("Number in reverse order is :\n");
    for (i = n; i >= 1; i--)
    {
        sum = sum+i;  // sum += i;
        printf("%d\n",i);
    }
        printf("\nSum is %d",sum);

    // for( i=1, j=n; i<=n && j>=1; i++, j--){
    //     sum += i;
    //     printf("%d\n",j);
    // }
    // printf("Sum is %d",sum);
    return 0;
}