// WAP to find the price of an item after adding 18% GST using function
#include <stdio.h>

void price(float p);

int main()
{
    float p;
    printf("Enter the price of item :");
    scanf("%f", &p);
    printf("Price of item before GST : %f",p);
    price(p);
    return 0;
}

void price(float p)
{
    p = p + (0.18 * p);
    printf("\nPrice is : %0.3f", p);
}