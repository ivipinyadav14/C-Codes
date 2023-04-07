// WAP to find factorial of n using recursion
#include<stdio.h>

int fact( int n ){
    if(n==1){
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN = factNm1*n;
}

int main(){
    int m;
    printf("Enter the number :");
    scanf("%d",&m);
    printf("Factorial of %d is %d",m, fact(m));

    return 0;
}