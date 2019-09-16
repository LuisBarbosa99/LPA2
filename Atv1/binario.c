#include <stdio.h>
#include <string.h>
#include <math.h>


int binario(char numero[8]){
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
int main(){
    char numero[8] = "1101"; //numero de entrada
    
    printf("%i\n",binario(numero));
    return 0;
}