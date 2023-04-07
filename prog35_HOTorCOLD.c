// WAP to print HOT or COLD depending upon temperature endered by user using function
#include <stdio.h>

void hotORcold(int temp)
{
    if (temp > 27)
    {
        printf("HOT");
    }
    else
    {
        printf("COLD");
    }
}

int main(){
    int temp;
    printf("Enter the temperature :");
    scanf("%d",&temp);
    hotORcold(temp);

    return 0;
}