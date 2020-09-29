#include <stdio.h>
#include <math.h>

//there's a clang error and I don't know why, so I can't print to see if this works correctly

int main(){
    int i;

    for(int i = 0; i <= 11; i++){
        //printf("%d\n", i);
        switch(i){
            case '0':
                printf("C");
                break;
            case '1':
                printf("Db");
                break;
            case '2':
                printf("D");
                break;
            case '3':
                printf("Eb");
                break;
            case '4':
                printf("E");
                break;
            case '5':
                printf("F");
                break;
            case '6':
                printf("Gb");
                break;
            case '7':
                printf("G");
                break;
            case '8':
                printf("Ab");
                break;
            case '9':
                printf("A");
                break;
            case '10':
                printf("Bb");
                break;
            case '11':
                printf("B");
        }
    }

}