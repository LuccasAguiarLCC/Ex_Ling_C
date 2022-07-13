#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int cont, num_lista, num, soma_par, soma_impar;
	soma_par = 0;
	soma_impar = 0;
	printf("Quantos numeros tera na lista? \n");
	scanf(" %i", &num_lista);
	
	for(cont = 1;cont <= num_lista;cont = cont + 1) {
		printf("Digite um numero: \n");
		scanf(" %i", &num);
		if(num % 2 == 0) {
			soma_par = soma_par + num;
		} else {
			soma_impar = soma_impar + num;
		}
	}
	printf("A soma dos numeros pares e igual a %i\n", soma_par);
	printf("A soma dos numeros impares e igual a %i\n", soma_impar);

system("pause");
return(0);
}
