#include <stdio.h>

void binario(int result);  
char conversao(char numero);
void hex(int result);


void binario(int result){
    
    int bin[8];

    for(int i = 0;i<8;i++)
    {
        bin[i]=0;
    }
    for(int i = 0; result != 0;i++){
        bin[i]= result % 2;
        result= (result - bin[i]) / 2;
    }
    for (int i = 0;i<8;i++){
        printf("%i",bin[i]);
    }
    printf("\n");
}
char conversao(char numero){
    switch(numero){
        case 10:
            numero = 'A';
            break;
        case 11:
            numero = 'B';
            break; 
        case 12:
            numero = 'C';
            break;
        case 13:
            numero = 'D';
            break;
        case 14:
            numero = 'E';
            break;
        case 15:
            numero = 'F';
            break;
    }

    return numero;
}
void hex(int result){
    char hex[4];
    int index = 0;

    while(result>=16){
        hex[index] = result / 16;
        hex[index+1] = result % 16;
        result = hex[index];

        if (hex[index] > 9){
            hex[index] = conversao(hex[index]);
        }
        if (hex[index+1]>9){
            hex[index+1] = conversao(hex[index+1]);
        }
        
        index++;
        
    }
    //printf("%s\n",&hex[0]);
    for (int i = 0;i <= index;i++){
        printf("%s",&hex[i]);
    }
    printf("\n");
}
int main()
{
    int result = 254;
    //binario(result);
    hex(result);
    return 0;
}