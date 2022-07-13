#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int cont_alunos;
	float av1, av2, av3, media;
	cont_alunos = 1;
	
	while(cont_alunos <= 3) {
		printf("\nDigite a nota da AV1: ");
		scanf(" %f", &av1);
		printf("\nDigite a nota da AV2: ");
		scanf(" %f", &av2);
		printf("\nDigite a nota da AV3: ");
		scanf(" %f", &av3);
		
		media = (av1 + av2 + av3) / 3;
		if(media >= 7) {
			printf("\n__________Sua media foi %.1f e voce foi APROVADO!__________\n", media);
		} else {
			printf("\n__________Sua media foi %.1f e voce foi REPROVADO!__________\n", media);
		}
		cont_alunos ++;
	}	

system("pause");
return(0);
}
