/* 4. Faça um programa que simule um Gaveteiro com 8 gavetas no total, sendo 4 gavetas na parte de cima e mais 4 gavetas na 
parte de baixo do móvel.

4.1) Você deve definir inicialmente a quantidade de roupas colocadas em cada gaveta (entre 0 e 5 roupas);

4.2) agora, deve ser solicitado ao usuário se ele deseja retirar ou adicionar roupas e a quantidade desejada.
- Quando retirar, não deve permitir retirar uma quantidade maior que a disponível na gaveta e também informar caso a gaveta esteja 
vazia. Deve atualizar e mostrar a nova quantidade de roupas disponível nas gavetas e no gaveteiro como um todo.

- Quando adicionar, não deve permitir adicionar uma quantidade maior que a disponível na gaveta e também informar caso a gaveta 
esteja cheia (5 roupas). Deve atualizar e mostrar a nova quantidade de roupas disponível nas gavetas e no gaveteiro como um todo.*/

#include <stdio.h> 

void adicionaRoupa(void);
void removeRoupa(void);
void mostraGaveta(void);

int gaveta[2][4] = {0};

int main(void) {
	
	//4.1
	
	int opcao = -1;
	
	while(opcao != 0) {
		printf("ola, escolha umas das opcoes:\n 1 - adicionar roupas\n 2 - remover roupas\n 0 - sair\n");
		scanf(" %i", &opcao);
		
		switch (opcao) {
			case 1: adicionaRoupa(); mostraGaveta(); break;
			case 2: removeRoupa(); mostraGaveta(); break;
			case 0: break;
			default: printf("Opcao invalida\n"); break;
		}
	}

}

	// 4.2

void adicionaRoupa(void) {
	int linha = 0, coluna = 0;
	int quantidade = 0;
	
	printf("Digite em qual posicao voce quer adicionar roupa: \n");
	
	while(1) {
		scanf("%i %i", &linha, &coluna);
		
		if(linha > 1 || coluna > 3) {
			printf("Essa posicao nao existe, digite outra\n");
		}else if(gaveta[linha][coluna] >= 5) {
			printf("essa gaveta esta cheia, escolha outra\n");
		}else{
			break;
		}
	}
	
	printf("Digite a quantidade que quer adicionar: \n");
	
	while(1) {
		scanf("%i", &quantidade);
		
		if(gaveta[linha][coluna] + quantidade > 5) {
			printf("Total nao pode passar de 5 roupas. Digite novamente\n");
		}else{
			break;
		}
	}
	
	gaveta[linha][coluna] += quantidade;
}

void removeRoupa(void) {
	int linha = 0, coluna = 0;
	int quantidade = 0;
	
	printf("Digite em qual posicao voce quer remover roupa: \n");
	
	while(1) {
		
		scanf("%i %i", &linha, &coluna);	
		
		if(linha > 1 || coluna > 3) {
			printf("Essa posicao nao existe, digite outra\n");
		}else if(gaveta[linha][coluna] <= 0) {
			printf("Essa posicao esta vazia\n");
			return;
		}else{
			break;
		}
	}
	
	printf("Digite a quantidade que voce deseja remover: \n");
	
	while(1) {
		
		scanf("%i", &quantidade);
		
		if(quantidade > gaveta[linha][coluna]) {
			printf("Voce nao pode tirar mais do que tem. Insira novamente\n");
		}else {
			break;
		}
	}
	
	gaveta[linha][coluna] -= quantidade;
}

void mostraGaveta(void) {
	
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 4; j++) {
			printf("%i ", gaveta[i][j]);
		}
		printf("\n");
	}
}
