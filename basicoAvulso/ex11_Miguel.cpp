/* Baseando  no  item  anterior,  escreva  um  programa  que  define  uma  taxa  de desconto de acordo com o seguinte critério:
i)Salário até R$ 1.000,00 –desconto de 8%
j)Salário entre R$ 1.000,01 e 1.500,00 –desconto de 8,5%
k)Salário acima de R$ 1.500,00 –desconto de 9%
l)O  programa  deve  mostrar  o  salário  em  consideração  e  mostrar  sua  taxa  de desconto, bem como o valor do desconto. */

#include <stdio.h>

int main(void) {
	
	char nome[50];
	double salarioB;
	float taxa1 = 0.08;
	float taxa2 = 0.085;
	float taxa3 = 0.09;
	double salarioL;
	float desconto;
	
	puts("Insira o nome do funcionario: ");
	scanf("%s", nome);
	
	puts("\nInsira o salario bruto: ");
	scanf("%lf", &salarioB);	
	
	if(salarioB <= 1000.01) {
		salarioL = salarioB - (salarioB * taxa1);
		printf("O salario liquido e de: %.2lf", salarioL);
		desconto = salarioB * taxa1;
		printf("\nO desconto e de %.2f a uma taxa de %.2f", desconto, taxa1);
		
	}else if(salarioB > 1000.01 && salarioB <= 1500){
		salarioL = salarioB - (salarioB * taxa2);
		printf("O salario liquido e de: %.2lf", salarioL);
		desconto = salarioB * taxa2;
		printf("\nO desconto e de %.2f a uma taxa de %.3f", desconto, taxa2);
		
	}else if(salarioB > 1500) {
		salarioL = salarioB - (salarioB * taxa3);
		printf("O salario liquido e de: %.2lf", salarioL);
		desconto = salarioB * taxa3;
		printf("\nO desconto e de %.2f a uma taxa de %.3f", desconto, taxa3);
	}
	return 0;
}
