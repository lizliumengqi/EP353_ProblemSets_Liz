#include <stdio.h>

int main(){
    //Open original text file
    FILE *originalFile;
    originalFile = fopen("LoremIpsum.txt", "r"); 

    //debug
    if (originalFile == NULL){
        printf("File cannot open or doesn't exist");
        return 1;
    }

    //Open new file
    FILE *newFile;
    newFile = fopen("LoremIpsum2.txt", "w");

    //debug
    if (newFile == NULL){
        printf("The new file cannot open or doesn't exist");
        return 1;
    }

    //Reverse upper and lower case, and write into new file
    int c;
    
    while((c = fgetc(originalFile)) != EOF){
        if(c >= 'a' && c <= 'z'){
            c = c - 'a' + 'A';
        }
        else if(c >= 'A' && c <= 'Z'){
            c = c - 'A' + 'a';
        }
        fputc(c, newFile);
    }

    fclose(originalFile);
    fclose(newFile);
    return 0;
}

//I didn't include the new file just so you can run and test it