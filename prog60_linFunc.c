// Library functions in C.
#include<stdio.h>
#include<string.h>

int main(){
    char str1[] = "Hello";
    char str2[] = "Vipin";

    // Comcatenation
    strcat(str1, str2);
    puts(str1);

    // comparison
    int comp = strcmp(str1, str2);
    printf("%d\n",comp);

    // Copy the old string value to new string
    strcpy(str1, str2);
    puts(str1);


    return 0;
}