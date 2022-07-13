#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int cont;
	float reajuste, salario, novo_salario, maior;
	maior = 0;
	printf("Qual o percentual de reajuste? \n");
	scanf(" %f", &reajuste);
	for(cont = 1;cont <= 5;cont = cont + 1) {
		printf("\nDigite o valor do salario: R$\n");
		scanf(" %f", &salario);
		novo_salario = salario + (salario * reajuste / 100);
		if(novo_salario > maior) {
			maior = novo_salario;
		}
	}
	printf("Foi aplicado um reajuste de %.1f%% no salario!\n", reajuste);
	printf("O maior salario atualmente e de R$%.2f\n", maior);

system("pause");
return(0);
}
