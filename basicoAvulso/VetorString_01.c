/* 1. Criar um programa que armazene o nome e a idade de uma lista de pessoas em vetores, e calcule a média de idade da lista. (ex: nomes[5][30] –> vetor de 5 nomes) */

#include <stdio.h>

#define TAMANHO_MAXIMO 10

int main(void) {
	
	int quantidade_pessoas[TAMANHO_MAXIMO];
	int i;
	char nomes[TAMANHO_MAXIMO][100];
	
	
	printf("Quantas pessoas vc quer adicionar na lista: ");
	scanf("\n%i", &quantidade_pessoas[TAMANHO_MAXIMO]);
		
	for(i = 0; i <= quantidade_pessoas[TAMANHO_MAXIMO]; i++) {
		printf("Nome da pessoa %i : \n", i + 1);
		fgets(nomes, 100, stdin);
	}
	printf("%s", nomes);
	
}
