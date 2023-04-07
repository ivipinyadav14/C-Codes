// WAP to count the occurence of vowel in a string.
#include <stdio.h>

int countVowel(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == '0' || str[i] == 'u')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char str[100];
    char ch;
    int i = 0;
    printf("Enter the String :");
    while (ch != '\n')
    {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    printf("Number of vowels is %d",countVowel(str));

    return 0;
} 