// WAP to enter address (house no., block, city, state)
#include <stdio.h>

typedef struct addDetails
{
    int houseNo;
    int block;
    char city[20];
    char state[20];
} add;

void printInfo(add addr)
{
    printf("Address of Persons: %d, %d, %s, %s\n", addr.houseNo, addr.block, addr.city, addr.state);
}

int main()
{
    add addr[3];
    printf("Enter the details of Person 1 : \n");
    scanf("%d", &addr[0].houseNo);
    scanf("%d", &addr[0].block);
    scanf("%s", &addr[0].city);
    scanf("%s", &addr[0].state);

    printf("Enter the details of Person 2 : \n");
    scanf("%d", &addr[1].houseNo);
    scanf("%d", &addr[1].block);
    scanf("%s", &addr[1].city);
    scanf("%s", &addr[1].state);

    printf("Enter the details of Person 3 : \n");
    scanf("%d", &addr[2].houseNo);
    scanf("%d", &addr[2].block);
    scanf("%s", &addr[2].city);
    scanf("%s", &addr[2].state);

    printInfo(addr[0]);
    printInfo(addr[1]);
    printInfo(addr[2]);

    return 0;
}