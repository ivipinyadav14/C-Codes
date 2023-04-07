#include <stdio.h>

int main()
{
    // char name[20];
    // printf("Enter name : ");
    // scanf("%s", name);
    // printf("Your name is %s\n", name);


   // When we enter full name, it will ignore string after space
   // scanf cannot take input of multi word strings with spaces. So, gets(),  puts() - for output,  fgets() come into picture.


    // char str[20];
    // printf("\nEnter your name : ");
    // gets(str);
    // puts(str);


    char str2[20];
    printf("Enter your name : ");
    fgets(str2, 20, stdin);
    puts(str2);

    return 0;
}