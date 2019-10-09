#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void conjuncao (char entrada[],int index){
    char boolean;
    
    for(int i = 0; i < index;i++){
        printf("%c\n",entrada[i]);
    }
    //return boolean;
}


int main(int argc, char *argv[]){
    
    int index;
    char entrada[10],symbol;

    for (int i = 1;i < argc;i++){ // Para guardar os valores de entrada no array de char
        strcpy(&entrada[i-1],argv[i]);
    }
    for (int i = 0;i < argc;i++){
        if (entrada[i]=='^' || entrada[i]=='v'){
            symbol = entrada[i];
            index = i;
        }
        
    }
    switch(symbol){
            case '^':
                conjuncao(entrada,index);
                break;
            case 'v':
                //disjuncao(entrada);
                break;
            default:

                break;
        }

    return 0;
}