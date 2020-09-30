#include <stdio.h>
#include <math.h>

int main(){
    char loudness = -30;
    float amp;
    amp = pow (10, loudness/10);

    printf("The loudness of %d is %f", loudness, amp);
    //I don't have the book so I'm not sure if that's the right equation)
}