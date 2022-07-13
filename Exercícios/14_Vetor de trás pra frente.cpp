#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int a, vet[6];
	for(a = 1; a < 6; a++) {
		printf("\nDigite um numero inteiro: ");
		scanf(" %i", &vet[a]);
	}
	for(a = 5; a > 0; a--) {
		printf("\nPosicao num_%i: Valor(%i)\n\n", a, vet[a]);
	}
	
system("pause");
return(0);
}
