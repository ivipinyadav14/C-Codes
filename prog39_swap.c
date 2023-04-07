// Swap two numbers, a & b;
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;
    printf("Enter any two numbers : \n");
    scanf("%d%d", &x, &y);
    printf("Before swapping : %d %d\n", x, y);
    swap(&x, &y);
    printf("After Swapping : %d %d", x, y);

    return 0;
}
