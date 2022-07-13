#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i, p;
	printf("Digite um numero par: \n");
	scanf(" %i", &p);
	printf("Digite um numero impar: \n");
	scanf(" %i", &i);
	if((p % 2 == 0) && (i % 2 == 1)) {
		printf("");
	} else if ((p % 2 != 0) && (i % 2 != 1)) {
		printf("Algo deu errado!\n");
return(0);
	} else {
		printf("Os subconjuntos sao iguais!\n");
return(0);
	}
	if(p > i) {
		printf("O numero PAR e maior que o numero IMPAR!\n");
	}else {
		printf("O numero IMPAR e maior que o numero PAR!\n");
	} 

system("pause");
return(0);
}
