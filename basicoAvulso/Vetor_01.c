/* 1. Construa um algoritmo que leia (scanf) um vetor de 5 n�meros inteiros e mostre a
soma dos n�meros e os valores do vetor. (Use forma contra�da para realizar a soma). */

#include <stdio.h>
#define NUMEROS	5

int main (void) {
	
	int soma = 0, i, v[NUMEROS];
	
	for (i = 0; i < NUMEROS; i++) {
		printf("\nInsira seu numero %i: ", i + 1);
		scanf("%i", &v[NUMEROS]);
		printf("\nValor %i\n", v[NUMEROS]);
		soma += v[NUMEROS];
		printf("\nA soma dos seus numeros sera: %i\n", soma);
	}
	return 0;
}
