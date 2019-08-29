//converter 1101(2), 41.2(8) e FE02(16) para decimal
#include <stdio.h>
#include <string.h>
#include <math.h>


int binario(char numero[8]){
    int soma = 0, tamanho = strlen(numero),produto;
    
    for(int i = 0;i<strlen(numero);i++){
        int expoente = tamanho - 1;
        int fator = numero[i] - '0';
        
        produto = fator * pow(2.00,expoente);
        soma = produto + soma;
        tamanho--;
    }
    return soma;
}
int main(){
    char numero[8] = "1101"; //numero de entrada
    
    printf("%i\n",binario(numero));
    return 0;
}