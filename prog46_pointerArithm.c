#include <stdio.h>
int main()
{
    int age = 22;
    int *ptr = &age;
    int _age = 25;
    int *_ptr = &_age;

    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);
    ptr--;
    printf("%u\n", ptr);

    printf("Difference : %u\n", ptr - _ptr);

    _ptr = &_age;
    printf("Comparision : %d\n", ptr == _ptr);

    return 0;
}