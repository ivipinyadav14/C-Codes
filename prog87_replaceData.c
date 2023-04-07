// Replace the data of file used in prog86 with the number vowels present in the string.
#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("prog86.txt", "r");

    char str[10];
    fscanf(fptr, "%s", &str);
    fclose(fptr);

    fptr = fopen("prog86.txt", "w");
    int count=0;
    char newStr[10];
    int a =0;
    for( int i=0; i<10; i++){
        if( str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ){
            count++;
            // newStr[a]=str[i];
            fprintf(fptr, "Vowels : %c\n", str[i]);
            // a++;

        }
    }


    fprintf(fptr, "Number of vowels is %d",count);

    fclose(fptr);
    return 0;
}