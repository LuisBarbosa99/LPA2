#include <stdio.h>
#include <string.h>
#include <math.h>

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

int main()
{

    char numero[8] = "15";
    
    printf("%f\n",octal(numero));

    return 0;
}