// WAP to print average of three numbers

#include<stdio.h>

int main(){
    float a,b,c;
    printf("Enter three numbers :\n");
    scanf("%f %f %f",&a,&b,&c);

    float avg=(a+b+c)/3;
    printf("Average of given three numbers is %f",avg);
    return 0;
}