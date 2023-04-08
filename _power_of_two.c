// WAP to check if entered number is power of 2.
#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter a number :");
    scanf("%d", &n);
    int flag = 1;

    // for (i = 2; i <= n; i *= 2)
    // {
    //     // printf("%d\n",i);
    //     if (i == n)
    //     {
    //         flag = 0;
    //         break;
    //     }
    // }



    //  while(n>1)
    // {
    //     if(n%2!=0)
    //     {
    //         flag=0;
    //         break;
    //     }
    //     printf("%d\n",n);
    //     n/=2;
    // }


    // if (flag == 1)
    // {
    //     printf("Power of 2");
    // }
    // else
    // {
    //     printf("Not Power of 2");
    // }

    (!(n&(n-1)))?printf("Power of 2"):printf("Not a Power of 2");
    return 0;
}



