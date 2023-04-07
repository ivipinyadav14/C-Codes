// WAP to print n  numbers using while loop

#include<stdio.h>

int main(){
    int i=0, num;
    printf("Enter a number : ");
    scanf("%d",&num);

    // while( i <= num ){
    //     printf("%d\n",i);
    //     i++;
    // }

    do{
        printf("%d\n",i);
        i++;
    }while( i <= num );
return 0;
}