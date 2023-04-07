// WAP to enter the price of three items and print their final price after adding GST
#include <stdio.h>

int main() 
{
    float price[3], final;

    printf("Enter the price of Items :\n");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("Price of item 1 is %0.3f\n", price[0]+(0.18*price[0]));
    printf("Price of item 2 is %0.3f\n", price[1]+(0.18*price[1]));
    printf("Price of item 3 is %0.3f\n", price[2]+(0.18*price[2]));
    return 0;
}

// Initiation of ARRAY
// int main(){
//     float price[] = {100,200,300};

//     printf("Price of item 1 is %0.3f\n", price[0]+(0.18*price[0]));
//     printf("Price of item 2 is %0.3f\n", price[1]+(0.18*price[1]));
//     printf("Price of item 3 is %0.3f\n", price[2]+(0.18*price[2]));
//     return 0;

// }