// WAP to convert all lower case vowels to upper case in a string.
#include <stdio.h>

void upperCase(char str[])
{
    char newStr[50];
    int j = 0;
    for (int i = 0; str[i] != '\0' ; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            newStr[j] = str[i] - 32;
            j++;
        }
    }
    newStr[j]='\0';
    puts(newStr);
}

int main()
{
    char str[50];
    printf("Enter the string :");
    scanf("%s", &str);
    upperCase(str);
    return 0;
}