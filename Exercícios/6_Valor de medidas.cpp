#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float metros;
	printf("Qual o valor em em metros?\n");
	scanf(" %f", &metros);
	printf("Valor em milimetros: %.3fmm\n", metros / 1000);
	printf("Valor em centimetros: %.2fcm\n", metros / 100);
	printf("Valor em decimetros: %.1fdm\n", metros / 10);
printf("\n \n");
system("pause");
return(0);
}

