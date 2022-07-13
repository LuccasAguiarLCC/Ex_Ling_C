#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n;
	float media, soma = 0, vet[5];
	for(n = 1; n <= 5; n++) {
		printf("\nAluno %i: ", n);
		scanf(" %f", &vet[n]);
		soma = soma + vet[n];
	}
	media = soma / 5;
	printf("Notas maiores que media %.2f\n\n", media);
	for(n = 1; n <= 5; n++) {
		if(vet[n] >= media) 
			printf("Aluno %i\nMedia: %.2f\n\n", n, vet[n]);
	}
	
system("pause");
return(0);
}
