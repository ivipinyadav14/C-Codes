// WAP to store tables of 2 and 3 in a 2D Array
#include <stdio.h>

void storeTable(int table[][10], int n1, int n2)
{
    for (int i = 0; i < 10; i++)
    {
        table[0][i] = n1 * (i + 1);
    }

    for (int j = 0; j < 10; j++)
    {
        table[1][j] = n2 * (j + 1);
    }
}

int main()
{
    int n1, n2, table[2][10];
    printf("Enter two numbers to display their Table: ");
    scanf("%d %d",&n1, &n2);

    storeTable(table, n1, n2);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", table[0][i]);
    }

    printf("\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", table[1][i]);
    }

    return 0;
}