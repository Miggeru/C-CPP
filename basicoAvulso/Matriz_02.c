/* 2. Construa um algoritmo que leia duas matrizes 3x3 e gere uma terceira matriz com a soma dos elementos correspondentes de a 
e b. */

#include <stdio.h>

int main(void) {
	
	int A[3][3], B[3][3], C[3][3];
	
	puts("Insira os valores da matriz: \n");
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			printf("Digite o valor da posicao da matriz A [%i][%i]", i, j);
			scanf("%i", &A[i][j]);
		}
	}
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			printf("%i ", A[i][j]);
		}
		printf("\n");
	}
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			printf("Digite o valor da posicao da matriz B [%i][%i]", i, j);
			scanf("%i", &B[i][j]);
		}
	}
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			printf("%i ", B[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			printf("%i ", C[i][j]);
		}
		printf("\n");
	}
}
