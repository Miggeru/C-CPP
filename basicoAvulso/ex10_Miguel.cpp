/* exe_10. Uma folha de pagamento simplificada cont�m os itens: Nome do Funcion�rio, Sal�rio  e  Taxa  de  Desconto  de  INSS.  
Criar  um programa  que  considere  uma  taxa  de desconto de 8% e mostre no v�deo:

e)Nome do Funcion�rio.
f)Sal�rio bruto
g)Valor do INSS
h)Sal�rio l�quido. */

#include <stdio.h>

int main(void) {
	
	char nome[50];
	double salarioB;
	float taxa = 0.08;
	double salarioL;
	
	puts("Insira o nome do funcionario: ");
	scanf("%s", nome);
	
	puts("\nInsira o salario bruto: ");
	scanf("%lf", &salarioB);	
	
	salarioL = salarioB - (salarioB * taxa);
	
	printf("\nO nome do funcionario e: %s", nome);
	printf("\nO salario liquido e de: %.2lf", salarioL);
	
	return 0;
}
