// WAP to find the salted form of password entered by the user if the salt is 123 and is added at the end.
#include <stdio.h>
#include<string.h>

void salting(char pswd[])
{
    char salt[] = "123";
    char newPswd[40];

    strcpy(newPswd, pswd);
    strcat(newPswd, salt);
    printf("Salted password is : "); 
    puts(newPswd);
}

int main()
{
    char pswd[20];
    printf("Enter your password :");
    scanf("%s", &pswd);
    salting(pswd);

    return 0;
}