// WAP to calculate the percentage of a Student in subjects Science, Maths, Sanskrit
#include<stdio.h>

float percent( int a, int b, int c);

int main(){
    int a,b,c;
    printf("Enter the marks Obtained in :\n");
    printf("Science :");
    scanf("%d",&a);
    printf("Maths :");
    scanf("%d",&b);
    printf("Sanskrit :");
    scanf("%d",&c);

    printf("Total Percentage is %0.3f ", percent(a,b,c));

    return 0;
}

float percent( int a, int b, int c){
    float perct = (a+b+c)/3;
    return perct;  
}