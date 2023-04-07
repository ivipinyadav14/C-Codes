// WAP to print the reverse of a table n
#include<stdio.h>

int main()
{
    int i, n, mul;
    printf("Enter number :");
    scanf("%d",&n);

    for( i=10; i>=1; i--){
        mul = i*n;
        printf("%d * %d = %d\n",n,i,mul);
    }
return 0;
}