#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int pos, soma1=0, soma2=0, soma3=0;
	float media_prova1, media_prova2, media_prova3, 
	prova1[3], prova2[3], prova3[3], medialuno;
	
	for(pos = 1;pos <= 3; pos ++) {
		printf("\nNota da prova 1 do aluno %i: ", pos);
		scanf(" %f", &prova1[pos]);
		soma1 = soma1 + prova1[pos];
	}
	media_prova1 = soma1 / 3;
	printf("\nA media da prova 1 e: %.2f\n\n", media_prova1);
	
	for(pos = 1;pos <= 3; pos ++) {
		printf("\nNota da prova 2 do aluno %i: ", pos);
		scanf(" %f", &prova2[pos]);
		soma2 = soma2 + prova2[pos];
	}
	media_prova2 = soma2 / 3;
	printf("\nA media da prova 2 e: %.2f\n\n", media_prova2);
	
	for(pos = 1;pos <= 3; pos ++) {
		printf("\nNota da prova 3 do aluno %i: ", pos);
		scanf(" %f", &prova3[pos]);
		soma3 = soma3 + prova3[pos];
	}
	media_prova3 = soma3 / 3;
	printf("\nA media da prova 3 e: %.2f\n\n", media_prova3);
	
	for (pos=1;pos<=3;pos++)
{
medialuno=(prova1[pos] + prova2[pos] + prova3[pos])/3;
}
printf ("a media do aluno e: %.2f",medialuno);
	
	
	
system("pause");
return(0);
}
