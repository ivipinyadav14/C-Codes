//DMA-- Dynamic Memory ALlocation
#include<stdio.h>
#include<stdlib.h>

int main()
{
    // malloc  --> memmory allocation

    // int *ptr;
    // ptr = (int *) malloc (3 * sizeof(int));
    // ptr[0]=1;
    // ptr[1]=4;
    // ptr[2]=7;


    // calloc --> continuous memory allocation, initialized with zero.

    int *ptr;
    ptr = (int *) calloc(5,sizeof(int));

    for(int i=0; i<5; i++){
        printf("%d\n",ptr[i]);
    }
    return 0;
}