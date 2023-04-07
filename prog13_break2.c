/* WAP to keep taking input from user until user enters a number 
that is multiple of 7. */
#include<stdio.h>

int main(){
    int n;

    for ( int i=0; 1; i++ ){
        printf("Enter a number :");
        scanf("%d",&n);

        if( n%7 == 0 ){
            break;
        }
    }
    printf("Program Terminated!");
return 0;
}