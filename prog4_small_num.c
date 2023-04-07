// WAP to print smallest number

#include<stdio.h>

int main(){
    int x,y,z;
    printf("Enter any two numbers : \n");
    scanf("%d %d",&x,&y);
    z = (x < y) * x + ( y < x ) * y;
    printf("Smallest number is %d",z);

    return 0;
}