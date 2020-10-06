#include <stdio.h>

int sumup(int number);

int sumup(int number){
    int n = 0; //to increment starting from 0
    int i = 0; //use this so the number variable can stay the same

    for(int n = 0; n < number; n++){
        i += n;
    }
    return number + i;
}

int main(){
    int a;

    printf("Enter an integer value: ");
    scanf("%d", &a);
    printf("The sum of all increments up to %d is %d\n", a, sumup(a));

    return 0;
}

//I feel like there's probably a simpler way to do it but this is what I got