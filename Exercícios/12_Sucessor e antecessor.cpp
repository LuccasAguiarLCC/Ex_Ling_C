#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int num;
	do {
		printf("\nDigite um numero (0 ou 9 para encerrar): \n");
		scanf(" %i", &num);
	if(num != 0 && num != 9){
		if(num % 2 == 0) {
			printf("O numero %i e par e seu sucessor e %i.\n\n", num, num + 1);
		}else {
			printf("O numero %i e impar e seu antecessor e %i.\n\n", num, num -1);
		}
	}
	} while(num != 0 && num != 9);
system("pause");
return(0);
}
