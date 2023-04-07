// WAP to create a structure that store complex number (Use operator arrow).
#include<stdio.h>

struct complex
{
    int real;
    int img;
};

int main()
{
    struct complex num = {3, 4};
    struct complex *ptr = &num;

    printf("Real part  of num is %d\n",ptr->real);
    printf("Imaginary part  of num is %di\n",ptr->img);

    return 0;
}