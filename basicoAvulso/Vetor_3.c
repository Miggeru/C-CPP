/* 3. Faça um programa que possua um vetor denominado A que armazene 6 números inteiros e valores iniciais {1,2,3,4,5,6}. O programa deve executar os seguintes passos:

(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.

(b) Armazene em uma variável inteira (simples) a soma entre os valores das posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma.

(c) Modifique o vetor na posição 1, atribuindo a esta posição o valor 10.

(d) Leia (scanf) novos valores para A nas posições 3 e 4 e mostre na tela cada valor do vetor A (ou seja, todo o vetor A), um em cada linha, utilizando FOR.

(e) Mostre na tela os números de posições pares e zero, de forma inversa (i == 4,2 e 0) c/ FOR

(f) Faça a divisão do elemento da última posição pela primeira posição do vetor A.

(g) Faça a subtração de todos os elementos do vetor com DO WHILE() */

#include <stdio.h>

int main (void) {
	
	int A[6] = {1, 2, 3, 4, 5, 6};
	int i, soma = 0;
	float divi = 1;

	// Questão A
	
	A[0] = 1;
	A[1] = 0;
	A[2] = 5;
	A[3] = -2;
	A[4] = -5;
	A[5] = 7;
	
	// Questão B
	
	soma = A[0] + A[1] + A[5];
	printf("\nVetor na posicao 0, 1 e 5 somados: %i\n", soma);
	
	// Questão C
	
	A[1] = 10;
	
	// Questão D
	
	printf("\nDigite novos valores para os seguintes vetores: \n");
	scanf("%i %i", &A[3], &A[4]);
	
	for(i = 0; i < 6; i++) {
		printf("\n%i\n", A[i]);
	}
	
	// Questão E
	
	for(i = 5 - 1; i >= 0; i--) {
		if(A[i] % 2 == 0) {
			printf("\nValores pares, na ordem inversa: %i\n", A[i]);
		}
	}
	
	// Questão F
	
	divi = A[5] / A[0];
	printf("\nVetor da ultima posicao dividido pelo primeiro: %.1f\n", divi);
	
	// Questão G
	
	i = 1;
	int subt = A[0];
	
	do {
		subt -= A[i];
		printf("A subtracao de todos os elementos do vetor sera de: %i\n", subt);
		i++;
	}while(i < 6);
	
	return 0;
}
