#include <stdio.h>
#include <string.h>
#include <math.h>
double octal(char numero[8]){
    double tamanho = strlen(numero),expoente,resultado = 0, valor, produto;
    for(int i = 0;i<strlen(numero);i++){
        if(numero[i]==','){
            i++;
            expoente = -1;
            valor = numero[i] - '0';
            produto = valor * pow(8,expoente);
            resultado = produto + resultado;
            printf("i = %i %f\n",i,resultado);
            expoente--;
        }else{
            expoente = tamanho - 1;
            valor = numero[i] - '0';
            produto = valor * pow(8,expoente);
            resultado = produto + resultado;
            tamanho--;
            printf("i = %i %f\n",i,resultado);
        }
    }
    return resultado;
}

int main(){

    char numero[8] = "41,2";
    
    printf("%f\n",octal(numero));

    return 0;
}