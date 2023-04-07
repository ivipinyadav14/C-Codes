// WAP to check if given input is natural number or not.
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
    char a[100];
    printf("Enter any number : ");
    scanf("%s", &a);

    int k = 1;
    int count = 0, length = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        length++;
        if (a[0] == '0' && a[i] == '0')
        {
            count++;
        }
        if (isdigit(a[i]) == 0)
        {
            k = 0;
            break;
        }
    }
    // printf("%d , %d",count,length);
    if (count == length)
    {
        k = 0;
    }
    if (a[0] == '0' && a[1] == '\0')
    {
        k = 0;
    }
    (k == 1) ? printf("Given number is a natural number") : printf("Not a natural number");

    return 0;
}