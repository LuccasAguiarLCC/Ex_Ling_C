#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int posicao, vet1[10], vet2[10];
	for(posicao = 0; posicao < 10; posicao ++) {
		scanf(" %i", &vet1[posicao]);
		if(vet1[posicao] % 2 == 0){
			vet2[posicao] == vet1[posicao] ++; 
		}else
			vet2[posicao] == vet1[posicao] --;
	}
	printf("Elementos Vet1 e Vet2:\n");
	for(posicao = 0; posicao < 10; posicao ++) {
		printf("%i\n", vet1[posicao]);
		printf("%i\n", vet2[posicao]);
	}
	
system("pause");
return(0);
}
