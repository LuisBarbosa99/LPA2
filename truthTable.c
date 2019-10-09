#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

int main(int argc, char*argv[]){
	int valorA=0, valorB=0, valorC=0, valorD=0;
	
	char prep1,prep2,resultado;
	
	valorA = atoi(argv[1]);
	
	valorB = atoi(argv[2]);
	
	valorC = atoi(argv[3]);
	
	valorD = atoi(argv[4]);
	for (int i = 0;i<=4;i++){
        printf("%i\n",atoi(argv[i]));
    }
	if(valorA>valorB){
		prep1 = 'V';

	}else{
		prep1 = 'F';
		}
	if(valorC > valorD){
		prep2 = 'V';
	}else{
		prep2 = 'F';
	}
	if(prep1 == 'V' && prep2 == 'V'){
		resultado = 'V';
	}else{
		resultado = 'F';
	}
    printf("%c\n",resultado);
	return 0;
}