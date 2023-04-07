// Write a function to find the sum, product and average of two numbers.
// Print that average in the main function.
#include<stdio.h>

void func( int a, int b, int *sum, int *product, int *avg )
{
     *sum = a + b;
     *product = a * b;
     *avg = (a + b)/2;
}

int main(){
    int a, b, sum, product, avg;
    printf("Enter any two numbers : \n");
    scanf("%d %d", &a, &b);
    func(a, b, &sum, &product, &avg);
    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);
    printf("Average = %d\n", avg);
    return 0;
}