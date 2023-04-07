// Write 2 programs, one to print "hello" and another to print "goodbye"
#include<stdio.h>

// Declaration
void printHello();
void printGoodbye();

int main(){

    printHello();          // Func Call
    printGoodbye();
    return 0;
}


//Func Definition
void printHello(){
    printf("Hello!\n");
}

void printGoodbye(){
    printf("Goodbye!");
}