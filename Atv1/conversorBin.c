#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int numBin(int);
int menu();
int decBin();
int hexBin();
int hexOct();

int numBin(int numero){
    int i;
    int result=numero;
    int bin[8];
    for(i=0;i<8;i++)
        bin[i]=0;
    for(i=0;result!=0;i++){
        bin[i]=result%2;
        result=(result - bin[i])/2;
    }
    printf("binario: ");
    for(i=7;i>=0;i--)
        printf("%d", bin[i]);
    return 0;
}

int menu(){
    int op;
    system("clear");
    printf("\n");
    printf("\t1. decimal para binario\n");
    printf("\t2. hexadecimal para binario\n");
	printf("\t3. octal para binario\n");
    printf("\t4. sair\n\n");
    
    printf("\tdigite sua opcao:");
    scanf("%i", &op);
    switch(op){
            case 1:
                decBin();
                break;
            case 2:
                hexBin();
                break;
            case 3:
                hexOct();
                break;
            case 4:
                exit(0);
                            
            default:
                printf("opcao invalida\n");
                menu();
    }
    return 0;
}

int decBin(){
    int number;
    char wait;
    system("clear"); // limpa a tela
    printf("digite o numero:");
    scanf("%d", &number);
    numBin(number);
    fflush(stdin); // limpa o buffer
    wait = getchar(); // selecionar a proxima opcao de operacao 
    if(wait) menu();
    return 0;
}

int hexBin(){
    int number;
    char wait;
    system("clear"); // limpa a tela
    printf("digite o numero:");
    scanf("%x", &number);
    numBin(number);
    fflush(stdin); // limpa o buffer
    wait = getchar(); // selecionar a proxima opcao de operacao 
    if(wait) menu();
    return 0;
}

int hexOct(){
	char number[100];
	char wait;
	int tamanho, i;
	system("clear"); // limpa a tela
    printf("digite o numero:");
	fflush(stdin); // limpa buffer de entrada 
	gets(number);
	tamanho=strlen(number);
	printf("Binario: ");
	for (i = 0; i < tamanho; i++){ 
		switch (number[i]){ 
			case '0': printf("000"); break; 
			case '1': printf("001"); break; 
			case '2': printf("010"); break; 
			case '3': printf("011"); break; 
			case '4': printf("100"); break; 
			case '5': printf("101"); break; 
			case '6': printf("110"); break; 
			case '7': printf("111"); break; 
		} 
	}
	wait = getchar();
	if(wait) menu();
    return 0;
} 

int main(){
    menu();
    return 0;
}



