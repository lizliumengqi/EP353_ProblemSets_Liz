#include <stdio.h>

int global = 0;

void increment();

void increment(){
    static int sint = 0;
    int local = 0;

    printf("%d\t|\t%d\t|\t%d", local, sint, global);

    local += 1;
    sint += 1;
    global += 1;
}

int main(){
    printf("local\t|\tsint\t|\tglobal\n---------------------------------------\n");
    increment();
    printf("\n");
    increment();
    printf("\n");
    increment();
    printf("\n");
    increment();
    printf("\n");
    increment();
    printf("\n");
    increment();
    printf("\n");
    increment();
    printf("\n");
    increment();
    printf("\n");
    increment();
    printf("\n");
    increment();
    printf("\n");
}