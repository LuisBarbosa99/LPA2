#include <stdio.h>
int binario(int result){
    
    int bin[8];

    for(int i = 0;i<8;i++)
    {
        bin[i]=0;
    }
    for(int i = 0; result != 0;i++){
        bin[i]= result % 2;
        result= (result - bin[i]) / 2;
    }
    
    return bin;
}
int hex(){
    int numero = 80,result;
    char hex[4];
    
}
int main()
{
    int result = 80;
    printf("%i",binario(result));
    return 0;
}