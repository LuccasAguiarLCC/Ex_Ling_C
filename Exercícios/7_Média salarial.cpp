#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int cont;
	float salario, soma, maior, media;
	soma = 0;
	maior = 0;
	
	for(cont = 1;cont <= 5;cont = cont + 1)
	{
		printf("\nQual e o seu salario?\nR$");
		scanf(" %f", &salario);
		soma = soma + salario;
		if(salario > maior) {
			maior = salario;
		}				
	}
	
	media = soma / 5;
	printf("\nO maior salario da empresa e de R$%.2f\n", maior);
	printf("A media salarial da empresa e de R$%.2f\n", media);

system("pause");
return(0);
}
