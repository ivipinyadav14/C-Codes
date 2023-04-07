// WAP to find if a character entered by user is upper case or not

#include<stdio.h>

int main(){
    char c;
    printf("Enter any character : ");
    scanf("%c",&c);

    if( c >= 'A' && c <= 'Z')          //c >= 65 && c <= 90
         printf("Upper Case");

    else if( c >= 'a' && c <= 'z')     // c >= 97 && c <= 122
         printf("Lower Case");

    else
         printf("Not a English Letter");

    return 0;
}