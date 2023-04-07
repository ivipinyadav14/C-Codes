// WAP to print the elments of an array in reverse order.
#include <stdio.h>

void revArray(int *a, int *b, int *c, int *d, int *e)
{
    int temp = *a;
    *a = *e;
    *e = temp;
    temp = *b;
    *b = *d;
    *d = temp;
}

int main()
{
    int a = 1, b = 2, c = 3, d = 4, e = 5;
    revArray(&a, &b, &c, &d, &e);
    printf("%d %d %d %d %d", a, b, c, d, e);
}