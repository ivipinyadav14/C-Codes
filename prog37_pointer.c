// Pointers

#include<stdio.h>

int main(){
    int age = 22;
    int *ptr = &age;
    int x = *ptr;
    printf("Result :%d\n",x);

    printf("\n%p\n",ptr);    // print the address stored in ptr in hexadecimal
    printf("%u\n",ptr);    // print the address stored in ptr (value stored in ptr) in decimal
    printf("%p\n",&age);   // print the address of variable age
    printf("%p\n",&ptr);   // print the address of ptr (pointer)

    // VALUE AT ADDRESS OPERTOR

    printf("\n%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));
    return 1;
}