#include <stdio.h>

int main()
{
    printf("\"Vipin\"\n");
    printf("%%d\n");
    printf("\\n");

    int x = 10, x1=10, y=10, y1=10;
    printf("\n%d %d %d", x++, x++, x++);
    printf("\n%d %d %d", x1--, x1--, x1--);
    printf("\n%d %d %d", ++y, ++y, ++y);
    printf("\n%d %d %d", --y1, --y1, --y1);

    return 0;
}
