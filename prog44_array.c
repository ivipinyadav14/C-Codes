// Array
#include<stdio.h>

int main(){
    int marks[3];

    printf("Enter marks in Phy : ");
    scanf("%d",&marks[0]);

    printf("Enter marks in Chem : ");
    scanf("%d",&marks[1]);

    printf("Enter marks in Math : ");
    scanf("%d",&marks[2]);

    int avg = (marks[0] + marks[1] + marks[2])/3;
    printf("Average mark is %d",avg);

    return 0;
}