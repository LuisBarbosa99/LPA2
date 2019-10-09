#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void conjuncao (char operator[],int indexSymbol){
    char boolean;
    
    printf("chegou aqui\n");
    //return boolean;
}


int main(int argc, char *argv[]){
    
    int indexSymbol = 0, number[4];
    char operator[4],symbol,comp;

    number[0] = atoi(argv[1]);
    number[1] = atoi(argv[3]);
    number[2] = atoi(argv[5]);
    number[3] = atoi(argv[7]);

    for (int i = 0; i < argc; i++){
        if (strcmp("<",argv[i])== 0 || strcmp(">",argv[i])== 0 || strcmp("^",argv[i])== 0 || strcmp("v",argv[i])== 0){
            strcpy(&operator[indexSymbol],argv[i]);
            indexSymbol++;
        }
    }
    
    

    return 0;
}