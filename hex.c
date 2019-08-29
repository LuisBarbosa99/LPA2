#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    char numero[8] = "FE02";
    int tamanho = strlen(numero),soma = 0,produto;

    for(int i = 0;i<strlen(numero);i++){
        int valor = 0;
        int expoente = tamanho - 1;

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
        soma = produto + soma;
        tamanho--;
    }

    printf("%i\n",soma);
    return 0;
}