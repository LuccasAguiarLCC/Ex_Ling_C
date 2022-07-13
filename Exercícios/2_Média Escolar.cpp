#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int cont;
	float av1, av2, av3, media;
	
	for(cont = 1;cont <= 3;cont = cont + 1) {
		printf("\nDigite sua nota da AV1: \n");
		scanf(" %f", &av1);
		printf("Digite sua nota da AV2: \n");
		scanf(" %f", &av2);
		printf("Digite sua nota da AV3: \n");
		scanf(" %f", &av3);
		media = (av1 + av2 + av3) / 3;
	if(media >= 7) 
	{
		printf("\nSua media foi %.1f!\nVoce foi aprovado! Parabens!\n", media);
	} else {
		printf("\nSua media foi %.1f...\nVoce foi reprovado!\n", media);
		}
	}

	
system("pause");
return(0);
}
