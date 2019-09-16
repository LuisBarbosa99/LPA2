#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int binario(char numero[8])
{
    int resultado = 0, produto,expoente;
    
    expoente = strlen(numero) - 1;
    
    for(int i = 0;i<strlen(numero);i++){
        int valor = numero[i] - '0';
        produto = valor * pow(2,expoente);
        resultado +=produto;
        expoente--;
    }

    return resultado;
}

double octal(char numero[8])
{
    double expoente,resultado = 0, valor, produto;
    
    char *ret = strstr(numero,",");
   
    if(ret!=NULL){
        int point = ret[1] - '0';
        expoente = point -1;

        for(int i = 0;i<strlen(numero);i++)
        {
            if(numero[i]==',') //se o caractere atual é uma vírgula
            { 
                i++;
                expoente = -1;
                valor = numero[i] - '0';
                produto = valor * pow(8,expoente);
                resultado += produto;
                expoente--;
            }else
            {
                valor = numero[i] - '0';
                produto = valor * pow(8,expoente);
                resultado +=produto;
                expoente--;
            }
        }
    }else
    {   
        expoente = strlen(numero) - 1;
        for(int i = 0;i<strlen(numero);i++)
        {            
            valor = numero[i] - '0';
            produto = valor * pow(8,expoente);
            resultado +=produto;
            expoente--;
        }
    }
    return resultado;
}

int hex(char numero[8]){
    int expoente,resultado = 0,produto;
    expoente = strlen(numero) - 1;
   
    for(int i = 0;i<strlen(numero);i++){
        int valor = 0;

        switch(numero[i]){
            
            case 'A':
                valor = 10;
                break;
            case 'B':
                valor = 11;
                break;
            case 'C':
                valor = 12;
                break;
            case 'D':
                valor = 13;
                break;
            case 'E':
                valor = 14;
                break;
            case 'F':
                valor = 15;
                break;
            default:
                valor = numero[i] - '0';
                break;
        }

        produto = valor * pow(16,expoente);
        resultado += produto;
        expoente--;
    }
    return resultado;
}

int main(int argc,char *argv[])
{
    char numero[8];
    strcpy(numero,argv[1]);
    int base = atoi(argv[2]);

    switch(base)
    {
        case 2:
            printf("%i\n",binario(numero));
            break;
        case 8:
            printf("%f\n",octal(numero));
            break;
        case 16:
            printf("%i\n",hex(numero));
            break;
        default:
            printf("ERRO: BASE NAO ENCONTRADA\n");
            break;
    }
    return 0;
}