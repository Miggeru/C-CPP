/* 1. Fa�a um programa que leia (scanf) um n�mero, passe este n�mero como par�metro para uma fun��o que retorne 0 se o n�mero for par ou 1 se o n�mero for �mpar. */

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
