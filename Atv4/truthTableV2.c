#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


char greater(int number1,int number2){
    char result;

    if(number1 > number2){
        result = 'V';
    }else{
        result = 'F';
    }

    return result;
}

char less(int number1,int number2){
    char result;

    if(number1 < number2){
        result = 'V';
    }else{
        result = 'F';
    }

    return result;
}

char conjuncao (int number[],char operator[]){

    char boolean,expression1,expression2;
    
    //EXPRESSÃO 1
    
    if (operator[0]=='>'){

        expression1 = greater(number[0],number[1]);
    }
    else{
        
        expression1 = less(number[0],number[1]);
    }

    //EXPRESSÃO 2

    if(operator[1]=='>'){
        
        expression2 = less(number[2],number[3]);    
    }
    else{
        
        expression2 = less(number[2],number[3]);
    }


    if (expression1 == 'V' && expression2 == 'V'){
        boolean = 'V';
    }
    else{
        boolean = 'F';
    }

    //printf("%c ^ %c = %c\n",expression1,expression2,boolean);

    return boolean;
}

int main(int argc, char *argv[]){

    int number[4];
    char operator[4],symbol;
    volatile int indexOperator = 0, indexNumber = 0;
    
    for (int i = 1; i < argc; i++){
        if (strcmp("<",argv[i])== 0 || strcmp(">",argv[i])== 0){
            strcpy(&operator[indexOperator],argv[i]);
            indexOperator++;
            printf("simbolo %i\n",indexOperator);
        }else if(strcmp("^",argv[i])== 0 || strcmp("U",argv[i])== 0){
            strcpy(&symbol,argv[i]);
            printf("operador %i\n",i);

        }else{
            number[indexNumber] = atoi(argv[i]);
            indexNumber++;
            printf("numero %i\n",indexNumber);
            
        }
        
        
    }
    
    switch(symbol){
        case '^':
            conjuncao(number,operator);
            break;
        case 'U':
            //disjuncao(number,operator);
            break;
        case 'O':
            //disjuncaoEx(number,operator);
            break;
        default:
            printf("deu erro no valor do simbolo\n");
    }
    
    return 0;
}