#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int opcao;
	printf("Entre com um numero:\n");
	scanf(" %d", &opcao);
	
	if(opcao >= 0){
		if(opcao == 0){
			printf("\nValor nulo.\n");
		}else{
			printf("\nValor positivo.\n");
		}
	} else{
		printf("\nValor negativo.\n");
	}

system("PAUSE");
return 0;
}
