#include <stdio.h>
#include <stdlib.h>

int main() {
	/*Desenvolva um programa que leia o salário bruto de 3 funcionários 
de uma empresa, calcule e exiba o salário líquido de cada funcionário. 
Lembre-se que o salário líquido é calculado abatendo o imposto do salário 
bruto, com base na tabela de imposto. Ao final, mostre o total de salários 
brutos, salários líquidos e impostos de todos os funcionários.*/
	int cont;
	float sal_bru, sal_liq, imposto, tot_bru = 0, tot_liq = 0, tot_imp = 0;
	cont = 1;
	do {
		printf("\nDigite o salario bruto\n");
		scanf(" %f", &sal_bru);
		if(sal_bru < 1000) {
			imposto = sal_bru * 0.10;
		} else
		if(sal_bru < 2000) {
			imposto = sal_bru * 0.15;
		} else
		if(sal_bru < 10000) {
			imposto = sal_bru * 0.20;
		}else 
		imposto = sal_bru * 0.30;
		
		sal_liq = sal_bru - imposto;
		printf("Salario liquido R$%.2f\n\n", sal_liq);
		tot_bru = tot_bru + sal_bru;
		tot_liq = tot_liq + sal_liq;
		tot_imp = tot_imp + imposto;
		cont ++;
	} while(cont <= 3);
	printf("Total de salario bruto: R$%.2f\n", tot_bru);
	printf("Total de salario liquido: R$%.2f\n", tot_liq);
	printf("Total de imposto: R$%.2f\n", tot_imp);
	
system("pause");
return(0);
}
