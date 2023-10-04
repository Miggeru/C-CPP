/* exe_10. Uma folha de pagamento simplificada contém os itens: Nome do Funcionário, Salário  e  Taxa  de  Desconto  de  INSS.  
Criar  um programa  que  considere  uma  taxa  de desconto de 8% e mostre no vídeo:

e)Nome do Funcionário.
f)Salário bruto
g)Valor do INSS
h)Salário líquido. */

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
