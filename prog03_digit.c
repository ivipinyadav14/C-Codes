// WAP to check if given number is digit or not

#include<stdio.h>
#include<stdlib.h>

int main(){
    char x;
    printf("Enter anything : ");
    scanf("%c",&x); 
    printf("%d",x>47 && x<58);

    // if(x>47 && x<58)
    // printf("yes");
    // else
    // printf("not ");

    
    return 0;
}

//Another method is using isdigit library function
