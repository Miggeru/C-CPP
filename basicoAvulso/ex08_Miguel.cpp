#include <stdio.h>

struct Dado{
	char nome[50];
	int idade;
};

struct Dado alterarDados(struct Dado dados);

int main(void) {
	
	struct Dado dados;
	
	dados = alterarDados(dados);
	
	printf("o nome da pessoa alterado e: %s\n", dados.nome);
	printf("a idade da pessoa alterada e: %i", dados.idade);
}

struct Dado alterarDados(struct Dado dados){
	
	puts("Digite um nome: ");
	scanf("%s", dados.nome);
	
	puts("\nDigite uma idade: ");
	scanf("%i", &dados.idade);
	
	return dados;
}
