#include<stdio.h>

int main(){
    char name[] = {'V', 'I', 'P', 'I', 'N', '\0'};
    char name2[] = {'V', 'I', 'P', 'I', 'N', ' ', 'Y', 'A', 'D', 'A', 'V', '\0'};

    char _name[] = "VIPIN";
    char _name2[] = "VIPIN YADAV";
    printf("%s\n",name);
    printf("%s",name2);

    printf("\n\n%s\n",_name);
    printf("%s\n",_name2);

    return 0;
}