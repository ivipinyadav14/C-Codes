// WAP to check if given character is present in a string or not.
#include <stdio.h>

void check(char str[], char ch2)
{
    int flag = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch2)
        {
            flag=1;
            // printf("Yes");
            // return;
        }
    }
    // printf("No");

    if (flag == 0){
        printf("No");
    }
    else{
        printf("Yes");
    }
}

int main()
{
    char str[100];
    char ch, ch2;
    int i = 0;
    printf("Enter the String :");
    while (ch != '\n')
    {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';

    printf("Enter the char to check :");
    scanf("%c", &ch2);
    check(str, ch2);
    return 0;
}