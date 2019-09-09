#include <stdio.h>
#include <string.h>

void getHexValue(char palavra[]){
    printf("valores dos caracteres em hexadecimal:\n");
    for(int i =0;i<strlen(palavra);i++){
        printf("%x\n",palavra[i]);
    }
}

void getByteSize(char palavra[]){
    int value = 0;
    while ((palavra[value])!='\0'){
        value++;
    }
    printf("bytes: %d\n",value);
}

void getCharSize(char palavra[]){
    char palavrinha[] = {*palavra};

    int value = strlen(palavrinha);
    printf("caracteres: %d\n",value);
}

int main(int argc,char *argv[]){

    char palavra[32];
    strcpy(palavra,argv[1]);

    getHexValue(palavra);
    getByteSize(palavra);
    getCharSize(palavra);

    return 0;
}