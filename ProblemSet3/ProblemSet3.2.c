#include <stdio.h>

int main(){
    char note = 'C';
    int pitchClass;

    switch (note){
        case 'C':
            pitchClass = 0;
            printf("A note %d translates to %d in pitch class\n", note, pitchClass);
            break;
        case 'D':
            pitchClass = 2;
            printf("A note %d translates to %d in pitch class\n", note, pitchClass);
            break;
        case 'E':
            pitchClass = 4;
            printf("A note %d translates to %d in pitch class\n", note, pitchClass);
            break;
        case 'F':
            pitchClass = 5;
            printf("A note %d translates to %d in pitch class\n", note, pitchClass);
            break;
        case 'G':
            pitchClass = 7;
            printf("A note %d translates to %d in pitch class\n", note, pitchClass);
        case 'A':
            pitchClass = 9;
            printf("A note %d translates to %d in pitch class\n", note, pitchClass);
            break;
        case 'B':
            pitchClass = 11;
            printf("A note %d translates to %d in pitch class\n", note, pitchClass);
    }
}