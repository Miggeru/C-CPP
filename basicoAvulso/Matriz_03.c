/* 3. Construa um algoritmo que leia uma matriz quadrada de ordem 4. Leia uma constante K, 
multiplique a diagonal principal por esta constante e imprima a matriz multiplicada. */

#include <stdio.h> 

int main(void) {
	
	int M[4][4];
	int K = 0;
	
	puts("Digite os valores da matriz: \n");
	
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			printf("Valor da posicao [%i][%i]", i, j);
			scanf("%i", &M[i][j]);
		}
	}
	
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			printf("%i ", M[i][j]);
		}
		printf("\n");
	}
	
	printf("Digite a constante K\n");
	scanf("%i", &K);
	
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			if(i == j) {
				M[i][j] *= K;
			}
		}
	}
	
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			printf("%i ", M[i][j]);
		}
		printf("\n");
	}
}
