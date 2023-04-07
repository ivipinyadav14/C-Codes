// WAP to calculate area of square,circle and rectangle
#include <stdio.h>

int square(int s)
{
    return s * s;
}

float circle(int r)
{
    return 3.14 * r * r;
}

int rect(int l, int b)
{
    return l * b;
}

int main()
{
    int s, r, l, b;
    printf("Enter length of a side :");
    scanf("%d", &s);
    printf("Area of square is :%d", square(s));
    printf("\nEnter radius :");
    scanf("%d", &r);
    printf("Area of circle :%0.2f", circle(r));
    printf("\nEnter length and breadth of rectangle :\n");
    scanf("%d %d", &l, &b);
    printf("Area of rectangle :%d", rect(l,b));
    return 0;
}
