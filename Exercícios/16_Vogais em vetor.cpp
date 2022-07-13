#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char letra;
	int posicao, vet[5] = {0, 0, 0, 0, 0};
	scanf(" %c", &letra);
	while(letra != 'z') {
		switch (letra) {
			case 'a':
				vet[0]++;
				break;
			case 'e':
				vet[1]++;
				break;
			case 'i':
				vet[2]++;
				break;
			case 'o':
				vet[3]++;
				break;
			case 'u':
				vet[4];
				break;
		}
		scanf(" %c", &letra);
	}
	printf("Qauntidade de vogais em ordem:\n");
	for(posicao = 0; posicao < 5; posicao ++) {
		printf("%i  ", vet[posicao]);
	}
	
system("pause");
return(0);
}
