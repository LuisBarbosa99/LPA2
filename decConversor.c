#include <stdio.h>
#include <string.h>
#include <math.h>

int binario(char numero[8],int tamanho){
    int soma = 0;
    for(int i = 0;i<strlen(numero);i++){
        int expoente = tamanho - 1;
        int fator = numero[i] - '0';
        int produto = fator * pow(2.00,expoente);
        soma = produto + soma;
        tamanho--;
    }
    return soma;
}
int main(){
    char numero[8] = "1111";
    int tamanho  = strlen(numero);
    
    printf("%i\n",binario(numero,tamanho));
    return 0;
}