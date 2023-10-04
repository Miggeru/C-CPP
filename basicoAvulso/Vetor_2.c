/* 2. Construa um algoritmo que leia um vetor de 5 números reais e mostre-os na ordem inversa. */

#include <stdio.h>

#define TAMANHO 5

int main (void) {
	
	float vetor[TAMANHO] = {1, 2, 3, 4, 5};
	int i;
	
	for(i = TAMANHO - 1; i >= 0; i--) {
		printf("%.1f\n", vetor[i]);
	}
	
}
