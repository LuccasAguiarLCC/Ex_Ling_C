#include <stdio.h>
#include <stdlib.h>

int main(void){
	
printf("-=--=--=--=-IMC-=--=--=--=-\n");
char nome[20], sobrenome[20], comida[25];{
		printf("\nQual o seu primeiro nome?\n");
			scanf(" %s", &nome);
		printf("Qual o seu sobrenome?\n");
			scanf(" %s", &sobrenome);
		printf("Qual a sua comida preferida?\n");
			scanf(" %s", &comida);
	}
	
int idade;{
		printf("Qual a sua idade?\n");
			scanf(" %d", &idade);
	}
	
float altura, peso, imc;{
		printf("Qual a sua altura?\n");
			scanf(" %f", &altura);
		printf("Qual o seu peso?\n");
			scanf(" %f", &peso);
	imc = (peso/altura) / altura;
	}
if( imc > 25 ){

	printf("Cuidado, voce esta em sobrepeso!\n");
}
	
	printf("\nNome: %s %s\nIdade: %d\nComida preferida: %s\n"
	"Altura: %.2f\nPeso: %.2f\nIMC: %.2f\n", nome, sobrenome, idade, comida,
	altura, peso, imc);
	
printf("-=--=--=--=-IMC-=--=--=--=-\n");

system ("PAUSE");
return 0;
}
