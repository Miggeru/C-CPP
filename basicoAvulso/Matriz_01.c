/* 1. Faça um programa que possua um matriz 3x3 denominado M que armazene 9 números inteiros e valores iniciais {1,2,3,4,5,6,7,8,9}. O programa deve 
executar os seguintes passos:

(a) Atribua/mude o valor para 50 na linha 2, coluna 2 (quinto elemento) e para 40 na quarta posição da matriz M e mostre na tela. 

(b) Armazene em uma variável inteira (simples) a soma entre os valores das posições M[0][1], M[1][1] e M[2][2] da matriz e mostre na tela esta soma. 

(c) Leia (scanf) novos valores para M nas posições 0 a 6, utilizando FOR. 

(d) Mostre na tela toda a matriz, no formato de matrizes (pulando linhas quando necessário) usando FOR 

(e) Faça a divisão do último elemento pelo primeiro elemento da matriz M. 

(f) Faça a subtração de todos os elementos da matriz com WHILE() */

#include <stdio.h>

int main(void) {
	
	int M[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i, j;
	int soma = 0, sub = 0;
	float div;
	
	//Letra A

	M[2][2] = 50;
	M[1][1] = 40;
	
	for (i = 0; i < 3; i++){
		for(j = 0; j < 3; j++) {
			printf("%i, ", M[i][j]);
		}
		printf("\n");
	}
	
	// Letra B
	
	soma = M[0][1] + M[1][1] + M[2][2];
	printf("A soma das posicoes M[0][1], M[1][1] e M[2][2], sera de: %i", soma);
	
	// Letra C
	
	puts("insira novos valores para a matriz: \n");
	
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("Novo valor %i: \n", j + 1);
			scanf("%i", &M[i][j]);
		}
	}
	
	// Letra D
	
	for (i = 0; i < 3; i++){
		for(j = 0; j < 3; j++) {
			printf("%i, ", M[i][j]);
		}
		printf("\n");
	}
	
	// Letra E
	
	div = (float)M[2][2] / (float)M[0][0];
	
	printf("\nResultado da divisao do ultimo elemento da matriz pelo primeiro: %.1f", div);
	
	// Letra F
	
	i = 0;
	
	while(i < 3) {
		j = 0;
		while(j < 3){
			sub -= M[i][j];
			j++;
		}
		i++;
	}
	printf("\nResultado da subtracao de todos os elementos da matriz: %i", sub);	
}
