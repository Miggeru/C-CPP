/* 1. Faça um programa que leia (scanf) um número, passe este número como parâmetro para uma função que retorne 0 se o número for par ou 1 se o número for ímpar. */

#include <stdio.h>

int retornaNumero(int num);

int main(void) {
	
	int numero;
	
	puts("Insira algum numero, e irei lhe retornar 0 caso o numero for par ou 1 caso o numero seja impar: ");
	scanf("%i", &numero);
	
	printf("\n%i", retornaNumero(numero));
}

int retornaNumero(int num) {
	
	if(num % 2 == 0) {
		return 0;
	}else{
		return 1;
	}
}
