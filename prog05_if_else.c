// WAP to assign grades to students

#include<stdio.h>

int main(){
    int num;
    printf("Enter the Mark : ");
    scanf("%d",&num);

    if( num < 30 && num >= 0 ){
        printf("Grade = C");
    }
    else if( num >= 30 && num <70 ){
        printf("Grade = B");
    }
    else if( num >=70 && num < 90 ){
        printf("Grade = A");
    }
    else if( num >= 90 && num <= 100 ){
        printf("Grade = A+");
    }
    else{
        printf("Wrong Input");
    }
    return 0;
}