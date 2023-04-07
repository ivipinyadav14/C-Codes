// WAP to finnd if a file exists or not.
#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("hello.txt","r");
    if( fptr == NULL ){
        printf("File doesn't exist.");
    } else{
        printf("File exist.");
    }
    fclose(fptr);
    return 0;
}