#include <stdio.h>

#define TAMANHO 5

struct pessoa {
	char nome[50];
	int idade;
};

int main (void) {
	
	struct pessoa p[TAMANHO];
	int i, qtdPessoas;
	
	printf("\nDigite quantas pessoas vc quer cadastrar: \n");
	scanf("%i", &qtdPessoas);
	
	for(i=0; i < qtdPessoas; i++) {
		printf("\nInsira o nome da pessoa %i: \n", i + 1);
		scanf("%s", &p[i].nome);
		fflush(stdin);
		
		printf("\nInsira a idade da pessoa %i: \n", i + 1);
		scanf("%i", &p[i].idade);
		fflush(stdin);
	}
	
	for(i=0; i < qtdPessoas; i++) {
		printf("\nnome: %s idade: %i\n", p[i].nome,p[i].idade);
	}

	return 0;
}
