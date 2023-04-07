// WAF named slice , which takes a string and returns a sliced string from index n to m.
#include <stdio.h>

void slice(char str[], int n, int m)
{
    char newStr[100];
    int j = 0;
    for (int i = n; i <= m; i++)
    {
        newStr[j] = str[i];
        j++;
    }
    newStr[j] = '\0';
    puts(newStr);
}

int main()
{
    char str[100];
    int n, m;
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
    printf("Enter the index n & m : ");
    scanf("%d %d", &n, &m);
    slice(str, n, m);

    return 0;
}