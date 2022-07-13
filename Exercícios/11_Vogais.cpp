#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char letra;
	int cont_a = 0, cont_e = 0, cont_i = 0, cont_o = 0, cont_u = 0;
	
	printf("Digite uma letra minuscula (a..z) a cada linha e tecle ENTER (digite '.' para parar: \n");
	scanf(" %c", &letra);
	
	while(letra != '.') {
		switch(letra) {
		case 'a':
			cont_a ++; break;
		case 'e':
			cont_e ++; break;
		case 'i':
			cont_i ++; break;
		case 'o':
			cont_o ++; break;
		case 'u':
			cont_u ++; break;
		}
	scanf(" %c", &letra);
	}
	printf("Total de a: %i \n", cont_a);
	printf("Total de e: %i \n", cont_e);
	printf("Total de i: %i \n", cont_i);
	printf("Total de o: %i \n", cont_o);
	printf("Total de u: %i \n", cont_u);
	
system("pause");
return(0);
}
