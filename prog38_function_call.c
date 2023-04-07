// Function call

#include<stdio.h>

 // Call by value
void square( int n ){
    n = n * n;
    printf("Square = %d\n",n);
}

// Call by reference
void _square( int *n ){
    *n = (*n) * (*n);
    printf("\nSquare = %d\n", *n);  
}

int main(){
    int number=5;
    square(number);                 
    printf("Number = %d\n", number); 

    _square(&number);
    printf("Number = %d\n", number); 

    return 0;
    
}