#include <stdio.h>
#include <math.h>

int main(){
    int i;

    for(int i = 0; i < 12; i++){
        //printf("%i\n", i);
        switch(i){
            case 0:
                printf("C\t");
                break;
            case 1:
                printf("Db\t");
                break;
            case 2:
                printf("D\t");
                break;
            case 3:
                printf("Eb\t");
                break;
            case 4:
                printf("E\t");
                break;
            case 5:
                printf("F\t");
                break;
            case 6:
                printf("Gb\t");
                break;
            case 7:
                printf("G\t");
                break;
            case 8:
                printf("Ab\t");
                break;
            case 9:
                printf("A\t");
                break;
            case 10:
                printf("Bb\t");
                break;
            case 11:
                printf("B\t");
                break;
        }
    }
}