/*C program to find greater out of two numbers without using comparison*/

#include <stdio.h>
#include <math.h>

int main()
{
   int x, y;
   printf("Enter two numbers:\n");
   scanf("%d %d", &x, &y);

   int largest = ((x + y) + abs(x - y)) / 2; // abs finds Absolute Value
   printf("\nLargest number: %d\n", largest);
   return 0;
}