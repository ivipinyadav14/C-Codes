// WAP to allocate a memory of size n, where n is entered by user.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("%d", ptr[i]);
    }

    free(ptr);     // release the memory occupied by ptr

    printf("\n");
    ptr = (int *)calloc(3, sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        printf("%d", ptr[i]);
    }

    return 0;
}